#include <stdio.h>

int recebe_inteiros (int n1, int n2){
    int i, z, soma = 0;
    z = n1 - n2;
    
    if (z < 0){
        for (i = 1; z <= 0; i++){
            soma = z + soma;
            z = z + 1;
        }
    }
    
    if (z > 0){
        for (i = 1; z >= 0; i++){
            soma = z + soma;
            z = z - 1;
        }
    }
    
    return soma;
}

int main(){
    
    int n1, n2, funcao;
    
    printf("Escreva 2 numeros inteiros positivos e receba a soma dos numeros entre eles:\n");
    scanf("%d%d", &n1, &n2);
    
    
    funcao = recebe_inteiros (n1, n2);
    
    printf("O valor da soma dos inteiroe entre os numero: %d\n", funcao);
    
    return 0;
}