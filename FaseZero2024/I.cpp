#include <iostream> //WA (5%)?
#include <set>


int main(void) {
  int n, m;
  std::cin >> n >> m;
  char c[1001];
  std::cin >> c;
  int total = n*m;
  int soma = 0;
  int j = 0;
  int colar = 0;
  std::set<int> s;
  std::set<int>::iterator it;
  for(int i=0;i<total;i++){
    if(c[i] == '1') soma++;
    j = i+1;
    if(j % m == 0) {
      it = s.find(soma);
      if(it!=s.end()) {
        colar = 1;
        break;
      }
      s.insert(soma);
      soma = 0;
    }
  }

  if(colar == 0) std::cout << "S" << std::endl;
  else std::cout << "N" << std::endl;
  return 0;
}