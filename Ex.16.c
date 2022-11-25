#include <stdio.h>

int desenha_linha (int n){
    
    int i;
    if (n < 0){
        return 0;
    }
    for (i = 1; i <= n ;i++){
        printf ("=");
    }
    
    return 0;
}

int main(){
    
    int n, Funcao;
    printf ("Escreva a quantidade de simbolos na linha:\n");
    scanf ("%d", &n);

    Funcao = desenha_linha (n);
    
    return 0;
}