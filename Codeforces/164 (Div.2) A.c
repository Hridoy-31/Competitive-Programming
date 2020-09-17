#include <stdio.h>
int main()
{
	int i,n,c=0;
	int h[100],a[100];
	scanf("%d", &n);

	for (i=0; i<n; i++) {
		scanf("%d %d", &h[i], &a[i]);
	}

	for (i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (h[i] == a[j]) {
				c++;
			}
		}
	}

	printf("%d \n", c);

	return 0;
}
