// Beispiel für strcat

#include <stdio.h>
#include <string.h>

int main()
{
	char text1[30] = "Hallo ";
	char text2[] = "Welt!\n";
	char* t = strcat(text1,text2);
	printf("%s",t);
	return 0;

}

