#include <stdio.h>
#include <math.h>

float V; /*Valor*/
float TH; /*Horas*/
float TD; /*dias*/

char espacio[1000];

int main(void) {
  printf("insertar el peso del archivo\n ");
  fgets(espacio, sizeof(espacio),stdin);
  sscanf(espacio,"%f",&V);
    
    TH=(1*V)/(34560000);/*tiempo en horas*/
    TD=((TH)/(24));  /*Tiempo en días*/

    printf("se enviaría en %f horas o en %f dias\n",TH, TD);
    
  return 0;
}
