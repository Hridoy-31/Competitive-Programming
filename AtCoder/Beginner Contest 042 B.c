    #include <stdio.h>
    #include <string.h>
     
    int main()
    {
        int i,n,l;
        scanf("%d %d", &n, &l);
        
        char s[101][101];
        
        for (i=0; i<n; i++) {
            scanf("%s", &s[i]);
        }
        
        qsort(s, n, 101, strcmp);
        
        for (i=0; i<n; i++) {
            printf("%s", s[i]);
        }
        
        return 0;
    }
