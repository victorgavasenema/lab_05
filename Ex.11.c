#include <stdio.h>

int Media (char Operacao, float n1, float n2, float n3){
    
    float Resultado;
    
    if(Operacao == 'A' || Operacao == 'a'){
        Resultado = (n1 + n2 + n3) / 3;
        printf ("%.2f", Resultado);
    }
    
    if(Operacao == 'P' || Operacao == 'p'){
        Resultado = (n1 * 5 + n2 * 3 + n3 * 2) / 10;
        printf ("%.2f", Resultado);
    }
    
    else {
        printf ("Opcao escolhida invalida.\n");
    }
    return 0;
}

int main(){
    
    float n1, n2, n3;
    char Operacao;
    int Funcao;
    printf ("A- para media simple.\nP- para media ponderada.\n");
    scanf ("%c", &Operacao);
    printf ("Escreva as 3 notas:\n");
    scanf ("%f%f%f", &n1, &n2, &n3);

    Funcao = Media (Operacao, n1, n2, n3);
    
    return 0;
}