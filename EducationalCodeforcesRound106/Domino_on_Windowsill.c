#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    uint32_t    i = 0, testnb;
    scanf("%u", &testnb);
    uint32_t nkk[3], wb[2];

    while (i < testnb) {
        scanf("%u%u%u", &nkk[0], &nkk[1], &nkk[2]);
        scanf("%u%u", &wb[0], &wb[1]);

        uint32_t nb_w, nb_b;

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