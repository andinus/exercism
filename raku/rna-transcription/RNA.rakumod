unit module RNA;

sub to-rna (Str $dna --> Str) is export {
    $dna.trans(<G C T A> => <C G A U>);
}
