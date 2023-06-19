// Beispielaufgabe Funktionszeiger

#include <stdio.h>

double addieren(double a, double b) { return a+b; };
double subtrahieren(double a, double b) { return a-b; };
double multiplizieren(double a, double b) { return a*b; };
double dividieren(double a, double b) { return a/b; };

int main()
{
	double (*opr[4])(double,double) = {addieren,subtrahieren,multiplizieren,dividieren};
	double n1,n2;
	printf("Geben Sie den ersten Operator ein:");
	scanf("%lf",&n1);
	printf("Geben Sie den zweiten Operator ein:");
	scanf("%lf",&n2);
	int r;
	printf("Geben Sie die Rechenoperation ein (0-3 für a,s,m,d):");
	scanf("%i",&r);
	double res = opr[r](n1,n2);
	printf("\nDas Resultat ist %lf\n",res);
	return 0;
}

