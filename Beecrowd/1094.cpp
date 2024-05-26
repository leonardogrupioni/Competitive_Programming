#include <iostream>
 
using namespace std;
 
int main() {
 
    double s = 0, r = 0, c = 0;
    int n;
    scanf("%d", &n);
    n = n * 4;
    char tipo;
    double qtd;
    
    
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            scanf("%lf", &qtd);
        } else if(i % 2 != 0){
            scanf("%c", &tipo);
            if(tipo == 83) s = s+qtd;
            else if(tipo == 82) r = r+qtd;
            else if(tipo == 67) c = c + qtd;
        }
    }
    
    double total = s + c + r;
    double tC = c/total * 100.0;
    double tR = r/total * 100.0;
    double tS = s/total * 100.0;
    
    printf("Total: %.0f cobaias\n", total);
    printf("Total de coelhos: %.0f\n", c);
    printf("Total de ratos: %.0f\n", r);
    printf("Total de sapos: %.0f\n", s);
    printf("Percentual de coelhos: %.2f %%\n", tC);
    printf("Percentual de ratos: %.2f %%\n", tR);
    printf("Percentual de sapos: %.2f %%\n", tS);
    
    
    
    return 0;
}