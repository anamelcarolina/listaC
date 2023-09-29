#include <stdio.h>

int main() {

    int ano;
    printf("Digite um valor entre 1800 e 2022: ");
    scanf("%d", &ano);

    if (ano < 1896) {
        printf("Não houve Jogos Olímpicos de Verão ou Copa do Mundo no ano %d.\n", ano);
    } else {
        if (ano < 1914 || (ano >= 1914 && ano <= 1918) || (ano >= 1939 && ano <= 1945)) {
            printf("O ano %d foi um ano de guerra, e não houve Jogos Olímpicos de Verão ou Copa do Mundo.\n", ano);
        } else {
            if (ano < 1930) {
                if (ano % 4 == 0)
                    printf("Os Jogos Olímpicos de Verão ocorreram no ano %d.\n", ano);
                else
                    printf("Não houve Jogos Olímpicos de Verão ou Copa do Mundo no ano %d.\n", ano);
            } else {
                if (ano % 4 == 0)
                    printf("Os Jogos Olímpicos de Verão ocorreram no ano %d.\n", ano);
                else {
                    if ((ano + 2) % 4 == 0)
                        printf("A Copa do Mundo de Futebol ocorreu no ano %d.\n", ano);
                    else
                        printf("Não houve Jogos Olímpicos de Verão ou Copa do Mundo no ano %d.\n", ano);
                }
            }
        }
    }
    return 0;
}

