// Aufgabe 12

#include <stdio.h>

struct Datum{
  int tag;
  int monat;
  int jahr;
};

typedef struct Person{
  char name[50];
  char vname[50];
  char geschlecht;
  struct Datum geburtsdatum;
  double gehalt;
} MITARBEITER;

struct Datum eingabe_datum()
{
  struct Datum d;
  //(void)!scanf("%d",&d.tag);
  d.tag = 24;
  d.monat = 12;
  d.jahr = 2020;
  return d;
}

MITARBEITER eingabe_person()
{
  MITARBEITER m;
  printf("\nName:");
  (void)!scanf("%s",m.name); //fgets(m.name,50,stdin);
  printf("\nVorname:");
  (void)!scanf("%s",m.vname);
  m.geschlecht = 'm';
  m.geburtsdatum = eingabe_datum();
  m.gehalt = 0.0;
  return m;
}

void gehalt(MITARBEITER* m)
{
  double geh;
  printf("\nGehalt: ");
  (void)!scanf("%lf",&geh);
  m->gehalt = geh;    //  (*m).gehalt = geh;
}

MITARBEITER gehalt2(MITARBEITER m)
{
  double geh;
  printf("\nGehalt: ");
  (void)!scanf("%lf",&geh);
  m.gehalt = geh;
  return m;
}

void ausgabe(MITARBEITER* m)
{
  printf("\n%s\t%s\t%c\t%d.%d.%d\t%lf\n",m->name,m->vname,m->geschlecht,m->geburtsdatum.tag,m->geburtsdatum.monat,m->geburtsdatum.jahr,m->gehalt);
}

int main()
{
  MITARBEITER m[3];
  for(int i=0;i<3;i++) m[i]= eingabe_person();
//  for(int i=0;i<3;i++) m[i] = gehalt2(m[i]);
  for(int i=0;i<3;i++) gehalt(&m[i]);
  for(int i=0;i<3;i++) ausgabe(&m[i]);

  return 0;
}









