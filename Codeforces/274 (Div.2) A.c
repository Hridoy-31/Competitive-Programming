#include <stdio.h>

int max (int a, int b);

int main()
{
	int a,b,c,p,q,r,s,t,u;
	scanf("%d %d %d", &a, &b, &c);

	p = a*b*c;
	q = a+b+c;
	r = a+b*c;
	s = a*b+c;
	t = a*(b+c);
	u = (a+b)*c;

	int res = max(max(max(max(max(p,q),r),s),t),u);
	printf("%d \n", res);

	return 0;
}

int max (int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
