#include<bits/stdc++.h>

int main(){
	int n = 1000000;
	
	std::cin >> n;
	
	int x[n+1], y[n+1];
	
	for(int i = 0; i < n; i++){
		std::cin >> x[i] >> y[i];
	}
	
	std::sort(x, x+n);
	std::sort(y, y+n);
	
	std::cout << x[(n-1)/2] << " " << y[(n-1)/2] << std::endl;	
}