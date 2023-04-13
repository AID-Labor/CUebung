// Übung 8.1
// Tauschen

#include <stdio.h>

void tauschen(double a, double b)
{
	double h = a;
	a = b;
	b = h;
}

int main()
{
	printf("\nTauschen\n");

	double m = 10.1;
	double n = 20.2;
	tauschen(m, n);
	printf("m=%.2lf\nn=%.2lf\n",m,n);

	return 0;
}

