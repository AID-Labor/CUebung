// Programmname

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* m1;
	do
	{
		m1 = (int*) malloc(1000000*sizeof(int));
		if (m1==NULL) break;
		printf(".");
	} while(1);
	return 0;
}

