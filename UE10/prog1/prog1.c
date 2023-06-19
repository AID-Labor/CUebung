// Kapitel 10

#include <stdio.h>

void prog1(char* Text)
{
  int z=0;
  while (Text[z] != 0) z++;
  for (z--;z>=0;z--) printf("%c",*(Text+z));
}

 
int main( )
{
    printf("C-Zeichenketten\n\n");
    char text1[] = "Hallo, Welt!";
    prog1(text1);
    return 0;
}

