unit module WordCount;

sub count-words (Str $sentence) is export {
    $sentence.lc.comb(/\w+\'\w+|\w+/).Bag;
}
