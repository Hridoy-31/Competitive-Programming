#include <stdio.h>

int main() {
    int i,j,n,t;
    scanf("%d %d", &n, &t);
    char s[n],temp;
    scanf("%s", &s);
    
    for (i=0; i<t; i++) {
        for (j=0; j<n-1; j++) {
            if (s[j] == 'B' && s[j+1] == 'G') {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
                j++;
            }
        }
    }
    
    printf("%s", s);
    
    return 0;
}
