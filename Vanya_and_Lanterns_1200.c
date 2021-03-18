#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    uint32_t    i = 0, limit, len;
    long double  radius = 0.0;
    scanf("%u%u", &limit, &len);

    uint32_t    lanterns[1000];
    while (i < limit) {
        scanf("%u", &lanterns[i]);
        i++;
    }
    uint32_t n = 1;
    while (n)
    {
        i = 0;
        n = 0;
        while (i < limit - 1)
        {
            if (lanterns[i] > lanterns[i + 1]) {
                (lanterns[i] ^= lanterns[i + 1]), (lanterns[i + 1] ^= lanterns[i]), (lanterns[i] ^= lanterns[i + 1]);
                n++;
            }
            i++; 
        }
    }
    i = 0;
    long double  dist;
    radius = lanterns[0] * 2;
    while (i < limit - 1)
    {
        dist = (long double)lanterns[i + 1] - (long double)lanterns[i];
        if (dist > radius)
            radius = dist;
        i++;
    }
    if (radius < ((len - lanterns[limit - 1]) * 2))
        radius = (len - lanterns[limit - 1]) * 2;
    printf("%Lf", radius / 2);
    return 0;
}