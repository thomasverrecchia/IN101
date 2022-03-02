// Thomas Verrecchia
// 1A - ENSTA 
// IN101


#include <stdio.h>
#include <stdlib.h>


// Création d'une fonction retournant un tableau comportant l'ensemble des positions finales acceptables 
// à partir d'une position initale donnée. 


void conforme(int* pos_init,int* valid_i,int* valid_j){

		int i,j,k,indice;

		i = pos_init[0];
		j = pos_init[1];
		indice = 0;

		k = 0;

		while(i + k <= 7 && j + k <= 7){
			valid_i[indice] = i+k;
			valid_j[indice]= j+k;

			k++;
			indice++;
					
		}

		

		k = 0;

		while(i + k <= 7 && j - k >=0 ){
			valid_i[indice] = i+k;
			valid_j[indice]= j-k;
			k++;
			indice++;
			
			
		}

		k = 0;

		while(i - k >= 0 && j + k <= 7){
			valid_i[indice] = i-k;
			valid_j[indice]= j+k;
			k++;
			indice++;
			
			
		}

		k=0;

		while(i - k >= 0 && j - k >= 0){
			valid_i[indice] = i-k;
			valid_j[indice]= j-k;
			k++;
			indice++;
			
			
		}

}


int affichage(int* pos_init, int* pos_final,int* valid_i,int* valid_j){

	int i;

	conforme(pos_init,valid_i,valid_j);

	for(i=0;i<16;i++){
		//printf("\n i = %d \n j = %d \n", acept[i][0],acept[i][1]);
		if (valid_i[i] == pos_final[0] && valid_j[i] == pos_final[1]){
			printf("La position est acceptable \n");
			return 0;
		}

	}

	printf("La position n'est pas acceptable\n");
	return 0;
}


int main(){

	int* valid_i = malloc(sizeof(int)*20);
	int* valid_j = malloc(sizeof(int)*20);

	int pos_init[2] = {5,4};
	int pos_final[2] = {6,2};

	affichage(pos_init,pos_final,valid_i,valid_j);

	
}