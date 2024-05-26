#include <iostream>
 
using namespace std;
 
int main() {
 
    int N[100];
    int maior = 0;
    int pos = 0;
    for(int i = 0; i < 100; i++){
    	scanf("%d", &N[i]);	
		if(N[i] > maior){
			maior = N[i];
			pos = i+1;
		}
	}
    
    printf("%d\n%d\n", maior, pos);
	
    return 0;
}