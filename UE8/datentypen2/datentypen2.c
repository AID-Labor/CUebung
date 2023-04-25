// Übung 8.2
// Datentypen2

#include <stdio.h>

int main()
{
	printf("\nSpeicher:\tVar:\tZeiger\n");
	printf("Typ char:\t%lu\t%lu\n",sizeof(char),sizeof(char*));
	printf("Typ int:\t%lu\t%lu\n",sizeof(int),sizeof(int*));
	printf("Typ long:\t%lu\t%lu\n",sizeof(long),sizeof(long*));
	printf("Typ float:\t%lu\t%lu\n",sizeof(float),sizeof(float*));
	printf("Typ double:\t%lu\t%lu\n",sizeof(double),sizeof(double*));
	printf("Typ long d:\t%lu\t%lu\n",sizeof(long double),sizeof(long double*));
	return 0;
}
