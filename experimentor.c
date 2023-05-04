int main(){
    unsigned int n, p, crecur;
    unsigned int *const llamadas=&crecur;
  clock_t t; double tiempo;

  printf("Introduzca el valor que quiere elevar: ");
  scanf("%u", &n);

  printf("Introduzca el valor de la potencia a la que quiere elevar: ");
  scanf("%u", &p);

  t=clock();

  for (int k=0; k<1000; k++0){
    crecur=0;
    n=potenciaRecursiva(n, p, llamadas);
  }
  t = clock()-t;

  //tiempo= ((double)t)*10000000/CLOCKS_PER_SEC;

//printf("El tiempo del programa usando recursividad es %lf segundos\n", tiempo);

  printf("El valor obtenido mediante recursividad es: %u\n", n);

  printf("La cantidad de veces que se ha llamado a la función recursiva es: %d", crecur);

 /* time_t begin = time(NULL);
  n=potenciaRecursiva(n, p, &crecur);
  time_t end = time(NULL);
  tiempo= (double)((end - begin);*/

  /*struct timeval ti, tf; double time; unsigned int n;
  getchar();
  gettimeofday(&ti, NULL);
  pascal_iter(n); //
  gettimeofday(&tf, NULL);
  time=(tf.tv_sec-ti.tv_sec)*1000+(tf.tv_user-ti.tv_usec)/1000.0)1000;
  printf("El tiempo de ejecución del programa usando iteratividad es %lf segundos\n", time);

  printf("El valor obtenido mediante recursividad es: %f\n", n);

  printf("El tiempo empleado en ejecutar el archivo es: %f", tiempo);

  gettimeofday(&ti, NULL);
  imprimir_pascal_rec(n);
  gettimeofday(&tf, NULL);
  time=(tf.tv_sec-ti.tv_sec)*1000+(tf.tv_user-ti.tv_usec)/1000.0)1000;
  printf("El tiempo de ejecución del programa de recursividad es: %lf segundos\n", time);*/

  /*t = clock()-t;

  tiempo= ((long double)t)*10000000/CLOCKS_PER_SEC;

  printf("El tiempo del programa usando recursividad es %lf segundos\n", tiempo);*/

  /*char *nombreArchivo = "recursivo.txt";
    char *modo = "a+";// w es para sobrescribir, a+ es para añadir al existente
    FILE *archivo = fopen(nombreArchivo, modo);
    if (archivo == NULL) {
        printf("Error abriendo archivo %s", nombreArchivo);
        return 1;
    }
    fprintf(archivo, "%f \n", tiempo);
    fclose(archivo);
    puts("\nNuevo dato guardado");*/

  return 0;
}



