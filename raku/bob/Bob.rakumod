unit class Bob;

method hey (Str $msg is copy) {
    $msg .= trim;

    given $msg.trim {
        when .chars == 0 { "Fine. Be that way!" }
        when $_ eq .uc && $_ ~~ /<[a..zA..Z]>/ {
            return "Calm down, I know what I'm doing!" if $_.ends-with("?");
            "Whoa, chill out!";
        }
        when .ends-with("?") { "Sure." }
        default { "Whatever." }
    }
}
