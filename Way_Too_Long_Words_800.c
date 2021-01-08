#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
 
int		main() {
	char	s[128];
	int		l = 0;
    int     i, k, n = 0;
 
    scanf("%i", &l);
	while (i < l)
    {
        scanf("%s", s);
        k = strlen(s);
        if (k > 10)
        {
            printf("%c", s[0]);
            printf("%d", k - 2);
            printf("%c", s[k - 1]);
        }
        else
            printf("%s", s);
        printf("\n");
        i++;
	}
	return 0;
}
