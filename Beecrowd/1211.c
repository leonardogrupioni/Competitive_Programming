#include <stdio.h>
#include <cstring>
#include <stdlib.h>

typedef struct numeros{
    char num[201];
}numeros;
              
int ordem(const void *a, const void *b)
{
    numeros *ia = (numeros *)a; 
    numeros *ib = (numeros *)b;
    return strcmp(ia->num, ib->num);
}  
              
int main(){
    int n = 100001;
    int cont;
    numeros comp;
    
    while(scanf("%d",&n) != EOF){
        numeros array[n];
        cont = 0;
        for(int i = 0; i < n; i++){
            scanf("%s",&array[i].num);
        }
        qsort(array,n,sizeof(numeros),ordem);
        comp = array[0];
        for(int i = 1; i < n; i++){
            for(int j = 0; j < strlen(array[i].num); j++){
                  if(comp.num[0] != array[i].num[0]){
                             comp = array[i];
                             break;
                  }else if(comp.num[j] == array[i].num[j]) cont++;
                  else{
                    comp = array[i];
                    break;
                  }
            }
        }
        printf("%d\n",cont);
    }
    return 0;
}