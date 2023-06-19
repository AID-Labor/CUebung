// Kapitel 10

#include <stdio.h>

void copy_string(char* sText_Q, char* sText_Z)
{
  int i=0;
  while (sText_Q[i] != 0) 
  {
    sText_Z[i] = sText_Q[i];
    i++;
  }
  sText_Z[i] = 0;
}


int main( )
{
    printf("C-Zeichenketten\n\n");
    char text1[] = "Hallo, Welt!";
    char text2[10];
    copy_string(text1,text2);   
    printf("Die Zeichenkette text1 enthaelt %s\n",text1);
    printf("Die Zeichenkette text2 enthaelt %s\n",text2);
    return 0;
}

