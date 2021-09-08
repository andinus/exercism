unit module Acronym;

sub abbreviate(Str $phrase --> Str) is export {
    $phrase.split((' ', '-'), :skip-empty).map(*.comb(/<[a..zA..Z]>/).first).join.uc
}
