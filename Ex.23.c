#include <stdio.h>

int escreve_carac (int x){
    int i, j;
    
    for (i = 1; i <= x; i++){
        for (j = 0; j < i; j++){
        printf("*");
        }
        printf("\n");
    }
    
    
    
    for (i = x -1; i >= 0; i--){
        for (j = 0; j < i; j++){
        printf("*");
        }
        printf("\n");
    }
    
    return 0;
    
}

int main(){
    
    int x, funcao;
    
    printf("Escreva o numero de linhas:\n");
    scanf("%d", &x);
    
    funcao = escreve_carac (x);
    
    return 0;
}