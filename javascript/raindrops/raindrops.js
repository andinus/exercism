'use strict';

export const convert = (number) => {
    const factorToSound = new Map([
        [3, 'Pling'],
        [5, 'Plang'],
        [7, 'Plong']
    ]);

    let drops = "";
    for (const [factor, sound] of factorToSound)
        if (number % factor === 0)
             drops += sound;

    if (drops === "")
        drops += number;

    return drops;
};
