#include <stdio.h>
#include <string.h>

int main()
{
    int i,n,len;
    char arr[100];
    scanf("%d", &n);
    
    for(i=0; i<n; i++) {
        scanf("%s", &arr);
        len = strlen(arr);
        
        if(len > 10) {
            printf("%c", arr[0]);
            printf("%d", len-2);
            printf("%c", arr[len-1]);
            printf("\n");
        }
        else {
            printf("%s \n", arr);
        }
    }
    return 0;
}
