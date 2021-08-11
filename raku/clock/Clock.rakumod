unit class Clock;

has Int $.hour;
has Int $.minute;

submethod TWEAK() { self.wrap-time; }

method time { sprintf "%02d:%02d", $!hour, $!minute; }

method add-minutes(UInt $amount --> Clock) {
    $!hour += $amount div 60;
    $!minute += $amount % 60;
    self.wrap-time;
}

method subtract-minutes(UInt $amount --> Clock) {
    $!hour -= $amount div 60;
    $!minute -= $amount % 60;
    self.wrap-time;
}

method wrap-time(--> Clock) {
    $!hour += $!minute div 60;
    $!minute %= 60;
    $!hour %= 24;
    return self;
}
