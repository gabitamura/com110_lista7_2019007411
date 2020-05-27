#include<stdio.h>
#include<stdlib.h>
#define NL 5
#define NC 7

int main(){
	
	int m[NL][NC];
	int i=0, j=0;
	int sela, mi=0, mj=0;
	int maior, menor;
	
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
	
	maior = m[0][0];
	menor = m[0][0];
	for(i=0; i<NL; i++){
		for(j=0; j<NC; j++){
			if(m[i][j] > maior && m[i][j] < menor){
				sela = m[i][j];
				mi=i; 
				mj=j;
			}
		}
	}
	
	if(sela!=0){
		printf("\nPonto de sela = %d", sela);
		printf("\nPonto de sela se encontra na linha[%d] e coluna[%d]", mi, mj);
	}
	else{
		printf("A matriz nao tem ponto de sela.");
	}
	
	
	printf("\n\n");
	system("pause");
	return 0;
}
