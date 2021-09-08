unit module Luhn;

sub is-luhn-valid(Str $input --> Bool) is export {
    with $input.comb(/\d|\s/) -> @num-spc {
        return False if @num-spc.elems !== $input.chars;

        my Int @numbers = @num-spc.comb(/\d/)>>.Int;
        return False if @numbers.elems < 2;

        ([+] gather for @numbers.reverse.kv -> $k, $v {
             take $k !%% 2 ?? subtract-if-greater($v * 2, 9) !! $v;
         }) %% 10
    }
}

#| subtract-if-greater will subtract $to-sub from $num if $num is
#| greater than $to-sub.
sub subtract-if-greater(Int $num, Int $to-sub --> Int) {
    $num > $to-sub ?? $num - $to-sub !! $num
}
