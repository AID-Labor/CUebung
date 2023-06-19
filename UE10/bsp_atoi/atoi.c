// Beispiel für atoi

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) 
{
	printf("\nargc: %i\n",argc);
	printf("argv[0]: %s\n",argv[0]);
	if (argc==3)
	{
		int i = atoi(argv[1]);	
 		printf("\nDer eingegebene Wert war %i\n",i);
		printf("Text1: %s\n",argv[2]);
	}
	else printf("\nStarten mit atoi WERT\n");
	return 0;
}
