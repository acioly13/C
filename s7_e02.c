#include <stdio.h>
int main(void){
    //Declaraçao
    int i;
    //Processamento
    for (i=1; i <= 100; i++){
        printf("\n%d",i);
        if(i%10 == 0){
            printf("\nÉ multiplo de 10: %d", i);
        }
    }
    return 0;
}
