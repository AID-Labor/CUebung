// Beispielaufgabe struktcpy

#include <stdio.h>

typedef struct 
{
  int i[10];
} TEST;

void strtest(TEST s)
{
	printf("\n-- in der Funktion --");
	printf("\nSizeof Array: %lu",sizeof(s.i));
	s.i[2]=99;
	for(int n=0;n<10;n++) printf("\ni[%d]=%d",n,s.i[n]);
}

int main()
{
	TEST t;
	for(int n=0;n<10;n++) t.i[n]=n;
	strtest(t);
	printf("\n\n-- in Main --");
	for(int n=0;n<10;n++) printf("\ni[%d]=%d",n,t.i[n]);
	printf("\n");
	return 0;
}

