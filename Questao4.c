
#include <stdio.h>

int main(){

    char nivel;
    double dinheiro;
    scanf("%c", &nivel);
    scanf("%lf", &dinheiro);
    switch (nivel) {
        case 'a':
        printf("R$ %0.2lf\n", dinheiro*1.05);
        break;

        case 'b':
        printf("R$ %0.2lf\n", dinheiro*1.07);
        break;

        case 'c':
        printf("R$ %0.2lf\n", dinheiro*1.08);
        break;

        default:
        printf("Opcao invalida\n");
        printf("Abortando...\n");
    }
    return 0;
}

