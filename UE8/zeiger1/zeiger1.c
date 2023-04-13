// Übung 8.1
// Zeigerarithmetik

#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pb = &b;
	pb++;
	printf("\nb hat den Wert %i\n",*pb);
	return 0;
}
