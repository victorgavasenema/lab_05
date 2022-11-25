#include <stdio.h>
#include <math.h>

int VerificaoDeQuadrado(int numero){
    
    int raiz;
    
    if (numero <= 0){
        printf ("O numero escolhido nao eh um quadrado perfeito\n");
    }
    
    raiz = sqrt (numero);
    
    if (raiz * raiz == numero){
        printf ("O numero escolhido eh um quadrado perfeito\n");
    }
    else{
        printf ("O numero escolhido nao eh um quadrado perfeito\n");
    }
    
    return 0;
}

int main()
{
    int N, Funcao;
    printf ("Escreva um numero:\n");
    scanf ("%d", &N);
    Funcao = VerificaoDeQuadrado (N);
    
    return 0;
}