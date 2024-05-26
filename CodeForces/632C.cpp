#include <iostream>
#include <cstring>
#include <algorithm>

/*
for(int i = 0; i < n; i++){
  for(int j = 0; j < n; j++){
    if( (S[i] + S[j]) < (S[j] + S[i])) {
      std::string temp = S[i];
      S[i] = S[j];
      S[j] = temp;
    }
  }
}
*/bool test(std::string s1, std::string s2){ return (s1 + s2) < (s2 + s1);}

int main() {
  int n = 50001;

  std::cin >> n;

  std::string S[n];
  
  for (int i = 0; i < n; i++){
    std::cin >> S[i];
  }

  std::sort(S, S + n, test);
  
  for(int i = 0; i < n; i++){
    std::cout << S[i];
  }
  std::cout << std::endl;
  
}
