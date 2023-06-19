//  Zeitmessung beim Arrayzugriff

#include <stdio.h>
#include <time.h>
#define SIZE 1024
int main()
{
	int array[SIZE][SIZE];

	time_t zeit = clock();
	for (int i=0;i<SIZE;i++)
		for (int j=0;j<SIZE;j++)
			array[i][j] = 0;
	long t = clock()-zeit;
	printf("Laufzeit 1: %li\n",t);

	zeit = clock();
	for (int i=0;i<SIZE;i++)
		for (int j=0;j<SIZE;j++)
			array[j][i] = 0;
	t = clock()-zeit;
	printf("Laufzeit 2: %li\n",t);

	return 0;
}

