#include <stdio.h>

int main()
{
    int i,n,a,b,max=0, num=0;
    scanf("%d", &n);
    
    for (i=1; i<=n; i++) {
        scanf("%d %d", &a, &b);
        num = (num - a) + b;
        if (num > max) {
            max = num;
        }
    }
    
    printf("%d", max);
    
    return 0;
}
