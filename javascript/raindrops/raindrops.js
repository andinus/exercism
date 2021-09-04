'use strict';

export const convert = (number) => {
    let drops = "";

    [
        {factor: 3, result: 'Pling'},
        {factor: 5, result: 'Plang'},
        {factor: 7, result: 'Plong'}
    ].forEach(drop => {
         if (number % drop.factor === 0)
             drops += drop.result;
     });

    if (drops === "") drops += number;
    return drops;
};
