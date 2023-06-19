//Beispielaufgabe lotto

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int zufall()
{
  return  1+rand()%49;
}

int main()
{
   srand((unsigned)time(NULL));
   int lotto[6];
   for(int i=0;i<6;i++)
   {
     lotto[i] = zufall();
   }

   for(int i=0;i<6;i++)
   {
     printf("Lottozahl: %d\n",lotto[i]);
   }
}
