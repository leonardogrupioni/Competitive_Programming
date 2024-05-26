#include <iostream>
#include <string.h>
 
using namespace std;
 
int main() {
 
    int n = 1000001;
    scanf("%d", &n);
    int l = 100;
    char s[50];
    int hash = 0;
    int sTam = 0;
    
    for(int i = 0; i < n; i++){
        scanf("%d", &l);
        hash = 0;
        for(int j = 0; j < l; j++){
            scanf("%s", &s);
            sTam = strlen(s);
            for(int k = 0; k < sTam; k++){
                hash = hash + (s[k] - 65) + j + k;
            }
        }
        printf("%d\n", hash);
    }
    
 
    return 0;
}