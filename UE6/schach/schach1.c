// Übung 6.1
// Schachbrett

#include <stdio.h>

int main()
{
	int b,h,r;
	printf("Geben Sie die Breite ein");
	r = scanf("%d",&b);
	if (r != 1)
	{
	  printf("falsche Eingabe\n");
	  return 0;
	}
	printf("Geben Sie die Höhe ein");
	r = scanf("%d",&h);
	if (r != 1)
	{
	  printf("falsche Eingabe\n");
	  return 0;
	}

	for(int z=0;z<h;z++)
	{
		for(int s=0;s<b;s++)
		{
			if(((s+z)%2)) printf("O ");
		 	else printf("X ");
		}
		printf("\n");
	}
	return 0;
}
