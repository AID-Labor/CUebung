// Übung 8.3
// Adressen

#include <stdio.h>

int c;

int main()
{
	printf("\nAdressen:\n");
	int a,b;
	static int d;
	printf("Var a:\t%p\n",&a);
	printf("Var b:\t%p\n",&b);
	printf("Var c:\t%p\n",&c);
	printf("Var d:\t%p\n",&d);
	return 0;
}
