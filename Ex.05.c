#include <stdio.h>

int Esfera (int Raio){
    
    float Volume;
    Volume = (((4/3) * 3.1415) * (Raio * Raio * Raio));

    printf ("Volume da esfera = %.4f\n", Volume);
    
    return 0;
}

int main(){
    
    int R, Funcao;
    printf ("Escreva o raio da esfera:\n");
    scanf ("%d", &R);
    Funcao = Esfera (R);
    
    return 0;
}