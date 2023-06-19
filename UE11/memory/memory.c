// Programmname

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define NEU 20

int main()
{
	int* m1;
	int* m2;
	m1 = (int*) malloc(SIZE*sizeof(int));
	if (m1==NULL) return -1;
	for (int i=0;i<SIZE;i++) m1[i]=i;

	m2 = (int*) realloc(m1,NEU*sizeof(int));
	if (m2==NULL) return -1;
	for (int i=0;i<NEU;i++) printf("m1[%i]=%i\n",i,m2[i]);
	free(m2);
	printf("\n%p\n%p\n",m1,m2);
	return 0;
}

