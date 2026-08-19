// Online C compiler to run C program online
#include <stdio.h>



int main() {

    int a = 5, b = 4, c = 2, d = 8, e = 1, f = 0;

    printf("(i) %d\n", a + b * c - d / 2);

    printf("(ii) %d\n", (a += b) == (c *= d /= 2));

    printf("(iii) %lu\n", sizeof(a) * 8 - (a ? 0 : 1));

    printf("(iv) %d\n", a > b && c < d || e == f);

    printf("(v) %d\n", a & b | c ^ d << 1);

    printf("(vi) %d\n", ++a + b-- * c % d);

    // FIXED (vii)
    d %= 3;
    c -= d;
    a *= b;
    a += c;
    printf("(vii) %d\n", a);

    printf("(viii) %d\n", a > b ? c * d : c / d);

    printf("(ix) %d\n", (a << 2) | (b >> 1) & 0xF);

    a = b = c + d * e - f;
    printf("(x) a=%d, b=%d\n", a, b);

    return 0;
}

