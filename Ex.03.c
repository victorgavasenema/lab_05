#include <stdio.h>

int VerificacaoDeValores(int numero){
    
    if (numero == 0){
        printf ("0\n");
    }
    else if (numero > 0){
        printf ("1\n");
    }
    else if (numero < 0){
        printf ("-1\n");
    }
    return 0;
}

int main()
{
    int N, Funcao;
    printf ("Escreva um numero:\n");
    scanf ("%d", &N);
    Funcao = VerificacaoDeValores (N);
    
    return 0;
}