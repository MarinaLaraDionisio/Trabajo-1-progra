#include<stdio.h>
float x; int p;
int main(){
  int citer, crecur;
  
  printf("Introduzca el valor del número que quiere elevar: ");
  scanf("%f", &x);
  
  printf("Introduzca el valor de la potenncia a la que quiere elevar: ");
  scanf("%d", &p);
  
  x=potenciaRecursiva(x, p);
 
  printf("El valor obtenido mediante el método iterativo es: %f", x);
  
  return 0;
}
