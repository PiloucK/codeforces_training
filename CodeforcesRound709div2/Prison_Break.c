#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    uint32_t    i = 0, testnb;
    scanf("%u", &testnb);
    uint32_t a, b;

    while (i < testnb) {
        scanf("%u%u", &a, &b);
        printf("%d\n", a * b);
        i++;
    }
    return 0;
}