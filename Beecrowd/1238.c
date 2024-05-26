#include <stdio.h>
#include <stdlib.h>

int main() {
 
    int N = 100;
    scanf("%d", &N);
    char s1[N][50], s2[N][50];
    for(int i = 0; i < N; i++){
		fflush(stdin);
		scanf("%s", &s1[i]);
    	fflush(stdin);
		scanf("%s", &s2[i]);
	}
	char s[N][100];
	int j, k;
	int l = 0;
	for(int i = 0; i < N; i++){
		k = 0;
		j = 0;
		while(s1[i][j] != '\0' && s2[i][j] != '\0'){
			s[l][k] = s1[i][j];
			k++;
			s[l][k] = s2[i][j];
			j++;
			k++;
		}
		if(s1[i][j] == '\0'){
			while(s2[i][j] != '\0'){
				s[l][k] = s2[i][j];
				k++; j++;
			}
		} else if(s2[i][j] == '\0'){
			while(s1[i][j] != '\0'){
				s[l][k] = s1[i][j];
				k++; j++;
			}
		}
		for(int m = 0; m < k; m++){
			printf("%c", s[l][m]);
		}
		l++;
		printf("\n");
	}
    return 0;
}