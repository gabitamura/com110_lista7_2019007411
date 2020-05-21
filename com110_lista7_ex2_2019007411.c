#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int mat[8][8];
	int i=0, j=0;

	for(i=0; i<8; i++){
		for(j=0; j<8; j++){
			printf("Digite a matriz[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}	
	
	printf("\n");

	if(mat[i][j] = mat[j][i]){
		printf("Matriz simetrica!\n");
	}
	else{
		printf("Matriz NAO simetrica!\n");
	}
	
	printf("\n");
	system("pause");
	return 0;
}
