#include <iostream>

int main() {
  int n;
  std::cin >> n;
  if(n == 2 || n == 6 || n == 10)std::cout << "Odd" << std::endl; //impar
  else if(n == 4 || n == 8)std::cout << "Even" << std::endl; //par)
  else std::cout << "Either" << std::endl; //ambos
  return 0;
}