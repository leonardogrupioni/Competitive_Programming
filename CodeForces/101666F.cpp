#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> p;

int main() {
  int n, a, b, p1;
  std::cin >> n;
  a = 0; b = 0;
  for(int i = 0; i < n; i++){
    std::cin >> p1;
    p.push_back(p1);
  }
  int aux = 1;
  std::sort(p.begin(), p.end());
  for(int i = (n-1); i >= 0; i--){
    if(aux == 1){
      a = a + p[i];
      aux = 0;
    } else{
      b = b + p[i];
      aux = 1;
    }
  }
  std::cout << a << " " << b << std::endl;
}