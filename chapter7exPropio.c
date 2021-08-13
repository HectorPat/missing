#include <stdio.h>
#include <math.h>

char espacio[1000];
float P; /*elegir tipo de persona*/
float PI; /*peso ideal*/
float A; /*altura*/

int main(void) 
{
  printf("este codigo determinará su peso ideal aproximado dada su altura y dependiendo si es hombre o mujer\n");
  printf("si es hombre escriba 1\n""si es mujer escriba 2\n");
  fgets(espacio,sizeof(espacio),stdin);
  sscanf(espacio,"%f",&P);
  

  if (P==1)/*en caso que sea hombre*/
  {
    printf("escriba su altura en centimetros\n"); 
      fgets(espacio,sizeof(espacio),stdin);
      sscanf(espacio,"%f", &A); //
      PI=((0.75)*(A))-(62.5); /*formula en hombres*/
      printf("su peso ideal son %.2f Kilos",PI);
      return 0;
  }
  if (P==2)/*en caso que sea mujer*/
  {
    printf("escriba su altura en centimetros\n"); 
      fgets(espacio,sizeof(espacio),stdin);
      sscanf(espacio,"%f", &A); //
      PI=((0.675)*(A))-(56.5); /*formula en mujeres*/
      printf("su peso ideal son %.2f Kilos",PI);
      return 0;

  }
  else if (P>2)
  printf("error");
  return 0;
}
