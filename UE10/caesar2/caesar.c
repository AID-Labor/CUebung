#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Caesar-Chiffre!\n");
    char text[100];
    printf("Geben Sie einen zu verschlüsselnden Text ein:");
    (void)!fgets(text,100,stdin);    // alternativ zu scanf("%s",text);
    printf("Geben Sie den Schlüssel ein:");
    int k = 0;
    (void)!scanf("%d",&k);
    for(int i=0;i<strlen(text);i++)
    {
	char c = text[i];
	if((c>='a') & (c<='z'))
	{
	    c = c-'a';
	    c = (char)(c+k)%26;
	    text[i] = c+'a';
	}
    }
    printf("\nVerschlüsselt: %s\n",text);
    return 0;
}













/*
    encrypt(text,k);

void encrypt(char* c,int key)
{
    int s = 0;
    while(*(c+s))
    {
        c[s] = (c[s]+key)%255;
        s++;
    }
}

*/
