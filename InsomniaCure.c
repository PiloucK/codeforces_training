// Constructive algorithm - math - implementation - 800

#include <stdio.h>
#include <stdlib.h>

int
main(
    void )
{
    static int k, l, m, n, d;
    static int dragons[100001];

    scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);

    d++;

    for (int i = 1; i < d; i++) {
        if ((i >= k && i % k == 0) || (i >= l && i % l == 0) || (i >= m && i % m == 0) || (i >= n && i % n == 0)) {
            dragons[i] = 1;
        }
    }

    int count = 0;

    for (int i = 1; i < d; i++) {
        if (dragons[i]) {
            count++;
        }
    }

    printf("%d", count);

    return (EXIT_SUCCESS);
}
