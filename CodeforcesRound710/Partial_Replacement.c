#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <strings.h>

int main() {
    int   i;

    scanf("%d", &i);
    while (i-- > 0)
    {
        int n, k;
        char *string;
        scanf("%d %d", &n, &k);
        scanf("%s", &string);
        int j = 0;
        int min = 0;
        int last_index;
        while (string[j] != '*')
            j++;
        string[j] = 'x';
        last_index = j;
        min++;
        while (string[j] != '*')
            j++;
        if (!string[j])
        {
            printf("%d\n", min);
            continue ;
        }
        while (string[j])
        {
            
            while (string[j] != '*')
                j++;
            

            
            j++;
        }
    }
    return 0;
}