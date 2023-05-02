#include <stdio.h>
#include <time.h>
#include "funciones.h"
float n; int p;
int main(){
 int citer=0;
  clock_t t; double tiempo;

  printf("Introduzca el valor que quiere elevar: ");
  scanf("%f", &n);

  printf("Introduzca el valor de la potencia a la que quiere elevar: ");
  scanf("%d", &p);
  t=clock();
  n=potenciaWhile(n, p, &citer);
  t = clock()-t;

  tiempo= ((double)t)/CLOCKS_PER_SEC;

 /* time_t begin = time(NULL);
  n=potenciaRecursiva(n, p, &crecur);
  time_t end = time(NULL);
  tiempo= (double)((end - begin);*/

   printf("El valor obtenido mediante el algoritmo iterativo es: %f\n", resultado);
 
   printf("Las iteraciones que hemos necesitado son: %d\n", citer);
 
  char *nombreArchivo = "iterativo.txt";
    char *modo = "a+";// w es para sobrescribir, a+ es para añadir al existente
    FILE *archivo = fopen(nombreArchivo, modo);
    if (archivo == NULL) {
        printf("Error abriendo archivo %s", nombreArchivo);
        return 1;
    }
    fprintf(archivo, "%f \n", tiempo);
    fclose(archivo);
    puts("\nNuevo dato guardado");

  return 0;
}
