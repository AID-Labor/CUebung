// Übung 8.1
// Tauschen

#include <stdio.h>

void tauschen(double* pa, double *pb)
{
	double h = *pa;
	*pa = *pb;
	*pb = h;
}

int main()
{
	printf("\nTauschen\n");

	double m = 10.1;
	double n = 20.2;
	tauschen(&m, &n);
	printf("m=%.2lf\nn=%.2lf\n",m,n);

	return 0;
}

