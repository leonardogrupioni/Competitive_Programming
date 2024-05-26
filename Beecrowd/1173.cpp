#include <iostream>
 
using namespace std;
 
int main() {
 
    int V;
    scanf("%d", &V);
	int N[10];
    N[0] = V;
    printf("N[%d] = %d\n", 0,N[0]);
	for(int i = 1; i < 10; i++){
    	N[i] = N[i-1] * 2;    	
    	printf("N[%d] = %d\n", i,N[i]);
	}
	
	
    return 0;
}