#include <stdio.h>

int main()
{
    int i,n,k,count=0;
    int arr[100];
    scanf("%d %d", &n, &k);

    for(i=0; i<n; i++) {
	scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++) {
	if((arr[i] >= arr[k-1]) && arr[i] > 0) {
	    count = count + 1;
	}
    }

    printf("%d", count);

    return 0;
}
