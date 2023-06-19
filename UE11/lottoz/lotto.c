// Übung 9
// Ziehung der Lottozahlen

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ziehung()
{
	int l;
	l = 1+rand()%49;
	return l;
}

void ausgabe(int* zahlen)   // ausgabe(int zahlen[])
{
	printf("\nDie Lottozahlen sind:\n");
	for (int i=0;i<6;i++)
	{
		printf("%d\t",zahlen[i]);
	}
	printf("\n");
}

int main()
{
	printf("\nZiehung der Lottozahlen\n");
	srand((unsigned)time(NULL));
	int* lotto;
	lotto = (int*) malloc(6*sizeof(int));
	if (lotto == NULL) return -1; 
	for (int i=0;i<6;i++)
	{
		int doppelt,z;
		do
		{
			doppelt = 0;
			z = ziehung();
			for(int j=0;j<6;j++)
			{
				if(lotto[j]==z)
				{
					doppelt = 1;
				}
			}
		}while(doppelt);
		lotto[i]=z;
	}

	ausgabe(lotto);
	free(lotto);
	return 0;
}
