#include <stdio.h>
char espacio[1000];
char L; /*lo que escribio el usuario*/

int main(void){

  printf("escriba una letra minuscula\n");

   fgets(espacio,sizeof(espacio),stdin);
    sscanf(espacio, "%s",&L); /*al utilizar el %s se almacena en codigo ASCII*/
  if (L==97 ||L==101 || L==105 || L==111 || L== 117) /*corresponden a las letras a,e,i,o,u. ; el operador "||" es referido a un OR*/
  {
    printf("%c es una vocal\n",L);
  }
  

  else if (L>97 && L<122) /* si no son las anteriores pero estan en el rango de las letras minusculas del codigo ASCII, serán consonantes. el operador && es un AND */
  {
  printf("%c es una consonante\n",L);
  }
  return 0;
}
