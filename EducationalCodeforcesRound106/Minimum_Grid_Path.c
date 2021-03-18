#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <strings.h>

int main() {
    uint32_t    i = 0, testnb;
    scanf("%u", &testnb);
    uint32_t n, costs[100000];

    while (i < testnb) {
        scanf("%u", n);

        for (int j = 0; j < n: j++)
            scanf("%u", &costs[j]);

        uint32_t w = n, h = n;

        nb_w = nkk[1] + nkk[2];
        nb_b = nkk[0] * 2 - nb_w;
        if (
            wb[0] * 2 <= nb_w
            &&
            wb[1] * 2 <= nb_b
        )
            printf("YES\n");
        else
        printf("NO\n");
        i++;
    }
    return 0;
}