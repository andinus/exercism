unit module Acronym;

sub abbreviate(Str $phrase --> Str) is export {
    [~] $phrase.uc.split((' ', '-'), :skip-empty).map(
        *.comb(/<[A..Z]>/).first
    )
}
