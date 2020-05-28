#include<stdio.h>
#include<stdlib.h>
#define NL 3
#define NC 3

int main(){
	
	int m[NL][NC];
	int i=0, j=0;
	int sela=0, mi=0, mj=0;
	int min[NL], max[NC];
	
	printf("Insira uma matriz: \n");
	for(i=0; i<NL; i++){
		for(j=0; j<NC; j++){
			printf("Elemento[%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0; i<NL; i++){
		for(j=0; j<NC; j++){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0; i<NL; i++){
		min[i]=m[0][0];
		for(j=0; j<NC; j++){
			if(min[i] > m[i][j]){
				min[i] = m[i][j];
			}
		}
	}
	printf("\n");
	for(i=0; i<NL; i++){
		printf("Menor da linha %d = %d\n", i, min[i]);
	}
	
	for(j=0; j<NC; j++){
		max[j]=m[0][0];
		for(i=0; i<NL; i++){
			if(max[j] < m[i][j]){
				max[j] = m[i][j];
			}
		}
	}
	printf("\n");
	for(j=0; j<NC; j++){
		printf("Maior da coluna %d = %d\n", j, max[j]);
	}
	
	for(i=0; i<NL; i++){
		for(j=0; j<NC; j++){
			if(min[i] = max[j]){
				sela = min[i];
				mi=i;
				mj=j;
			}
		}
	}
	
	

	printf("\nPonto de sela = %d", sela);
	printf("\nPonto de sela se encontra na linha[%d] e coluna[%d]", mi, mj);
	
	
	printf("\n\n");
	system("pause");
	return 0;
}
