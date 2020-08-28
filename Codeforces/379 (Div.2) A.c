#include <stdio.h>
#include <string.h>

int main() 
{
    int i,n,ca=0,cd=0;
    scanf("%d", &n);
    
    char s[n];
    scanf("%s", &s);
    
    for (i=0; i<n; i++) {
        if (s[i] == 'A') {
            ca++;
        }
        if (s[i] == 'D') {
            cd++;
        }
    }
    
    if (cd > ca) {
        printf("Danik");
    }
    else if (ca == cd) {
        printf("Friendship");
    }
    else {
        printf("Anton");
    }
    
    return 0;
}
