#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    int x = n/m;
    
    while(x) {
        n++;
        
        if (n%m == 0) {
            x++;
        }
        
        x--;
    }
    
    printf("%d \n", n);
    
    return 0;
}
