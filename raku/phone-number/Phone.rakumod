unit module Phone;

constant @errors = (
   '11 digits must start with 1',
   'more than 11 digits',
   'incorrect number of digits',
   'letters not permitted',
   'punctuations not permitted',
   'area code cannot start with zero',
   'area code cannot start with one',
   'exchange code cannot start with zero',
   'exchange code cannot start with one',
);

sub clean-number(Str $number --> Str) is export {
    die @errors[3] if $number.contains: /<alpha>/;

    # <punct> matches "(";
    die @errors[4] if $number.contains: /<[!:]>/;

    my Int @num = $number.comb(/\d/)>>.Int;
    given @num {
        when .elems == 11 {
            die @errors[0] if .[0] !== 1;
            @num .= skip;
            proceed;
        }
        when .elems == 10 {
            # Area code.
            die @errors[5] if .[0] == 0;
            die @errors[6] if .[0] == 1;

            # Exchange code.
            die @errors[7] if .[3] == 0;
            die @errors[8] if .[3] == 1;

            return .join;
        }
        when .elems > 11 { die @errors[1] }
        when .elems < 10 { die @errors[2] }
    }
}
