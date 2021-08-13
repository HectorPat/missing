#include <stdio.h>
#include<string.h>


char espacio[1000];
char L; /*lo que escribio el usuario*/
int N0; /*el valor inicial obtenido*/
int N1; /*cada N corresponde a una cifra (1,2,3,4)*/
int N2;
int N3;
int N4;

int main(void)
{
  printf("escriba una numero\n");

   fgets(espacio,sizeof(espacio),stdin);
    sscanf(espacio, "%d",&N0);
  
  if (N0>=0 && N0<=10000) /*contar solo valores de maximo 4 cifras*/
  {
    /*con este metodo puedo separar cada digito*/
    N1=(N0-N0/10*10); 
    N2=(N0-N0/100*100-N1)/10;
    N3=(N0-N0/1000*1000-N1-N2)/100;
    N4=(N0-N0/10000*10000-N1-N2-N3)/1000;
    
    /*cada switch es para distinguir que valor imprimir en dependiendo del numero del "case"*/
    switch (N4)
    {
    case 0:
    printf("cero ");
    break;
    case 1:
    printf("uno ");
    break;
    case 2:
    printf("dos ");
    break;
     case 3:
    printf("tres ");
    break;
     case 4:
    printf("cuatro ");
    break;
     case 5:
    printf("cinco ");
    break;
     case 6:
    printf("seis ");
    break;
     case 7:
    printf("siete ");
    break;
     case 8:
    printf("ocho ");
    break;
     case 9:
    printf("nueve ");
    break;
  }
  switch (N3)
  {
    case 0:
    printf("cero ");
    break;
    case 1:
    printf("uno ");
    break;
    case 2:
    printf("dos ");
    break;
     case 3:
    printf("tres ");
    break;
     case 4:
    printf("cuatro ");
    break;
     case 5:
    printf("cinco ");
    break;
     case 6:
    printf("seis ");
    break;
     case 7:
    printf("siete ");
    break;
     case 8:
    printf("ocho ");
    break;
     case 9:
    printf("nueve ");
    break;
  }
   switch (N2)
   {
    case 0:
    printf("cero ");
    break;
    case 1:
    printf("uno ");
    break;
    case 2:
    printf("dos ");
    break;
     case 3:
    printf("tres ");
    break;
     case 4:
    printf("cuatro ");
    break;
     case 5:
    printf("cinco ");
    break;
     case 6:
    printf("seis ");
    break;
     case 7:
    printf("siete ");
    break;
     case 8:
    printf("ocho ");
    break;
     case 9:
    printf("nueve ");
    break;
  }
   switch (N1)
   {
    case 0:
    printf("cero ");
    break;
    case 1:
    printf("uno ");
    break;
    case 2:
    printf("dos ");
    break;
     case 3:
    printf("tres ");
    break;
     case 4:
    printf("cuatro ");
    break;
     case 5:
    printf("cinco ");
    break;
     case 6:
    printf("seis ");
    break;
     case 7:
    printf("siete ");
    break;
     case 8:
    printf("ocho ");
    break;
     case 9:
    printf("nueve ");
    break;
  } 
  }
  return 0;
}
