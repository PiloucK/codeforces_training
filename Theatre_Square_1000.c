#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main () {
    int x, y, width;
    uint64_t count = 0;

    scanf("%d%d%d", &x, &y, &width);
    count = y / width + !!(y % width);
    count *= x / width + !!(x % width);
    printf("%.0llu", count);
    return 0;
}