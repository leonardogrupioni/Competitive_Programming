#include <iostream>
#include <cmath>

int main(void){
	
	double a,b,c,r1,r2;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	
	double delta = pow(b,2) - 4.0 * a * c;
	
	if(delta > 0 && a != 0){
		r1 = ( -b + (double)sqrt(delta) ) / (2*a);
		r2 = ( -b - (double)sqrt(delta) ) / (2*a);
		printf("R1 = %.5f\n", r1);
		printf("R2 = %.5f\n", r2);	
	} else printf("Impossivel calcular\n");
	
}