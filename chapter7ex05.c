#include <stdio.h>

float C; //cantidad
char espacio[1000];

int main(void) 
{
  printf("escribir un numero\n"),
  fgets(espacio, sizeof(espacio),stdin);
  sscanf(espacio, "%f",&C);
  
  if (C/2 ==0) /*se va a corroborar que el numero no sea divisible por 2, 3, 4 ,5, 6, 7 , 8 y 9 */
  printf("no es primo\n");
    
    else if (C/3 ==0)
    printf("no es primo\n");
    
    else if (C/4 ==0)
    printf("no es primo\n");
    
    else if (C/5 ==0)
    printf("no es primo\n");
    
    else if (C/6 ==0)
    printf("no es primo\n");
    
    else if (C/7 ==0)
    printf("no es primo\n");
    
    else if (C/8 ==0)
    printf("no es primo\n");
    
    else if (C/9 ==0)
    printf("no es primo\n");
  
    else /* cuanto todas las sentencias anteriores sean incorrectas*/ 
    printf("es primo\n");

  return 0;
}
