// Übung 7.2
// Heron-Verfahren

#include <stdio.h>

double heron(double z, int schritte)
{
  double w = 1;
  for(int i=0;i<schritte;i++) w = (w+z/w)/2.0;
  return w;
}

int main()
{
	double wert,wurzel;
	printf("Geben Sie einen Wert ein: ");
	scanf("%lf",&wert);
	wurzel = heron(wert,20);
	printf("Die Wurzel von %lf ist %lf.\n",wert,wurzel);
	return 0;
}

