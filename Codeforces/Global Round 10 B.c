#include <stdio.h>

int main()
{
	int j,i,t,n;
	unsigned long k;
	scanf("%d", &t);

	for (i=0; i<t; i++) {
		scanf("%d %lu", &n, &k);
		long int a[n];
		long int max = -1000000000, min = 1000000000;

		for (j=0; j<n; j++) {
			scanf("%ld", &a[j]);
			if (a[j] < min) {
				min = a[j];
			}
			if (a[j] > max) {
				max = a[j];
			}
		}

		if (k%2 == 0) {
			for (j=0; j<n; j++) {
				printf("%ld ", a[j]-min);
			}
		}
		else {
			for (j=0; j<n; j++) {
				printf("%ld ", max-a[j]);
			}
		}
		printf("\n");
	}

	return 0;
}
