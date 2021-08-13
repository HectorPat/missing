#include <stdio.h>
#include <math.h>

char espacio[1000];
float CX1; /*coordenada 1 X*/ 
float CY1; /*coordenada 1 Y*/ 
float CX2; /*coordenada 2 X*/ 
float CY2; /*coordenada 2 Y*/ 
float M; /*pendiente*/

int main(void) 
{
  printf("este codigo te dirá la pendiente de una linea dado 2 puntos de coordenadas X,Y\n");

  printf("escriba la primera coordenada en formato X,Y\n");
  fgets(espacio,sizeof(espacio),stdin);
  sscanf(espacio,"%f,%f",&CX1,&CY1);

  printf("escriba la segunda coordenada en formato X,Y\n");
  fgets(espacio,sizeof(espacio),stdin);
  sscanf(espacio,"%f,%f",&CX2,&CY2);

  M=(CY2-CY1)/(CX2-CX1);

printf("tu pendiente es %.2f",M);
}
