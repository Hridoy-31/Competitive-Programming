#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%s", s);
    int i,l,c=0;
    
    l = strlen(s);
    
    for (i=0; i<l; i++) {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
            c++;
        }
    }
    
    if (c > 0) {
        printf("YES \n");
    }
    else {
        printf("NO \n");
    }
    
    return 0;
}
