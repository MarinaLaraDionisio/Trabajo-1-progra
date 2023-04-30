# Trabajo-1-progra
Guion de prácticas para algoritmo de calcular potencia, recursivo e iterativo

#include <stdio.h>
 
// Haciendo uso de la propuesta de Alvaro en el guion del trabajo para el recursivo he decidido usar la funcion power como os dije en clase la semana pasada como recordareis, a ver como lo veis

long power(int x, int e)
{
   
    if (e == 0) {
     
        return 1L;
     
     // 1L se trata de una forma de decirle a la funcion que retorne el numero que probablemente sea de gran tamaño debido a que al ser una potencia no sabemos como de grandde será
     
    }
 
    if (e & 1) { 
    
    // para e impar
    
        return x * power(x, e / 2) * power(x, e / 2);
    }
    
    else { 
    
     // para e par
    
    return power(x, e / 2) * power(x, e / 2);
    
    }
 
}
 
int main(void)
{
    int x;
    int e;
    
    printf("Introduzca el numero cuya potencia quiera calcular \n");
    scanf("%d", &x);
    printf("Introduzca el orden de la potencia a calcular del numero anteriormente citado \n");
    scanf("%d", &e);
    
    printf("pow(%d, %d) = %d", x, e, power(x, e));
 
    return 0;
}
