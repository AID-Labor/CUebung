// Übung 4.1
// kegel2

#include <stdio.h>
#define PI 3.1415926535898

double kegel(double r,double h)
{
  return PI/3*r*r*h;
}

int main()
{
	double h,r;
	int s;
	printf("Geben Sie den Wert für r ein: ");
	s = scanf("%lf",&r);

	printf("Geben Sie den Wert für h ein: ");
	s += scanf("%lf",&h);
	printf("\nRückgabewerte von scanf: %d\n",s);

	printf("\nRadius:  %8.2lf",r);
	printf("\nHöhe:    %8.2lf",h);
	printf("\nVolumen: %8.2f\n",kegel(r,h));	
	return 0;
}
