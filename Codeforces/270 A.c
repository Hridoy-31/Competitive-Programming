#include <stdio.h>

int main()
{
	int a,b,n;
	scanf("%d", &n);

	a = n%2 + 8;
	b = (n - a);

	printf("%d %d \n", a, b);

	return 0;
}
