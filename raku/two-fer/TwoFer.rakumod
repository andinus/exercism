unit module TwoFer;

sub two-fer ($name?) is export {
    return "One for {$name // "you"}, one for me.";
}
