#include <iostream>
#include <cmath>

int main(void){
	
	int ih,im, fh,fm, h,m;
	scanf("%d", &ih);
	scanf("%d", &im);
	scanf("%d", &fh);
	scanf("%d", &fm);
	im = im + ih * 60;
	fm = fm + fh * 60;
	m = 1440 - im + fm;
	if(m > 1440) m = m%1440;
	h = m/60;
	m = m - h*60;
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
}