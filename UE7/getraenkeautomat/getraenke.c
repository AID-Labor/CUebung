#include <stdio.h>

int getraenkeauswahl(void)
{
  int w,r;
  printf("\n\nGetränkeautomat!\n");
  do
  {
    printf("(1) \tWasser\t\t €1,00\n");
    printf("(2) \tSprudel\t\t €1,20\n");
    printf("(3) \tSaft\t\t €1,50\n");
    printf("(4) \tbleifreies Bier\t €1,50\n");
    printf("(5) \trichtiges Bier\t €2,00\n");
    printf("\nWählen Sie ein Getränk (1..5)");
    r = scanf("%d",&w);
    if (r==0) return -1;
  } while((w >5)||(w <1));
  return w;
}

int gueltigkeit_muenze(double m)
{
    if(!((m==.1)||(m==.2)||(m==.5)||(m==1)||(m==2))) 
    {
      printf("\nFalschgeld!\n");
      return 0;   // False
    }
    return 1;  // True
}

double restbetrag(double b, double m)
{
  return b-m;
}

int automat()
{
  int r;
  int wahl = getraenkeauswahl();
  if (wahl < 0) return -1;
//------------------------------------------------- Getränk ist festgelegt
  double preis = 0;
  switch (wahl)
  {
    case 1: preis = 1.0; break;
    case 2: preis = 1.2; break;
    case 3: preis = 1.5; break;
    case 4: preis = 1.5; break;
    case 5: preis = 2.0; break;
  }
  do
  {
    printf("\nZahlen Sie bitte noch €%.2lf\n",preis);
    printf("\nGeben Sie eine Münze ein!");
    double muenze;
    r = scanf("%lf",&muenze);
    if (r==0) return -1;
    if (muenze==0) 
    {
      printf("dann eben nich!\n");
      return 0;
    }

    if (!gueltigkeit_muenze(muenze)) continue;

    preis = restbetrag(preis,muenze);

  } while(preis > 0.0);
  printf("\nGetränk wird ausgegeben!\n");
  if (preis < 0)
  {
    printf("\nRückgabe: %.2lf\n",(-preis));
  }
  return 0;
}

int main()
{
  while(1)
  {
    if (automat()<0) return 0;
  }
  return 0;
}
