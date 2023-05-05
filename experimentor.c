#include <stdio.h>
#include <sys/time.h>
#include "funciones.h"

int main(){
    unsigned int n, p, crecur;
    unsigned int *const llamadas=&crecur;

    struct timeval tini,tfin;
    double tiempo;

  printf("Introduzca el valor que quiere elevar: ");
  scanf("%u", &n);

  printf("Introduzca el valor de la potencia a la que quiere elevar: ");
  scanf("%u", &p);

  getchar();
    gettimeofday(&tini, NULL);

  for (int k=0; k<100000; k++){
    crecur=0;
    n=potenciaRecursiva(n, p, llamadas);
  }

   gettimeofday(&tfin, NULL);
    tiempo= ((tfin.tv_sec-tini.tv_sec)*1000+(tfin.tv_usec-tini.tv_usec)/1000.0);
    printf("El tiempo empleado ha sido %lf milisegundos\n", tiempo);

  printf("El valor obtenido mediante recursividad es: %u\n", n);

  printf("La cantidad de veces que se ha llamado a potenciaRecursiva es: %d\n", crecur);

  char *nombreArchivo = "recursivo.txt";
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






