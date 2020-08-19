#include <stdio.h>
#include <string.h>

int main()
{
	int i,temp;
	char arr[100];
	scanf("%s", &arr);
	
	int l = strlen(arr);
	
	for(i=2;i<l;) {
		if(arr[i-2] > arr[i]) {
			temp = arr[i-2];
			arr[i-2] = arr[i];
			arr[i] = temp;
			
			i = 2;
			continue;
		}
		i = i + 2;
	}
	
	printf("%s", arr);
	
	return 0;
}

