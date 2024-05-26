#include <iostream>
#include <cmath>

int main(void){
	
	int N, LA, LB, SA, SB;
	scanf("%d", &N);
	scanf("%d", &LA);
	scanf("%d", &LB);
	scanf("%d", &SA);
	scanf("%d", &SB);
	if(LA <= N && N <= LB && SA <= N && N <= SB) printf("possivel\n");
	else printf("impossivel\n");
	
}