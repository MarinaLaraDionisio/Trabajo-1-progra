#include <stdio.h>
#include <sys/time.h>/*Con esta librería podremos medir el tiempo de ejecución del programa. Se basa en medir la
hora interna del ordenador y poder operar con esas horas guardadas en nuestras variables.*/
#include "funciones.h"
int main(){
    unsigned int n, aux, p, memoria;/*n es la variable que usamos como base y p es el exponente al que se eleva.
    memoria es la variable que hemos usado para medir el consumo de memoria, que estimaremos posteriormente.
    (Explicar por qué las declaramos como locales en el documento)*/
    int citer=0;/*Con esta variable podremos llevar la cuenta de cuántas veces se ha ejecutado nuestro algoritmo
    (cuántas iteraciones se han llevado a cabo). La inicializamos a 0 para evitar problemas de que pueda haber
    algo en la dirección de memoria que se le ha asignado.*/
    struct timeval tini,tfin;/*Variables que usamos para medir los instantes inicial y final.*/
    double tiempo;/*Variable con la que calculamos el tiempo en milisegundos.*/
    printf("Introduzca el valor que quiere elevar: ");
    scanf("%u", &n);
    aux=n;
    /*Le pedimos al usuario que introduzca la base*/
    printf("Introduzca el valor de la potencia a la que quiere elevar: ");
    scanf("%u", &p);
    /*Le pedimos al usuario que introduzca el exponente.*/
    n=potenciaWhile(n, p, &citer);/*Ejecución del algoritmo iterativo*/

    memoria=sizeof(int)+sizeof(int);/*Estimación que hemos realizado de la memoria.*/

    printf("El valor obtenido mediante el algoritmo iterativo es: %u\n", n);

    printf("Las iteraciones que hemos necesitado son: %d\n", citer);

    printf("La memoria consumida es %u bytes\n", memoria);
    /*Medición del tiempo.*/
    getchar();
    gettimeofday(&tini, NULL);
    for(int k=0;k<10000;k++){
        citer=0;
        n=aux;
        n=potenciaWhile(n, p, &citer);
    }
    gettimeofday(&tfin, NULL);
    tiempo= ((tfin.tv_sec-tini.tv_sec)*1000+(tfin.tv_usec-tini.tv_usec)/1000.0);
    printf("El tiempo empleado ha sido %lf milisegundos", tiempo);

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
