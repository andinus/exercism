'use strict';

export const convert = (num) => {
    let drops = "";
    if (num % 3 == 0) drops += "Pling";
    if (num % 5 == 0) drops += "Plang";
    if (num % 7 == 0) drops += "Plong";

    if (drops.length == 0) drops += num;
    return drops;
};
