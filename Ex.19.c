#include <stdio.h>

int recebe_valores (int x){
    int i, resultado = 1;
    
    for (i = 1; i <= x; x--){
        
        resultado = resultado * (x);
    }
    
    return resultado;
    
}

int main(){
    
    int x, z, funcao;
    
    printf("Escreva um valor para calcular seu fatorial:\n");
    scanf("%d", &x);
    
    funcao = recebe_valores (x);
    
    printf("O resultado do fatorial eh: %d\n", funcao);
    
    return 0;
}