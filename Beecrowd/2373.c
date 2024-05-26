#include <stdio.h>
 
int main() {
 
    int n,a,b,soma=0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        scanf("%d", &b);
        if(a > b) soma += b;
    }
    printf("%d\n",soma);
    return 0;
}