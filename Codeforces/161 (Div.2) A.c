#include <stdio.h>
#include <math.h>

int main()
{
  int i,j,row,col;
  int arr[10][10];
  for(i=0; i<5; i++) {
    for(j=0; j<5; j++) {
      scanf("%d", &arr[i][j]);
      if(arr[i][j] == 1) {
	    row = i;
	    col = j;
	    row = abs(row-2);
        col = abs(col-2);
      }
    }
  }

  

  printf("%d \n", row+col);

  return 0;
}
