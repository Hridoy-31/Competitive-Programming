#include <stdio.h>

int main()
{
	int x,s;
	scanf("%d", &x);
	if (x%5 == 0) {
		s = x/5; 
	}
	else {
		s = x/5 + 1;
	}
	
	printf("%d", s);
	
	return 0;
}
