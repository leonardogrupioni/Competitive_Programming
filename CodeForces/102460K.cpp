#include <iostream>
#include <queue>
#include <vector>


int main() {
  int T;
  std::cin >> T;
  while(T--){
    int n, p;
    std::cin >> n;
    
    //declaração fila de prioridade:
    std::priority_queue<int, std::vector<int>, std::greater<int> > fila;
    
    for(int i = 1; i <= n; i++){
      std::cin >> p;
      fila.push(p);
    }
    
    int soma = 0, a, b, ab;
    
    while(!fila.empty()){ //enquanto fila tiver itens faz:
      a = fila.top(); //pega o primeiro item da fila
      fila.pop(); //tira o primeiro item da fila
      if(fila.empty()) break; //se fila for vazia, sai do loop
      b = fila.top(); //pega o segundo item da fila
      fila.pop(); //tira o segundo item da fila
      ab = a + b; //soma a + b
      soma = soma + ab; //adciona a + b na soma total
      fila.push(ab); //adiciona na fila o primeiro e segundo item somados
    }

    std::cout << soma << std::endl;
  }
