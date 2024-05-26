#include <iostream>
 
using namespace std;
 
int main() {
 
    double n1,n2,n3,n4;
    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);
    scanf("%lf", &n4);
    double media = (n1*2+n2*3+n3*4+n4)/10;
    printf("Media: %.1f\n", media);
    if(media >= 7) printf("Aluno aprovado.\n");
    else if(media < 5) printf("Aluno reprovado.\n");
    else{
        printf("Aluno em exame.\n");
        double nE;
        scanf("%lf", &nE);
        printf("Nota do exame: %.1f\n", nE);
                
        media = (media + nE) /2;
        
        if (media >= 5) printf("Aluno aprovado.\n");    
        else printf("Aluno reprovado.\n");
        
        printf("Media final: %.1f\n", media);
    }
    
    return 0;
}