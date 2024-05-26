#include <iostream>

int main(void){
	
	int i, f, h;
	scanf("%d", &i);
	scanf("%d", &f);
	h = (24 - i + f); 
	if(h > 24) h = h%24;
	printf("O JOGO DUROU %d HORA(S)\n",h);
}