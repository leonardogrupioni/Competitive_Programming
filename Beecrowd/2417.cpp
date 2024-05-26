#include <iostream>
 
using namespace std;
 
int main() {
 
    int Cv, Ce, Cs, Fv, Fe, Fs;
    scanf("%d", &Cv);
	scanf("%d", &Ce);
	scanf("%d", &Cs);
	scanf("%d", &Fv);
	scanf("%d", &Fe);
	scanf("%d", &Fs);	
	
	int Pc = Cv*3+Ce*1;
	int Pf = Fv*3+Fe*1;
	
	if(Pc > Pf) printf("C\n");
	else if(Pf > Pc) printf("F\n");
	else if(Pc == Pf && Cs > Fs) printf("C\n");
	else if(Pc == Pf && Fs > Cs) printf("F\n");
	else printf("=\n");
	
    return 0;
}