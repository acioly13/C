#include <stdio.h>
#include <string.h>
int main(void){
    char senha[10], nome[10];
    printf("Digite seu usuario: ");
    fgets(nome,10, stdin);
    printf("Digite sua senha: ");
    fgets(senha,10,stdin);

    while(!strcmp(nome, senha)){
        printf("Usuario e Senha não podem ser iguais\n");
        printf("Digite seu usuario: ");
        fgets(nome,10, stdin);
        printf("Digite sua senha: ");
        fgets(senha,10,stdin);
    }


}