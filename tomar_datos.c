#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    FILE *recursivo, *iterativo;
    double media_recursivo=0, media_iterativo=0, varianza_recursivo=0, varianza_iterativo=0;

    recursivo = fopen("recursivo.txt", "r");
    //iterativo = fopen("iterativo.txt", "r");

    if ((recursivo == NULL) /*|| (iterativo == NULL)*/){
            printf("\nError de apertura del archivo. \n");
    }

    else{
        int repeticiones = 0;
        while(fgets(recursivo) != EOF){
            media_recursivo = media_recursivo+atof(fgets(recursivo)); 
            repeticiones++}
        media_recursivo=media_recursivo/repeticiones;

        repeticiones=0;
        
       /* while(( fgets(iterativo)) != EOF) {
            media_iterativo = media_iterativo+atof(fgets(iterativo)); 
            repeticiones++;}
       media_iterativo=media_iterativo/repeticiones;*/

       //CÁLCULO DE LA VARIANZA
        repeticiones=-1;
        while(fgets(recursivo) != EOF) {
            varianza_recursivo = varianza_recursivo+atof(fgets(recursivo))-media_recursivo; 
            repeticiones++}
        varianza_recursivo=varianza_recursivo/repeticiones:
        /*repeticiones=-1;
        while(fgets(iterativo) != EOF) {
            varianza_iterativo = varianza_iterativo+atof(fgets(iterativo))-media_iterativo; 
            repeticiones++}
        varianza_iterativo=varianza_iterativo/repeticiones*/
    }

        fclose(recursivo);
       // fclose(iterativo);

    return 0;
}
