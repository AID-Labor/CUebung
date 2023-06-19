#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Caesar-Chiffre!\n");
    char text[100];
    printf("Geben Sie einen zu verschlüsselnden Text ein:");
    (void)!scanf("%s",text);
    printf("Geben Sie den Schlüssel ein:");
    int k = 0;
//    (void)!scanf("%d",&k);
    scanf("%d",&k);
    // ---- hier wird verschlüsselt -----
    for(int i=0;i<strlen(text);i++)
    {
      char c = text[i]-'a';
      c = (char) (((int)c+k)%26);
      c = c+'a';
      
      printf("%c -> %c\n",text[i],c);
    }
    // ----------------------------------
    printf("\nVerschlüsselt: %s\n",text);
    return 0;
}
