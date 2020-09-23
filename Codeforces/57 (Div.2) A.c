    #include <stdio.h>
    #include <string.h>
    int main()
    {
    	char a[101], b[101];
    	scanf("%s %s", &a, &b);
    	int l = strlen(a);
    	char r[l];
    	for (int i=0; i<l; i++) {
    		if (a[i] == b[i]) {
    			r[i] = '0';
    		}
    		else {
    			r[i] = '1';
    		}
    	}
    	
        r[l] = '\0';
    	printf("%s \n", r);
     
    	return 0;
    }
