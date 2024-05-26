#include<bits/stdc++.h>

int main(void){
    int n = 1000,q;
    while(std::cin >> n >> q){
        int v[n+1];

        for(int i = 1; i <= n; i++){
            std::cin >> v[i];    
        }

        std::sort(v+1,v+n+1, std::greater<int>() );

        for(int i = 0; i < q; i++){
            int c = 0;
            std::cin >> c;
            std::cout << v[c] << std::endl;
        }

    }
    return 0;
}