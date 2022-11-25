#include <stdio.h>

int ConversaoF (int Celsius){
    
    float F;
    F = (Celsius * 1.8) + 32;

    printf ("Fahrenheit = %.2f\n", F);
    
    return 0;
}

int main(){
    
    int C, Funcao;
    printf ("Escreva a temperatura em Celsius:\n");
    scanf ("%d", &C);

    Funcao = ConversaoF (C);
    
    return 0;

}