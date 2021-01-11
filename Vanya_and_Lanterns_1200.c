#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    uint32_t    i = 0, limit, len;
    float radius = 0.0;
    scanf("%u%u", &limit, &len);

    uint32_t    lanterns[1000];
    while (i < limit) {
        scanf("%u", &lanterns[i]);
        printf("%u\n", lanterns[i]);
        i++;
    }
    return 0;
}