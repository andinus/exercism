unit module Hamming;

subset DNA of Str where * !~~ /<-[ACGT]>/;
sub hamming-distance(
    DNA $strand1, DNA $strand2 where $strand1.chars == $strand2.chars --> Int
) is export {
    my Int $dist = 0;
    for ^$strand1.chars -> $idx {
        $dist++ unless $strand1.comb[$idx] eq $strand2.comb[$idx];
    }
    return $dist;
}
