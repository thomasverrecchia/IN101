// Thomas Verrecchia
// 1A - ENSTA 
// IN101

#include <stdio.h>

int same_sum(int n, int c){

	int sum = 1;

	if (c<0 || c >9){
		printf("ERREUR: Chiffre non valide \n");
		return -1;	
	}

	if (n<0){
		printf("ERREUR: Entier non valide \n");
		return -1;	
	}

	while(sum*c < n){

		sum += 1;

	}
	return sum;
}

int main(){

	int n = 100;
	int c = 5;

	printf("%d \n", same_sum(n,c));


}