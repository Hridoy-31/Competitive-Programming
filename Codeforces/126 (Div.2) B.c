#include <stdio.h>

int main()
{
	int n,s=0;
	scanf("%d", &n);

	int a[n];

	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
		s = s + a[i];
	}

	float result = (float) s/n;
	printf("%f \n", result);

	return 0;
}
