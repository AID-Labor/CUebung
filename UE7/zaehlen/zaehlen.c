#include <stdio.h>

int zaehlen(int);


int main( )
{
	int i =3;
	int r = zaehlen(2);
	printf("r in main = %d\n",r);
	zaehlen(3);
	zaehlen(4);
	printf("i in main = %d\n",i);
	return 0;
}

int zaehlen(int i)
{
	
	i++;
	printf("Wert von i in zaehlen: %d\n",i);
	return i;
}

