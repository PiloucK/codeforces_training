#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int		main() {
	char	s[1024];
	int		i, j, k, l, n, m = 0;
    scanf("%d", &n);
    while (i < n)
    {
        scanf("%d%d%d", &j, &k, &l);
        j += k + l;
        if (j > 1)
            m++;
        i++;
    }
    printf("%d", m);
	return 0;
}