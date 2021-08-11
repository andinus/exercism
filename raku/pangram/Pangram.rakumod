unit module Pangram;

sub is-pangram (Str $string) is export {
    $string.lc.comb ⊇ ('a'..'z');
}
