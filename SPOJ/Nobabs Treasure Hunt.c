    #include <stdio.h>
    #include <math.h>
     
    int main()
    {
    	int x, y, t1, t2, xc=0,yc=0;
    	scanf("%d %d %d %d", &x, &y, &t1, &t2);
     
    	xc = abs(x-t1);
    	yc = abs(y-t2);
     
    	printf("%d \n", xc+yc);
     
    	return 0;
    } 
