#include <stdio.h>
#include <stdlib.h>

int main(){
    static int i, l, k, n, min, tmp;

    scanf("%d%d", &l, &k);
    while (i < k - 1) {
        scanf("%d", &tmp);
        if (tmp)
            n++;
        i++;
    }
    if (i < l)
    {
        scanf("%d", &min);
        if (min)
            n++;
        i++;
    }
    while (i < l){
        scanf("%d", &tmp);
        if (tmp && tmp >= min)
            n++;
        i++;
    }
    printf("%d", n);
    return 0;
}