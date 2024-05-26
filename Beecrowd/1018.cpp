#include <iostream>
 
using namespace std;
 
int main() {
 
 	int n, qtd;
 	do{
 		scanf("%d",&n);			
	} while(n < 0 || n > 1000000);
	
	int notas[] = {100,50,20,10,5,2,1};
	
	printf("%d\n",n);
	
	for(int i = 0; i < 7; i++){
		qtd = 0;
		qtd = n / notas[i];
		n = n - qtd*notas[i];
		printf("%d nota(s) de R$ %d,00\n", qtd, notas[i]);
	}	
    return 0;
}