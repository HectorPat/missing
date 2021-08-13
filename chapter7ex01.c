#include <stdio.h>
#include <math.h>

float V; //variable para medir
float VA; /*valor asignado*/
float R; /*resultado*/

char espacio[1000];

int main(void) {
  
printf("elegir conversion\n");
printf("Millas a kilometross = 1\n""Galones a litros = 2\n" "pulgadas a centimetros = 3\n");
fgets(espacio,sizeof(espacio),stdin);
sscanf(espacio,"%f",&V);

/*se elegirá la operacion dependiendo de la conversión*/

  if (V==1)
  {
    /*Millas a kilometros*/
    printf("cantidad\n"); 
      fgets(espacio,sizeof(espacio),stdin);
      sscanf(espacio,"%f", &VA); //
      R=VA*1.609344; /*Millas= 1.609344 Kilometros*/
      printf("son %f Kilometros",R);
      return 0;
  }
  /*Galones a Litros*/
  
  if (V==2)
  {
   printf("cantidad\n");
      fgets(espacio, sizeof(espacio), stdin);
      sscanf(espacio,"%f", &VA);
      R=VA*4.5460; /*Galon= 4.5460 Litros*/
     printf("son %f litros\n",R);
     return 0;
  }
  /*pulgadas a centimetros*/
  
  if (V== 3)
  {
   printf("cantidad\n");
      fgets(espacio, sizeof(espacio), stdin);
      sscanf(espacio,"%f", &VA);
      R=VA*2.54; /*pulgada = 2.54 centimetros*/
      printf("son %f centimetros\n",R);
  }
  /*error si no se escribe una de las 3 opciones esperadas*/
  
  if (V >3)
  {
  printf("error");
  }

return 0;
}
