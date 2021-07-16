# include <stdio.h>


int main(){
    int n1;
    printf("Digite um numero: ");
    scanf("%d", &n1);

    if(n1%2 == 0){
        printf("O %d é par", n1);
        if(n1 > 0){
            printf("\nO %d é positivo", n1);
        }else{
            printf("\nO %d é negativo", n1);
        }
    }else{
        printf("O %d é impar",n1);
        if(n1 > 0){
            printf("\nO %dé positivo", n1);
        }else{
            printf("\nO %d é negativo", n1);
        }
    }

}

