#include <stdio.h>

int Operacao(char op, float n1, float n2){
    
    float resultado;
    
    if ( op == '+'){
        resultado = n1 + n2;
        printf("%.4f", resultado);
    }
    if ( op == '-'){
        resultado = n1 - n2;
        printf("%.4f", resultado);
    }
    if ( op == '*'){
        resultado = n1 * n2;
        printf("%.4f", resultado);
    }
    if ( op == '/'){
        resultado = n1 / n2;
        printf("%.4f", resultado);
    }
    return 0;
}

int main(){
    
    float n1, n2;
    int funcao;
    char op;
    printf("+ soma\n");
    printf("- subtracao\n");
    printf("* multiplicacao\n");
    printf("/ divisao\n");
    scanf ("%c", &op);
    printf("Escreva 2 para fazer uma operacao:\n");
    scanf ("%f%f", &n1, &n2);
    funcao = Operacao (op, n1, n2);
    
    return 0;
}