#include <stdio.h>

int main(){

    int senha, outraSenha;
    scanf("%d", &senha);
    printf("senha cadastrada: %d\n", senha);
    scanf("%d", &outraSenha);
    
    while (senha != outraSenha){
         printf("senha invalida!\n");
         scanf("%d", &outraSenha);
    }
    printf("senha valida!\n");
    return 0;
}
