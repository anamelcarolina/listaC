#include <stdio.h>

int main(){

    long valor, constValor;
    long soma = 0;
    printf("Insira um valor positivo entre 0 e 1.000.000.000: ");
    scanf("%ld", &valor);
    constValor = valor;
    if (valor == 0){
        printf("%ld eh par\n", valor);
        printf("A soma dos algarismos de %ld eh igual a %ld\n", valor, valor);
    } else {
        if (valor%2 == 0){
            printf("%ld eh par\n", valor);
        } else {
            printf("%ld eh impar\n", valor);
        }
    while(valor > 0){
            soma += valor % 10;
            valor = (valor/10);
        } 
    printf("A soma dos algarismos de %ld eh %ld\n", constValor, soma);
    }
    return 0;
}

