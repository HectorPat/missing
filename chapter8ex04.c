#include <stdio.h>
char espacio[1000];
int M;/*numero a multiplicar*/
int C;/*cantidad de tablas a mostrar*/
int V;/*variable para acumular*/
int R;/*resultado unitario*/

int main(void)
{
  printf("elige el numero para crear su tabla\n");
    fgets(espacio, sizeof(espacio), stdin);
    sscanf(espacio, "%d",&M);

  printf("escribe la cantidad de tablas a mostrar\n");
  fgets(espacio, sizeof(espacio),stdin);
  sscanf(espacio,"%d",&C);

  for (V=0; V<C; V++)/* realizar el conteo de N veces para la tabla desde 0 a C*/
  {
  R=M*V;/*realizar la multiplicacion*/ 
  printf("%d x %d = %d\n",M,V,R);
  }
 return 0;
}
