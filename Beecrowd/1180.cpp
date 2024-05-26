#include <iostream>
#include <cmath>

int main(void){
	
	
	int n=1000;
	
	do{
		scanf("%d", &n);
	} while(n < 1 || n > 1000);
	
	int X[n];

	int menor = 10000;
	int pos = 0;
	for(int i = 0; i < n; i++){
		scanf("%d",&X[i]);
		if(X[i] < menor){
			menor = X[i];
			pos = i; 
		}
	}
	printf("Menor valor: %d\n",menor);
	printf("Posicao: %d\n",pos);
	
}