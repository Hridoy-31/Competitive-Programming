#include <stdio.h>

int main()
{
	int i,c=0,min,max,n;
	scanf("%d", &n);
	int a[n];

	for (i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}

	min = max = a[0];

	for (i=1; i<n; i++) {
		if (a[i] > max) {
			max = a[i];
			c++;
		}
		else if (a[i] < min) {
			min = a[i];
			c++;
		}
	}

	printf("%d \n", c);

	return 0;

}
