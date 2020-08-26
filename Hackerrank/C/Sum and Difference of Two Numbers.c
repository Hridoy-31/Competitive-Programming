#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float c, d;

    scanf("%d %d \n", &a, &b);
    scanf("%f %f \n", &c, &d);

    if((a>=1 && b>=1 && c>=1 && d>=1) && (a<=10000 && b<=10000 && c<=10000 && d<=10000)) {
        printf("%d %d \n", a+b, a-b);
        printf("%.1f %.1f \n", c+d, c-d);
    }

    return 0;
}
