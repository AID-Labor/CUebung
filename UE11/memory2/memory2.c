// Programmname

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define NEU 20

int main()
{
	int* m1;
//	int* m2;
	int* m3;
	m1 = (int*) malloc(SIZE*sizeof(int));
	if (m1==NULL) return -1;
	for (int i=0;i<SIZE;i++) m1[i]=i;

/*
	m2 = (int*) malloc(SIZE*sizeof(int));
	if (m2==NULL) return -1;
	for (int i=0;i<SIZE;i++) m2[i]=999;
	printf("Adresse von m2: %p\n",m2);
*/
	m3 = (int*) realloc(m1,NEU*sizeof(int));
	if (m3==NULL) return -1;
	for (int i=0;i<NEU;i++) printf("m3[%i]=%i\n",i,m3[i]);

	printf("Adresse von m1: %p\n",m1);
	printf("Adresse von m3: %p\n",m3);

//	free(m2);
	free(m3);
	return 0;
}

