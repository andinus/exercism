'use strict';

export class Triangle {
    constructor(s1, s2, s3) {
        this.s1 = s1;
        this.s2 = s2;
        this.s3 = s3;
    }

    get isEquilateral() {
        return (this.isTriangle()
                && this.s1 === this.s2
                && this.s2 === this.s3);
    }

    get isIsosceles() {
        return (this.isTriangle()
                && (
                    this.s1 === this.s2
                        || this.s2 === this.s3
                        || this.s3 === this.s1
                ));
    }

    get isScalene() {
        return (this.isTriangle()
                && this.s1 !== this.s2
                && this.s2 !== this.s3
                && this.s3 !== this.s1);
    }

    isTriangle() {
        if (
            // Triangle inequality.
            !(this.s1 + this.s2 > this.s3
             && this.s1 + this.s3 > this.s2
             && this.s2 + this.s3 > this.s1)
            // Sides of a triangle cannot be zero.
                || (this.s1 === 0 || this.s2 === 0 || this.s3 === 0)
        ) return false;
        return true;
    }
}
