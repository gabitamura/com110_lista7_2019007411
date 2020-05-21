#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int mat[2][2];
	int maior=mat[0][0];
	int i=0, j=0; 
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("Digite a matriz[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			if(maior < mat[i][j]){
				maior = mat[i][j];
			}
		}
	}
	
	printf("\n");		
	printf("Maior elemento = %d", maior);
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			
		}
	}
	
	printf("\n");	
	printf("\n");	
	printf("Matriz multiplicada pelo seu maior elemento: \n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d ", (mat[i][j])*maior);
		}
		printf("\n");
	}
	
printf("\n");
system("pause");	
return 0;	
}
