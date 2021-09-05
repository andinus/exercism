'use strict';

export const valid = (input) => {
    let filtered = [];

    // Filter the numbers out. Return false if we find anything other
    // than numbers or spaces.
    for (let idx = 0; idx < input.length; idx++) {
        if (/^\d$/.test(input[idx]))
            filtered.push(Number(input[idx]));
        else if (!(/^\s$/.test(input[idx])))
            return false;
    }

    // Invalid.
    if (filtered.length < 2)
        return false;

    // Reverse the filtered numbers.
    filtered.reverse();

    let sum = 0;
    for (let idx = 0; idx < filtered.length; idx++) {
        if ((idx % 2) !== 0) {
            if ((filtered[idx] * 2) > 9)
                sum += (filtered[idx] * 2) - 9;
            else
                sum += filtered[idx] * 2;
        } else
            sum += filtered[idx];
    }

    return (sum % 10 === 0);
};
