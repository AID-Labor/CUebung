#include <stdio.h>
#include <string.h>

int doppelt(char* d)
{
  int r = 0;
  for(int i=0;i<strlen(d)-1;i++)
  {
    if(d[i]==d[i+1]) r++;
  }
  return r;
}

int main(int argc, char* argv[])
{
  if (argc==2)
  {
    int d = doppelt(argv[1]);
    printf("\nDas Wort %s enthält %d Doppelbuchstaben\n",argv[1],d);
  }
  else printf("\nAufruf mit doppel und Text\n");
}

