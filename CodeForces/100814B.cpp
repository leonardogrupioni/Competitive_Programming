#include <iostream>
int main(){
  int t;
  std::cin >> t;
  while(t > 0){
    int q = 100, m = 100;
    std::cin >> q >> m;
    char al, af;
    int alR, afR;

    int M[4][q];
    for(int i = 0; i < 4; i++){
      for(int j = 0; j < q; j++){
        M[i][j] = -1;
      }
    }

    int quest = 0;
    for(int i = 0; i < (q*m); i++){
      std::cin >> al >> af;
      if(al == 'A') alR = 0;
      else if(al == 'B') alR = 1;
      else if(al == 'C') alR = 2;
      else alR = 3;
      if(af == 'T') afR = 1;
      else afR = 0;
      M[alR][quest] = afR;
      quest++;
      if(quest == q) quest = 0;
    }
    for(int i = 0; i < q; i++){
      if(M[0][i] == 1) std::cout << "A";
      else if(M[1][i] == 1) std::cout << "B";
      else if(M[2][i] == 1) std::cout << "C";
      else if(M[3][i] == 1) std::cout << "D";
      else if(M[0][i] == 0 && M[1][i] == 0 && M[2][i] == 0) std::cout << "D";
      else if(M[0][i] == 0 && M[1][i] == 0 && M[3][i] == 0) std::cout << "C";
      else if(M[0][i] == 0 && M[2][i] == 0 && M[3][i] == 0) std::cout << "B";
      else if(M[1][i] == 0 && M[2][i] == 0 && M[3][i] == 0) std::cout << "A";
      else std::cout << "?";
      if(q == 1 || i == q-1) std::cout << std::endl;
      else std::cout << " ";
    }
    t--;
  }
}