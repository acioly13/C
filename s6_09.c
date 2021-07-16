#include <stdio.h>

int main(){
    // Declaração
    float nivel_poluicao;

    // Entrada
    printf("Digite o nivel de poluição: ");
    scanf("%f", &nivel_poluicao);

    // Processamento
    if((nivel_poluicao >= 0.3) && (nivel_poluicao < 0.4)){
        printf("Grupo 1 suspender atividades");
    }
    if((nivel_poluicao >= 0.4) && (nivel_poluicao < 0.5)){
        printf("Grupo 1 e 2 suspender atividades");
    }
    if(nivel_poluicao >= 0.5){
        printf("Todos os grupos suspender atividades");
    }
    if(nivel_poluicao < 0.3){
        printf("Niveis aceitaveis");
    }
}

