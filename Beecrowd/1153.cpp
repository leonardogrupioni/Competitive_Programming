#include <iostream>
 
using namespace std;
 
int main() {
 
    int n = 1; 
    scanf("%d", &n);
    
	int fat = 1;
    for(int i = 1; i <= n; i++){
        fat = fat * i;
    }
    printf("%d\n", fat);
 
    return 0;
}