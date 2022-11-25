#include <stdio.h>

int Comparador (float n1, float n2){
    
    if(n1 > n2){
        printf ("%f\n", n1);
    }
    if(n1 < n2){
        printf ("%f\n", n2);
    }
    if(n1 == n2){
        printf ("Os valores sao iguais\n");
    }
    
    return 0;
}

int main(){
    
    float n1, n2;
    int Funcao;
    printf ("Escreva dois numeros para serem comparados:\n");
    scanf ("%f%f", &n1, &n2);

    Funcao = Comparador (n1, n2);
    
    return 0;
}