// Beispiel für fgets

#include <stdio.h>

int main()
{
	char text[100] = "abc"; // Platz für Eingabe
	printf("\nGeben Sie einen Text ein:\n");
	(void)!fgets(text,10,stdin);
	//scanf("%s",text);
	printf("Eingabe:%s",text);
	return 0;
}
