#include <stdio.h>
#include <string.h>

int main() 
{
    char s[20];
    scanf("%s", &s);
    int i,l,c=0;
    l = strlen(s);
    
    for (i=0; i<l; i++) {
        if (s[i] == '4' || s[i] == '7') {
            c++;
        }
    }
    
    if (c == 4 || c == 7) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    
    return 0;
    
}
