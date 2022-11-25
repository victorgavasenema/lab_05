#include <stdio.h>

int recebe_valores (int x, int z){
    int i, resultado = x;
    
    for (i = 1; i < z; i++){
        resultado = resultado * x;
    }
    
    return resultado;
    
}

int main(){
    
    int x, z, funcao;
    
    printf("Escreva um valor inteiro:\n");
    scanf("%d", &x);
    printf("Escreva um expoente positivo:\n");
    scanf("%d", &z);
    
    funcao = recebe_valores (x, z);
    
    printf("O resultado da exponenciaçao eh: %d\n", funcao);
    
    return 0;
}