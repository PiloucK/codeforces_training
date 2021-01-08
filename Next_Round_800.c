#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, l, k, n = 0;
    int min;
    int tmp;

    scanf("%d%d", &l, &k);
    while (i < k){
        scanf("%d", &tmp);
        if (tmp)
            n++;
        i++;
    }
    if (i < l)
    {
        scanf("%d", &min);
        tmp = min;
        if (min)
            n++;
    }
    while (i < l){
        scanf("%d", &tmp);
        if (tmp >= min)
            n++;
        i++;
    }
    printf("%d", n);
    return 0;
}