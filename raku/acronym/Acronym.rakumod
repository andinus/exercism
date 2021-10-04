unit module Acronym;

sub abbreviate(Str $phrase --> Str) is export {
    [~] $phrase.split(/<[-_\s]>/).map(*.substr(0, 1).uc)
}
