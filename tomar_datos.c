#include <stdio.h>
#define CUADRADO(x) ((x)*(x))

int main()
{
    FILE *recursivo, *iterativo;
    float media_recursivo=0, varianza_recursivo=0, media_iterativo=0, varianza_iterativo=0;

    recursivo = fopen("recursivo.txt", "r");
    iterativo = fopen("iterativo.txt", "r");

    if ((recursivo == NULL || iterativo==NULL)){
            printf("\nError de apertura del archivo. \n");
    }

    else{
//CÁLCULO DE LA MEDIA:

        int repeticiones = 0;
        float c;
        int aux=fscanf(recursivo, "%f", &c);
//---------------------------------------------------PARA LA MEDIA DEL RECURSIVO-------------------------------------------------------------------------------------
        do{
            media_recursivo = media_recursivo+c;
            repeticiones++;
            aux=fscanf(recursivo, "%f", &c);
            } while (aux==1);

        media_recursivo=media_recursivo/repeticiones;

        printf("La media de los datos de tiempo por recursividad es %f\n", media_recursivo);

//reinicializamos las variables auxiliares: repeticiones, aux

        repeticiones=0;
        aux=fscanf(iterativo, "%f", &c);

//---------------------------------------------------PARA LA MEDIA DEL ITERATIVO-------------------------------------------------------------------------------------

         do{
            media_iterativo = media_iterativo+c;
            repeticiones++;
            aux=fscanf(iterativo, "%f", &c);
            } while (aux==1);

        media_iterativo=media_iterativo/repeticiones;

        printf("La media de los datos de tiempo mediante algoritmo iterativo es %f\n", media_iterativo);

//CÁLCULO DE LA VARIANZA:

//---------------------------------------------------PARA LA VARIANZA DEL RECURSIVO-------------------------------------------------------------------------------------

        fclose(recursivo); //reabrimos el .txt para poder leerlo desde el principio de nuevo
        recursivo = fopen("recursivo.txt", "r");
        repeticiones=-1; //reinicializamos repeticiones a -1 porque la varianza tiene en el denominador en número de elementos-1
        aux=fscanf(recursivo, "%f", &c);
        do{
            varianza_recursivo = varianza_recursivo+CUADRADO(c-media_recursivo);
            repeticiones++;
            aux=fscanf(recursivo, "%f", &c);
            } while (aux==1);
        varianza_recursivo=varianza_recursivo/repeticiones;
        printf("La varianza de lo datos de tiempo del algoritmo recursivo es %f\n", varianza_recursivo);

//---------------------------------------------------PARA LA VARIANZA DEL ITERATIVO-------------------------------------------------------------------------------------

        fclose(iterativo);
        iterativo = fopen("iterativo.txt", "r");
        repeticiones=-1;
        aux=fscanf(iterativo, "%f", &c);
        do{
            varianza_iterativo = varianza_iterativo+CUADRADO(c-media_iterativo);
            repeticiones++;
            aux=fscanf(iterativo, "%f", &c);
            } while (aux==1);
        varianza_iterativo=varianza_iterativo/repeticiones;
        printf("La varianza de lo datos de tiempo del algoritmo iterativo es %f\n", varianza_iterativo);
    }

    fclose(recursivo);
    fclose(iterativo);
    return 0;
}
