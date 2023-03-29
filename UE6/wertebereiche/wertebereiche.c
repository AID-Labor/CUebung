// Übung 6.3
// Wertebereiche

#include <stdio.h>

int main()
{
	int eingabe;
	int anzahl = 0;
	int summe = 0;
	do
	{
		printf("Geben Sie eine Zahl von 1-100 ein: ");
		if(scanf("%d",&eingabe)==0) return 0;
		if(eingabe<0 || eingabe>100) continue;
		summe += eingabe;
		anzahl++;
		printf("Anzahl: %d\tSumme: %d\n",anzahl,summe);
	} while (eingabe != 0);
	return 0;
}
