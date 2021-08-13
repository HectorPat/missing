#include <stdio.h>

char espacio[1000];
int SN; /*numeros de entrada*/ 
int V; /*variable de entradada*/
int N=0; /*los numeros negatitivos*/
int P=0; /*los numeros positivos*/
int C=0; /*los numeros cero*/
int V1;/*variable para acumular*/
int main(void) {
  printf("escribir la cantidad de numeros a contar\n");
  fgets(espacio, sizeof(espacio),stdin);
  sscanf(espacio, "%d",&SN);

  for (V1=1; V1<=SN ;V1++) /*contar los numeros*/
  {

    printf("ingresa un numero:\n"); /*pedir el numero N veces se dijo anterior mente*/
    fgets(espacio, sizeof(espacio), stdin);
    sscanf(espacio, "%d", &V);

      if (V>0) 
      { /*saber si el numero es negativo*/
      N=N+1;  /*contar numeros*/
  }
  
      else if (V<0) 
      { /*saber si el numero es positivo*/
      P=P+1; /*contar numeros*/
      }
  
      else if (V==0) /*saber si el numero es zero*/
      { 
      C=C+1;  /*contar numeros*/
      }

  }

      printf("la cadena tiene %d numeros positivos, %d numeros negativos y %d ceros\n",N ,P, C);

 
  return 0;
}
