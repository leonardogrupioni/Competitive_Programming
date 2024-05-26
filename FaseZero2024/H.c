#include <stdio.h> //WA (5%) Faltou para n > 1000

int primos[] = {2,   3,   5,   7,   11,  13,  17,  19,  23,  29,  31,  37,  41,
                43,  47,  53,  59,  61,  67,  71,  73,  79,  83,  89,  97,  101,
                103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167,
                173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239,
                241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313,
                317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397,
                401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467,
                479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569,
                571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643,
                647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733,
                739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823,
                827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911,
                919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997};

int ePrimo(int);

int main() {
  long long n;
  int metade, resp, total, T;
  scanf("%lld", &n);
  // 168 primos

  for (long long i = 0; i < n; i++) {
    scanf("%d", &T);
    if(T < 1000){
    metade = T / 2;
    resp = metade;
    total = 0;
    int fim = 1;
    do {
      if (ePrimo(resp) == 1)
        resp--;
      else {
        total = T - resp;
        if (ePrimo(total) == 1)
          resp--;
        else
          fim = 0;
      }
      if (resp <= 0)
        fim = -1;
    } while (fim > 0);

    if (fim == -1)
      printf("-1\n");
    else
      printf("%d %d\n", resp, total);
    } else printf("-1\n");
  }
}

int ePrimo(int n) { //buscaBinaria
  int esquerda = 0;
  int direita = 167;
  int meio;
  while (esquerda <= direita) {
    meio = (direita + esquerda) / 2;
    if (primos[meio] == n)
      return 1;
    if (primos[meio] < n)
      esquerda = meio + 1;
    else
      direita = meio - 1;
  }
  return 0;
}