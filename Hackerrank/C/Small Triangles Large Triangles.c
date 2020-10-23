#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

double calc (triangle t) {
    double p = ((t.a)+(t.b)+(t.c))/2;
     return (t.a + t.b + t.c)*(t.a + t.b - t.c)*(t.a - t.b + t.c)*(-t.a + t.b + t.c);
}

void swap (triangle* a, triangle* b) {
    triangle temp = *a;
    *a = *b;
    *b = temp;
}

void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (calc(tr[i]) > calc(tr[j])) {
                swap(&tr[i], &tr[j]);
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
