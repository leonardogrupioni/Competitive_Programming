#include <iostream>
 
using namespace std;
 
int main() {
 
    int N = 100;
    scanf("%d", &N);
	int X[N], Y[N];
    int result = 0;
    for(int i = 0; i < N; i++){
    	scanf("%d", &X[i]);
		scanf("%d", &Y[i]);	
	}
	for(int i = 0; i < N; i++){	
		if(X[i] % 2 == 0){
    		X[i] = X[i] + 1;
		}
		result = X[i];
		for(int j = 1; j < Y[i]; j++){
			X[i] = X[i] + 2;
			result = result + X[i];
		}
		printf("%d\n", result);
	}
	
    return 0;
}