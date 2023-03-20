// Übung 5.1 und 5.2
// Datentypen

#include <stdio.h>

int main()
{

	float x = 0.5f;
	float y = 0.4f;
	printf("Die Differenz von 0.5 und 0.4 ist %.12lf\n",(x-y));

	printf("Größe von void: %lu\n",sizeof(void));
	printf("Größe von int: %lu\n",sizeof(int));
	printf("Größe von float: %lu\n",sizeof(float));
	double xyz;
	printf("Größe von double: %lu\n",sizeof(xyz));
	printf("Größe von long double: %lu\n",sizeof(long double));

	return 0;
}
