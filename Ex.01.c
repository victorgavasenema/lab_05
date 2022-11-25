#include <stdio.h>

int dobro (int x){
    return x * 2;
}

int main (){
    
    int n1;

    printf("Escreva um numero inteiro: ");
    scanf("%d", &n1);
    
    int z = dobro (n1);
    printf("%d\n", z);
    
    return 0;
}