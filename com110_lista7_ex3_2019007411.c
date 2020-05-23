#include<stdio.h>
#include<stdlib.h>
#define NL 4
#define NC 7

int main(){
	
	float mat[NL][NC];
	float menor, minmax;
	int i=0, j=0, mi=0, mj=0;
	
	printf("Insira uma matriz: \n");
	for(i=0; i<NL; i++){
		for(j=0; j<NC; j++){
			printf("Elemento[%d][%d]: ", i, j);
			scanf("%f", &mat[i][j]);
		}
	}
	printf("\n");
	
	for(i=0; i<NL; i++){
		for(j=0; j<NC; j++){
			printf("%.2f ", mat[i][j]);
		}
		printf("\n");
	}
	
	menor=mat[0][0];
	for(i=0; i<NL; i++){
		for(j=0; j<NC; j++){
			if(menor > mat[i][j]){
				menor = mat[i][j];
				mi=i;
			}
		}
	}
	
	minmax = mat[mi][0];
	for(j=1; j<NC; j++){
		if(minmax < mat[mi][j]){
			minmax = mat[mi][j];
			mj=j;
		}
	}
	
	printf("\n");
	printf("Menor= %.2f\n", menor);
	printf("Minmax = %.2f\n", minmax);
	printf("Minmax fica na linha[%d] coluna[%d]", mi, mj);
	
	
	printf("\n");
	system("pause");
	return 0;
}
