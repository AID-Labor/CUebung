//Übungsaufgabe Bubblesort

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int zufall()
{
  return  rand()%1001;
}

void ausgabe(int* l)
{
   for(int i=0;i<25;i++)
   {
     printf("Zahl %d: %d\n",(i+1),l[i]);
   }
}

int compare_value(int i,int j)
{
  return i > j;
}

void bubble(int* a, int z)
{
 // ------- Sortieren --------
  int tausch;
  do
  {
    tausch = 0;
    for(int n=0;n<(z-1);n++)
    {
      if(compare_value(a[n],a[n+1]))
      {
        tausch = 1;
        // tauschen
        int h = a[n];
        a[n] = a[n+1];
        a[n+1] = h;
      }
    }
  } while(tausch);

}

int main()
{
   unsigned s = (unsigned)time(NULL);
   printf("s=%u\n",s);
   srand(s);

   int zahlen[25];
   for(int i=0;i<25;i++)
   {
       zahlen[i] = zufall();
   }
  bubble(zahlen,25);
  ausgabe(zahlen);
}
