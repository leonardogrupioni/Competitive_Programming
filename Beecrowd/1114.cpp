#include <iostream>
 
using namespace std;
 
int main() {
 
    int sinal = 0;
    int senha;
    while(sinal == 0){
        scanf("%d", &senha);
        if(senha != 2002) printf("Senha Invalida\n");
        else sinal = 1;
    }
    printf("Acesso Permitido\n"); 
    return 0;
}