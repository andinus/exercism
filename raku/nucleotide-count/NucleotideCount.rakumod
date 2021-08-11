unit module NucleotideCount;

subset DNA of Str where * !~~ /<-[ACGT]>/;
sub nucleotide-count (DNA $strand) is export {
    $strand.comb.Bag;
}
