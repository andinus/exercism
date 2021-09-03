unit module Luhn;

sub is-luhn-valid($input is copy --> Bool) is export {
    return False if $input.comb.grep(/\d|\s/).join ne $input;
    $input = $input.comb.grep(/\d/)>>.Int;
    return False if $input.elems < 2;

    ([+] gather for $input.reverse.kv -> $k, $v {
         take $k !%% 2 ?? ($_ > 9 ?? $_ - 9 !! $_) !! $v with $v * 2;
     }) %% 10;
}
