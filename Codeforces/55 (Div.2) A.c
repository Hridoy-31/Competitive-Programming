#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", &s);
    int l = strlen(s);
    int i,up=0,low=0;
    
    for (i=0; i<l; i++) {
        if (s[i] >= 65 && s[i] <= 90) {
            up++;
        }
        if (s[i] >= 97 && s[i] <= 122) {
            low++;
        }
    }
    
    if (low >= up) {
        for (i=0; i<l; i++) {
            if (s[i] >= 65 && s[i] <= 90) {
                s[i] = s[i] + 32;
            }
        }
        
        puts(s);
    }
    
    if (low < up) {
        for (i=0; i<l; i++) {
            if (s[i] >= 97 && s[i] <= 122) {
                s[i] = s[i] - 32;
            }
        }
        
        puts(s);
    }
    
    return 0;
}
