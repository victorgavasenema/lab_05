#include <stdio.h>

int Data(int Dia, int Mes, int Ano)
{
    //Avaliar se o mes de fevereiro está correto (Ano bissexto)
    if(Ano % 4 == 0 || Ano % 100 != 0 || Ano % 400 == 0){
        if (Mes == 2){
            if (Dia <= 0 || Dia >= 30){
                printf ("Valores Inválidos");
                return 0;
            }
        }
    }
    
    //Avalaiar se o mes de fevereiro está correto
    if (Mes == 2){
        if (Dia <= 0 || Dia >= 28){
            printf ("Valores Inválidos");
            return 0;
        }
    }
    
    //Avaliar se o Mes tem 30 dias
    if (Mes == 4, Mes == 6, Mes == 9, Mes == 11){
        if (Dia <= 0 || Dia >= 31){
            printf ("Valores Inválidos");
            return 0;
        }
    }
    
    //Avaliar se o Mes tem 31 dias
    if (Mes == 1, Mes == 3, Mes == 5, Mes == 7, Mes == 8, Mes == 10, Mes == 12){
        if (Dia <= 0 || Dia >= 31){
            printf ("Valores Inválidos");
            return 0;
        }
    }
    
    //Avaliar Mes e Dia
    if (Mes <= 0 || Mes >= 13 || Dia <= 0 || Dia >= 31){
        printf ("Valores Inválidos");
        return 0;
    }
    
    //Ano com 1 digito
    if ((Ano >= 0 && Ano <= 9)){
        if (Mes >= 1 && Mes <= 9){
            if (Dia >= 1 && Dia <= 9){
                printf ("0%d/0%d/000%d\n", Dia, Mes, Ano);
            }
            else if (Dia >= 10 && Dia <= 12){
                printf ("%d/0%d/000%d\n", Dia, Mes, Ano);
            }
        }
        else if (Mes >= 10 && Mes <= 12){
            if (Dia >= 1 && Dia <= 9){
                printf ("0%d/%d/000%d\n", Dia, Mes, Ano);
            }
            else if (Dia >= 10 && Dia <= 31){
                printf ("%d/%d/000%d\n", Dia, Mes, Ano);
            }
        }
    }
    
    //Ano com 2 digitos
    else if ((Ano >= 10 && Ano <= 99)){
        if (Mes >= 1 && Mes <= 9){
            if (Dia >= 1 && Dia <= 9){
                printf ("0%d/0%d/00%d\n", Dia, Mes, Ano);
            }
            else if (Dia >= 10 && Dia <= 12){
                printf ("%d/0%d/00%d\n", Dia, Mes, Ano);
            }
        }
        else if (Mes >= 10 && Mes <= 12){
            if (Dia >= 1 && Dia <= 9){
                printf ("0%d/%d/00%d\n", Dia, Mes, Ano);
            }
            else if (Dia >= 10 && Dia <= 12){
                printf ("%d/%d/00%d\n", Dia, Mes, Ano);
            }
        }
    }
    
    //Ano com 3 digitos
    else if ((Ano >= 100 && Ano <= 999)){
        if (Mes >= 1 && Mes <= 9){
            if (Dia >= 1 && Dia <= 9){
                printf ("0%d/0%d/0%d\n", Dia, Mes, Ano);
            }
            else if (Dia >= 10 && Dia <= 12){
                printf ("%d/0%d/0%d\n", Dia, Mes, Ano);
            }
        }
        else if (Mes >= 10 && Mes <= 12){
            if (Dia >= 1 && Dia <= 9){
                printf ("0%d/%d/0%d\n", Dia, Mes, Ano);
            }
            else if (Dia >= 10 && Dia <= 12){
                printf ("%d/%d/0%d\n", Dia, Mes, Ano);
            }
        }
    }
    
    //Ano com 4 digitos ou mais
    else if ((Ano >= 1000)){
        if (Mes >= 1 && Mes <= 9){
            if (Dia >= 1 && Dia <= 9){
                printf ("0%d/0%d/%d\n", Dia, Mes, Ano);
            }
            else if (Dia >= 10 && Dia <= 12){
                printf ("%d/0%d/%d\n", Dia, Mes, Ano);
            }
        }
        else if (Mes >= 10 && Mes <= 12){
            if (Dia >= 1 && Dia <= 9){
                printf ("0%d/%d/%d\n", Dia, Mes, Ano);
            }
            else if (Dia >= 10 && Dia <= 12){
                printf ("%d/%d/%d\n", Dia, Mes, Ano);
            }
        }
    }
    
    switch (Mes){
        case 1:
        printf ("%d de janeiro de %d\n", Dia, Ano);
        break;
        case 2:
        printf ("%d de fevereiro de %d\n", Dia, Ano);
        break;
        case 3:
        printf ("%d de marco de %d\n", Dia, Ano);
        break;
        case 4:
        printf ("%d de abril de %d\n", Dia, Ano);
        break;
        case 5:
        printf ("%d de maio de %d\n", Dia, Ano);
        break;
        case 6:
        printf ("%d de junho de %d\n", Dia, Ano);
        break;
        case 7:
        printf ("%d de julho de %d\n", Dia, Ano);
        break;
        case 8:
        printf ("%d de agosto de %d\n", Dia, Ano);
        break;
        case 9:
        printf ("%d de setembro de %d\n", Dia, Ano);
        break;
        case 10:
        printf ("%d de outubro de %d\n", Dia, Ano);
        break;
        case 11:
        printf ("%d de novembro de %d\n", Dia, Ano);
        break;
        case 12:
        printf ("%d de dezembro de %d\n", Dia, Ano);
        break;
    }
    
    return 0;
}


int main(){
    
    int DD, MM, AAAA, funcao;
    printf ("Escreva o dia:\n");
    scanf ("%d", &DD);
    printf ("Escreva o mes:\n");
    scanf ("%d", &MM);
    printf ("Escreva o ano:\n");
    scanf ("%d", &AAAA);
    funcao = Data (DD, MM, AAAA);
    

    return 0;
}
