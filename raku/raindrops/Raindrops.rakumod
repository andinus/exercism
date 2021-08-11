unit module Raindrops;

sub raindrop(Int $num --> Str) is export {
    my Str $res;
    $res ~= "Pling" if $num %% 3;
    $res ~= "Plang" if $num %% 5;
    $res ~= "Plong" if $num %% 7;
    return $res // $num.Str;
}
