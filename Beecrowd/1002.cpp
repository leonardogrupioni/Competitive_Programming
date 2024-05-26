#include <iostream>

int main(void){
	
	double pi = 3.14159;
	double raio, area;
	scanf("%lf", &raio);
	area = pi * (raio * raio);
	printf("A=%.4f\n", area);
}