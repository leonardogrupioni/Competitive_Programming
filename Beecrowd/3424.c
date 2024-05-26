#include <stdio.h>

int main(void){
	
	int N = 100000;
	
	scanf("%d", &N);
	
	char s[N];
	char a = 'a';
	
	scanf("%s", &s);
	
	int c = 0;
	
	if(s[0] == a && s[1] == a) c++;
	
	for(int i = 1; i < N-1; i++){
		if(s[i] == a && (s[i+1] == a || s[i-1] == a)) c++;
	}
	if(s[N-1] == a && s[N-2] == a) c++;
	
	printf("%d\n", c);
}