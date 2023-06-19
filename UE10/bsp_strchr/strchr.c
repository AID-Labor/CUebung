// Beispiel für strchr

#include <stdio.h>
#include <string.h>

int main()
{
       char text[] = "Hallo, Welt!";
       char* find = strchr(text,(int)','); // Suche das Komma
       printf("%s\n",find);
       printf("%li\n",find-text);
       return 0;
}
