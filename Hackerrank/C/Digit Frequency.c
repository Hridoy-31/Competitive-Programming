#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char s[1000];
    gets(s);

    int i,j,count;
    char r = '0';
    int len = strlen(s);

    for (i=0;i<=9;i++) {
        count = 0;
        for (j=0; j<len; j++) {
            if (s[j] == r) {
                count++;
            }
        }
        printf("%d ", count);
        r++;
    }

    return 0;
}
