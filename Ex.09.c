#include <stdio.h>

int Hipotenusa (float h, float r){
    
    float Volume;
    Volume = 3.1415 * r * r *h;

    printf ("Volume = %.4f\n", Volume);
    
    return 0;
}

int main(){
    
    float h, r;
    int Funcao;
    printf ("Escreva o valor da altura:\n");
    scanf ("%f", &h);
    printf ("Escreva o valor da altura:\n");
    scanf ("%f", &r);

    Funcao = Hipotenusa (h, r);
    
    return 0;
}