#include <stdio.h>
 
int main() {
 
    int n = 100;
    while(scanf("%d", &n) != EOF){
        if(n == 0) printf("vai ter copa!\n"); 
        else printf("vai ter duas!\n");
    }
    
    return 0;
}