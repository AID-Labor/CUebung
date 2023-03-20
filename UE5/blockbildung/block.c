// Übung 5.x
// Blockbildung

#include <stdio.h>

int main()
{

    printf("Übung 5 - Variablen in Blöcken\n\n");

    int a = 5;
    int b = 7;

    printf("Vor dem ersten Block ist a + b = %d\n",(a+b));  //12
    {
      b = 2;
      printf("Im ersten Block ist a + b = %d\n",(a+b)); // 7
    }
    printf("Nach dem ersten Block ist a + b = %d\n",(a+b)); // 12
    {
      int b = 7;
      printf("Im zweiten Block ist a + b = %d\n",(a+b)); // 12
    }
    printf("Nach dem zweiten Block ist b = %d\n",b); // 7
    printf("Nach dem zweiten Block ist a + b = %d\n",(a+b)); //12

    return 0;
}


