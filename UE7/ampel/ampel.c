#include <stdio.h>

void ampel_rot ();
void ampel_gruen ();
void ampel_gelb (int);


void ampel_rot () { 
  printf("Rot\n"); 
  ampel_gelb(1);
} 

void ampel_gelb (int phase) { 
  printf("Gelb\n"); 
  if (phase==1) ampel_gruen();
  if (phase==2) ampel_rot();
}

void ampel_gruen () { 
  printf("Grün\n"); 
  ampel_gelb(2);
}

int main()
{
	ampel_rot();
	return 0;
}

