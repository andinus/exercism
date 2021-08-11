unit module Anagram;

sub match-anagrams (Str :$subject!, :@candidates!) is export {
    gather for @candidates {
        next if .fc eq $subject.fc;
        take $_ if .fc.comb.Bag eqv $subject.fc.comb.Bag;
    }
}
