#include<stdio.h>
float n; int p;
int main(){
  int crecur;
  double tiempo;
  
  printf("Introduzca el valor del número que quiere elevar: ");
  scanf("%f", &n);
  
  printf("Introduzca el valor de la potenncia a la que quiere elevar: ");
  scanf("%d", &p);
  clock_t begin = clock();
  x=potenciaRecursiva(n, p, &crecur);
  clock_t end = clock();
  tiempo= (double)(end - begin) / CLOCKS_PER_SEC;
  printf("El valor obtenido mediante el método iterativo es: %f", x);
  
  return 0;
}
