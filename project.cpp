#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void pesquisaMatriz(int mat[4][4]){
	int x, i, j;
	printf("O elemento encontrado na posição na matriz é: ");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(mat[i][j]==x){
				printf("%d,%d",i,j);	
			}	
		}
	}
	
}

int main(int argc, char *argv[]) {

	int mat[4][4];
	int i,j;
	int x;
	
	printf("O array fornecido na forma de matriz é:\n");
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			scanf("%d",&mat[i][j]);
		}
	}

	printf("O valor fornecido para a pesquisa é: ");
	scanf("%d",&x);
	 pesquisaMatriz( mat);
	

	printf("\n");	

	system("pause");
	
	return 0;
}


