#include <stdio.h>
#include <string.h>

int main()
{
	int i,j,n,m,b=0,c=0;
	scanf("%d %d", &n, &m);
	char a[n];

	for (i=0; i<n; i++) {
		for (j=0; j<m; j++) {
			scanf("%s", &a);

			if (strcmp(a,"C") == 0 || strcmp(a,"M") == 0 || strcmp(a,"Y") == 0 ) {
				c = c + 1;
			}
			else {
				b = b + 1;
			}
		}
	}

	if (c == 0) {
		printf("#Black&White \n");
	}
	else {
		printf("#Color \n");
	}

	return 0;

}
