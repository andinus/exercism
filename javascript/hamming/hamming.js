'use strict';

export const compute = (strand1, strand2) => {
    if (strand1 === "" && strand2 === "")
        return 0;

    if (strand1 === "")
        throw new Error('left strand must not be empty');

    if (strand2 === "")
        throw new Error('right strand must not be empty');

    if (strand1.length !== strand2.length)
        throw new Error('left and right strands must be of equal length');

    let distance = 0;
    for (let idx = 0; idx < strand1.length; idx++)
        if (strand1[idx] !== strand2[idx])
            distance++;

    return distance;
};
