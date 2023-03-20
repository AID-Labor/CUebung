// Übung 5.1
// Boolean

#include <stdio.h>
#include <stdbool.h>

int main()
{
	int i = __bool_true_false_are_defined;
	printf("Bool? %d\n",i);
	if(__bool_true_false_are_defined)
	{
		printf("\nBool ist definiert");
		bool b = true;
		printf("\nb hat den Wert %d\n",b);
	}
	else
		printf("\nBool ist nicht definiert\n");
	return 0;
}
