#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <strings.h>

int main() {
    unsigned long    i;

    scanf("%ld", &i);
    unsigned long    n, m, x;
    unsigned long res;
    while (i-- > 0)
    {
        scanf("%ld %ld %ld", &n, &m, &x);
        res = (x % m) * m + (x / n);
        printf("%ld\n", res);
    }
    return 0;
}