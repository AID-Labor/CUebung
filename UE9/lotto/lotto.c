//Beispielaufgabe lotto

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int zufall()
{
  return  1+rand()%49;
}

void ausgabe(int* l)
{
   for(int i=0;i<6;i++)
   {
     printf("Lottozahl: %d\n",l[i]);
   }
}

int main()
{
   unsigned s = (unsigned)time(NULL);
   printf("s=%u\n",s);
   srand(s);

   int lotto[6];
   for(int i=0;i<6;i++)
   {
     int doppelt;
     do
     {
       doppelt = 0;
       lotto[i] = zufall();
       for(int j=0;j<i;j++)
       {
//	 if(lotto[i]==lotto[j]) doppelt = 1;
       }
     } while(doppelt);
   }

  ausgabe(lotto);

}
