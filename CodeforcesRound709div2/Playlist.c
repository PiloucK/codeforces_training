#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t biggest(uint32_t a ,uint32_t b) {
    if (a > b)
        return (a);
    return (b);
}

uint32_t smallest(uint32_t a ,uint32_t b) {
    if (a < b)
        return (a);
    return (b);
}

uint32_t
gcd ( uint32_t a, uint32_t b )
{
  int c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}

uint32_t genres[10000], deleted_songs[10000];
uint32_t songs;
uint32_t deleted_count = 0;

int main() {
    uint32_t    i = 0, testnb;
    scanf("%u", &testnb);

    while (i < testnb) {
        deleted_count = 0;
        scanf("%u", &songs);
        for (uint32_t j = 0; j < 10000; j++)
        {
            if (j < songs)
                scanf("%u", &genres[j]);
            else
                genres[j] = 0;
        }
        uint32_t k = 0;
        uint32_t last_listened = 0;
        uint32_t modif = 1;
        while(modif)
        {
            modif = 0;
            k = 0;
            while (k < songs)
            {
                if (!genres[k])
                {
                    k++;
                    continue ;
                }
                if (!last_listened)
                    last_listened = genres[k];
                else
                {
                    if (gcd(genres[k], last_listened) == 1)
                    {
                        modif = 1;
                        deleted_songs[deleted_count] = k + 1;
                        genres[k] = 0;
                        deleted_count++;
                        last_listened = 0;
                    }
                    else
                        last_listened = genres[k];
                }
                k++;
            }
            k = 0;
            while (k < songs)
            {
                if (!genres[k])
                {
                    k++;
                    continue ;
                }
                if (!last_listened)
                    last_listened = genres[k];
                else
                {
                    if (gcd(genres[k], last_listened) == 1)
                    {
                        modif = 1;
                        deleted_songs[deleted_count] = k + 1;
                        genres[k] = 0;
                        deleted_count++;
                        last_listened = 0;
                    }
                    else
                        last_listened = genres[k];
                }
                k++;
            }
        }
        i++;
        printf("%d", deleted_count);
        for (uint32_t j = 0; j < deleted_count; j++)
            printf(" %d", deleted_songs[j]);
        printf("\n");
    }
    return 0;
}
