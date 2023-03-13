// Übung 3.1
// kegel

#include <stdio.h>

int main()
{
	double PI = 3.1415926535898;
	double h,r;
	printf("Geben Sie den Wert für r ein: ");
	scanf("%lf",&r);

	printf("Geben Sie den Wert für h ein: ");
	scanf("%lf",&h);
	double v = PI/3.0*r*r*h;
	printf("\nRadius:  %8.2lf",r);
	printf("\nHöhe:    %8.2lf",h);
	printf("\nVolumen: %8.2f\n",v);	
	return 0;
}
