#include <stdio.h>

int SomaDosDigitos(int numero)
{
    if (numero < 0){
        printf("numero invalido\n");
        return 0;  
    }
    
    int resultado, x = 0;
    
    for (resultado = 0; numero > 0; x = numero % 10){
        
        x = numero % 10;
        resultado = resultado + x;
        numero = numero / 10;
    }

    printf("%d\n", resultado);
    
    return 0;
}

int main()
{
    int numero, funcao;
    printf("Escreva um numero inteiro positivo:\n");
    scanf ("%d", &numero);
    funcao = SomaDosDigitos (numero);
    
    return 0;
}