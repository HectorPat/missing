#include <stdio.h>
char espacio[1000];
int N;/*cantidad de numeros a promediar*/
int Val;/*valor de cada numero*/
float CN=0;/*cantidad de numeros*/
float R;/*resultado*/
int V;/*variable*/

int main(void)
{
  printf("cantidad de numeros a calcular\n");
  fgets(espacio,sizeof(espacio),stdin);
  sscanf(espacio, "%d",&N);

  for (V=1; V<=N;V++)/*preguntar N veces el valor del numero*/
  {
    printf("valor del numero %d\n", V);
    fgets(espacio, sizeof(espacio), stdin);
    sscanf(espacio, "%d", &Val);
    CN=CN+Val; /*operacion para apromediar*/
    R=CN/N; /*resultado para aplicar promedio*/
  }

  printf("el promedio es %.2f",R);
  
    return 0;
}
