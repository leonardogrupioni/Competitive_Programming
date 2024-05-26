#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int a, b, c, d, t1, t2, dif;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    t1 = a + d;
    t2 = b + c;

    dif = abs(t1 - t2);
    
    printf("%d\n",dif);
 
    return 0;
}