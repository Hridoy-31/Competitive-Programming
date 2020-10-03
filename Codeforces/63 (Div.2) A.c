#include <stdio.h>

int main()
{
	int n,i,x,y,z,sx=0,sy=0,sz=0;
	scanf("%d", &n);

	for (i=0; i<n; i++) {
		scanf("%d %d %d", &x, &y, &z);
		sx = sx + x;
		sy = sy + y;
		sz = sz + z;
	}

	if (sx == 0 && sy == 0 && sz == 0) {
		printf("YES \n");
	}
	else {
		printf("NO \n");
	}

	return 0;
}
