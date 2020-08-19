#include <stdio.h>

int main()
{
	int i,n,count=0;
	char a[50];
	scanf("%d", &n);
	
	for (i=0; i<=n; i++) {
		scanf("%c", &a[i]);
	}
	
	for (i=0; i<=n; i++) {
		if(a[i] == a[i+1]) {
			count = count + 1;
		}
	}
	
	
	printf("%d", count);
	
	return 0;
}
