#include <stdio.h>

int Consumo (float km, float l){
    
    float media;
    media = km / l;
    
    if (media < 8){
        printf ("Venda o carro!\n");
    }
    if (media >= 8 && media <= 14){
        printf ("Economico\n");
    }
    if (media > 14){
        printf ("Economico\n");
    }
    
    return 0;
}

int main(){
    
    float km, l;
    int Funcao;
    printf ("Escreva a quilometragem:\n");
    scanf ("%f", &km);
    printf ("Escreva quantos litros de gasolina foram consumidos:\n");
    scanf ("%f", &l);

    Funcao = Consumo (km, l);
    
    return 0;
}