#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <strings.h>

int main() {
    uint32_t    i = 0, testnb;
    scanf("%u", &testnb);
    char s[101];

    while (i < testnb) {
        for (int k = 0; k < 101; k++)
            s[k] = 0;
        scanf("%s", s);
        int one = 0, zero = 0;
        int len = strlen(s);
        int pair1 = 0;
        int pair0 = 0;
        int no = 0;

        for (int j = 0; j < len; j++)
        {
            one = s[j] == '1';
            zero = s[j] == '0';
            if (pair1 < 2)
                pair1 = (pair1 && one) + one;
            else if (pair0 < 2)
                pair0 = (pair0 && zero) + zero;
            else
                break ;
        }
        if (pair1 >= 2 && pair0 >= 2)
            printf("NO\n");
        else
            printf("YES\n");
        i++;
    }
    return 0;
}