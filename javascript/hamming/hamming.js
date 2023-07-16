'use strict';

function* genStr(string) {
    let i = 0;
    while (i < string.length)
        yield string[i++];
}

export const compute = (strand1, strand2) => {
    if (strand1 === "" && strand2 === "")
        return 0;

    if (strand1 === "")
        throw new Error('left strand must not be empty');

    if (strand2 === "")
        throw new Error('right strand must not be empty');

    if (strand1.length !== strand2.length)
        throw new Error('left and right strands must be of equal length');

    let strand1Gen = genStr(strand1);
    let strand2Gen = genStr(strand2);

    let distance = 0;
    while (true) {
        const ch1 = strand1Gen.next();
        if (ch1.done)
            break;

        if (ch1.value !== strand2Gen.next().value)
            distance++;
    }

    return distance;
};
