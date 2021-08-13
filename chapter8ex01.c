#include <stdio.h>
char espacio[1000];
int D;/*numero de cuadrados a la derecha*/
int A;/*numero de cuadrados hacia abajo*/ 
int V;/*variable de cantidad a acumular 1*/
int V2;/*variable de cantidad a acumular 2*/
int V3;/*variable de cantidad a acumular 3*/
int main(void) 
{
  printf("escribir el numero de cuadrados hacia la derecha\n");
  fgets(espacio, sizeof(espacio), stdin);
  sscanf(espacio, "%d", &D);
  
  printf("escribir el numero de cuadros hacia abajo\n");
  fgets(espacio,sizeof(espacio),stdin);
  sscanf(espacio,"%d",&A);


  for(V=0; V<A;V++)/*imprimir N veces todo el patron que se dicte a continuacion las N veces que indique en Abajo*/
  {
    for (V=0; V<D; V++) /*imprimir N veces según se asigne en Derecha*/
    {
      printf("+-----");/*patron a repetir*/
      
    }
    printf("+");/* imprimir para acompletar al final de la fila*/
  printf("\n"); 
  printf("|");/*empezar el patron*/
  
  for (V2=0 ; V2 <D;V2++) /*imprimir la misma cantidad de veces que las de la derecha*/
  {
  printf("    |");/*patron a repetir*/
  }
  printf("\n");
  printf("|");
  
  for (V2=0 ; V2 <D;V2++) /*imprime la segunda fila de palitos*/
  {
  printf("    |");
  }
  printf("\n");
  printf("|");
  
  for (V2=0 ; V2 <D;V2++)/*imprime tercera fila de palitos*/
  {
  printf("    |");
  }
 printf("\n");
  }
  
  for (V3=0; V3 <D; V3++)/*acompleta el patron al final de la fila*/
  {
  printf("+-----");
  }
return 0;
}
