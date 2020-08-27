#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,len,c=0;
    char s[1000], t[1000];
    scanf("%s %s", &s, &t);
    len = strlen(s);
    for(i=0,j=len-1; i<len; i++,j--) {
        if (s[i] != t[j]) {
            printf("NO");
            break;
        }
        else {
            c++;
        }
    }
    if (c == len) {
        printf("YES");
    }
    
    return 0;
}
