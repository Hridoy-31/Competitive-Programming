#include <stdio.h>

int main()
{
    int n,p,q,i,c=0;
    scanf("%d", &n);
    
    for (i=0; i<n; i++) {
        scanf("%d %d", &p, &q);
        if ((q-p) >= 2) {
            c++;
        }
    }
    
    printf("%d", c);
    
    return 0;
}
