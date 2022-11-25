#include <stdio.h>

int Triangulo (float l1, float l2, float l3){
    
    if (l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2){
        if (l1 == l2 && l2 == l3){
            printf ("O triangulo eh equilatero.\n");
            return 0;
        }
        if (l1 == l2 || l2 == l3 || l1 == l3 ){
            printf ("O triangulo eh isoceles.\n");
        }
        if (l1 != l2 && l2 != l3){
            printf ("O triangulo eh escaleno.\n");
        }
    }
    
    else {
        printf ("Os lados escolhidos nao pode formar um triangulo.\n");
    }
    
    return 0;
}

int main(){
    
    float l1, l2, l3;
    int Funcao;
    printf ("Escreva os 3 lados:\n");
    scanf ("%f%f%f", &l1, &l2, &l3);

    Funcao = Triangulo (l1, l2, l3);
    
    return 0;
}