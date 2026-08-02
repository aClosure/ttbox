#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;
    int sign = (n < 0) ? -1 : 1;
    unsigned long long x = (unsigned long long)(n * (long long)sign);
    unsigned long long rev = 0;
    if (x == 0) {
        printf("0\n");
        return 0;
    }
    while (x > 0) {
        rev = rev * 10 + (x % 10);
        x /= 10;
    }
    if (sign < 0) printf("-%llu\n", rev);
    else printf("%llu\n", rev);
    return 0;
}
