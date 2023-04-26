#include<stdio.h>
#include<time.h>
float x; int p;
int main(){
  int citer;
  double time;
  printf("Introduzca el valor del número que quiere elevar: ");
  scanf("%f", &x);
  
  printf("Introduzca el valor de la potenncia a la que quiere elevar: ");
  scanf("%d", &p);
  clock_t begin = clock();
  x=potenciaWhile(x, p, &citer);
  clock_t end = clock();
  tiempo = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("El valor obtenido mediante el método iterativo es: %f", x);
  printf("Las iteraciones que hemos necesitado son: %d", citer);
  printf("El tiempo empleado es %f", tiempo);
  
  return 0;
}
