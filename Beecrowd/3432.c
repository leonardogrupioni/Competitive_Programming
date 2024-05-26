#include <stdio.h>
 
int main() {
 
    int i = 0;
    int sinal = 1;
    int n;
    while(i < 8 && sinal != 0){
        scanf("%d", &n);
        if(n != 0 && n != 1) sinal = 0;
        i++;
    }
    if(sinal == 0) printf("F\n");
    else printf("S\n");
    return 0;
}