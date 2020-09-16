    #include <stdio.h>
    #include <math.h>
     
    int sq (int x);
     
    int main()
    {
    	int rec=0,s,i,n;
    	scanf("%d", &n);
     
    	for (i=1; i<=n; i++) {
    		s = sq(i);
    		rec = rec + s;
    	}
     
    	printf("%d \n", rec);
     
    	return 0;
    }
     
    int sq (int x) {
    	int l,j,c=1;
    	l = sqrt(x);
    	for (j=2; j<=l; j++) {
    		if (x%j == 0) {
    			c = c + 1;
    		}
    	}
     
    	return c;
    }
     
