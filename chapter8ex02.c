#include <stdio.h>
char espacio[1000];
int R; /*cantidad de resistencias*/
float Val; /*valor de las resitencias*/
int V; /*variable*/
float Res=0; /*valor inicial del denominador en la formula*/
float VF; /*valor final de la operacion*/

int main(void)
{
  printf("Numero de resistencias a calcular\n");
    fgets(espacio, sizeof(espacio), stdin);
    sscanf(espacio,"%d",&R);

  for(V=1; V<=R;V++) /*preguntar N veces el valor de cada resistencia según las solicitadas*/
  {
    printf("ingresar el valor de la resistencia %d en Ohms\n", V);
    fgets(espacio, sizeof(espacio), stdin);
    sscanf(espacio, "%f", &Val);
    Res=Res+(1/Val); /*asignar operacion para cada resisitencia*/

     if (V==R) /*parar el FOR cuando se escriban todas las resistencias*/
     { 
       break; 
      }
        }
        VF=1/Res; /*la division final de la operacion*/
      
      printf("el valor total de las resistencias en paralelo es de  %.2f ohms\n", VF);
    
  return 0;
}
