// Thomas Verrecchia
// 1A - ENSTA 
// IN101

#include <stdio.h>
#include <string.h>



char nth(char* chaine, int pos){

	if (pos < 0 || pos >= strlen(chaine)){

		printf("ERREUR : Position non valide \n");
		return '0';

	}else{

	return chaine[pos];
	}	
}


int main(){

	char* chaine = "Bonjour";
	int pos = 10;
	printf("%c \n",nth(chaine,pos));

}