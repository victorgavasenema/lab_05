#include <stdio.h>
#include <math.h>

int Hipotenusa (float a, float b){
    
    float H;
    H = sqrt ((a * a)+ (b * b));

    printf ("Hipotenusa = %.4f\n", H);
    
    return 0;
}

int main(){
    
    float a, b;
    int Funcao;
    printf ("Escreva os valores dos catetos:\n");
    scanf ("%f%f", &a, &b);

    Funcao = Hipotenusa (a, b);
    
    return 0;
}