#include <iostream>
 
using namespace std;
 
int main() {
 
 	int N, s, m, h;
 	scanf("%d",&N);
 	h = N / 3600; //60 * 60
	m = N / 60 - h * 60;
	s = N % 60; 
 	
 	printf("%d:%d:%d\n", h,m,s);
 	
    return 0;
}