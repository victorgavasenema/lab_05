#include <stdio.h>

int ConversaoSegundos (int Horas, int Minutos, int Segundos){
    
    int Resultado;
    Horas = Horas * 60 * 60;
    Minutos = Minutos * 60;
    Resultado = Horas + Minutos + Segundos;

    printf ("A quantidade em segundos eh = %d\n", Resultado);
    
    return 0;
}

int main(){
    
    int H, M, S, Funcao;
    printf ("Escreva as horas:\n");
    scanf ("%d", &H);
    printf ("Escreva as minutos:\n");
    scanf ("%d", &M);
    printf ("Escreva as segundos:\n");
    scanf ("%d", &S);
    Funcao = ConversaoSegundos (H, M, S);
    
    return 0;
}