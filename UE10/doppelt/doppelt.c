#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int doppelt(char* s)
{
	int d = 0;
	for (int i=0;i<strlen(s)-1;i++)
	{
		if (s[i]==s[i+1]) d++;
	}
	return d;
}

int main()
{
    printf("Doppelbuchstaben!\n");
    char s[20] = "Wasserstoffflasche";
    int d = doppelt(s);
    printf("\n%s enthält %d Doppelbuchstaben\n",s,d);
    return 0;
}
