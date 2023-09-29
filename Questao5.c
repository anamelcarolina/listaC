#include <stdio.h>

int main() {
    long a, b;
    printf("Digite um valor positivo entre 0 e 1.000.000.000: ");
    scanf("%ld", &a);
    printf("Digite outro valor positivo entre 0 e 1.000.000.000: ");
    scanf("%ld", &b);
    
    if (a == b) {
        printf("Os valores lidos são iguais\n");
    } else if (a > b) {
        printf("%ld é maior que %ld\n", a, b);
        if (a % b == 0) {
            printf("%ld é um múltiplo de %ld\n", a, b);
        } else {
            printf("%ld não é um múltiplo de %ld\n", a, b);
        }
    } else {
        printf("%ld é maior que %ld\n", b, a);
        if (b % a == 0) {
            printf("%ld é um múltiplo de %ld\n", b, a);
        } else {
            printf("%ld não é um múltiplo de %ld\n", b, a);
        }
    }
    return 0;
}
