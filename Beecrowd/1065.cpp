#include <iostream>
#include <cmath>

int main(void){
	
	int n[5];
	int c = 0;
	for(int i = 0;  i < 5; i++){
		scanf("%d",&n[i]);
		if(n[i] % 2 == 0)c++;
	}
	printf("%d valores pares\n", c);
	
}