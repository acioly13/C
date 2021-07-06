#include <stdio.h>

int main(){
    float p,m;
    char e[8]="excesso";

    printf("Infoeme o peso dos peixes: ");
    scanf("%f", &p);

    if(p > 50){
        m = (p - 50 ) * 4.00;
        printf("Voce devera pagar R$ %.2f em multas", m);
    }else{
        m = 0;
        e[0] = 0;
        printf("Multas: %2f\n",m);
        printf("Excesso: %d", e[0]);

    }
}
