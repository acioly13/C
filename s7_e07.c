#include <stdio.h>
int main(void){
    //variaveis
    int contador_t=0, contador_s1=0, contador_s2=0, contador_s3=0, contador_s4=0, identificacao, defeito;

    //Entradas
    printf("Informe a identificação: ");
    scanf("%d", &identificacao);

    while(identificacao != 0){
        printf("1)Necessita de esfera \n");
        printf("2)Necessita de limpeza \n");
        printf("3)Necessita de troca de cabo ou conector \n");
        printf("4)Quebrado ou inutilizadfo \n");
        printf("Informe o tipo de defeito: \n");
        scanf("%d", &defeito);

        //Processamento
        if(defeito == 1){
            contador_s1 = contador_s1 + 1;
        }
        if(defeito == 2){
            contador_s2 = contador_s2 +1;
        }
        if(defeito == 3){
            contador_s3 = contador_s3 +1;
        }
        if(defeito == 4){
            contador_s4 = contador_s4 +1;
        }
        contador_t = contador_t + 1;
        //Entradas
        printf("Informe a identificação: ");
        scanf("%d", &identificacao);
    }
    float p1,p2,p3,p4;
    p1=((float)contador_s1 / (float)contador_t * 100.0);
    p2=((float)contador_s2 / (float)contador_t * 100.0);
    p3=((float)contador_s3 / (float)contador_t * 100.0);
    p4=((float)contador_s4 / (float)contador_t * 100.0);
    printf("Quantidade de Mouses %d\n", contador_t);
    printf("Situação \t\t\t\t\t\t\tQuantidade \tPercentual\n");
    printf("1-Necessita de esfera \t\t\t\t\t%d \t\t%.2f%%\n", contador_s1, p1 );
    printf("1-Necessita de limpeza \t\t\t\t\t%d \t\t%.2f%%\n", contador_s2, p2 );
    printf("1-Necessita de troca de cabo/conector \t\t%d \t%.2f%%\n", contador_s3, p3 );
    printf("1-Quebrado ou inutilizado \t\t\t\t%d \t\t%.2f%%\n", contador_s4, p4 );

}