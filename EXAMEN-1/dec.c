// Thomas Verrecchia
// 1A - ENSTA 
// IN101


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


bool dec(char* valeur){

	bool output;
	int i,longeur;


	output = true;
	

	// gestion des entier négatifs

	if(valeur[0]=='-'){
		longeur = strlen(valeur);

		for (i=1;i<longeur-1;i++){
		if(valeur[i] != valeur[i+1] + 1){
			output = false;
			return output;
		}
	}

	}else{
		longeur = strlen(valeur);

		for (i=0;i<longeur-1;i++){
		if(valeur[i] != valeur[i+1] + 1){
			output = false;
			return output;
		}
	  }
	}

	

return output;

}



int main(int argc, char* argv[]){

	bool resultat;

	resultat = dec(argv[1]);

	if(resultat == true){
		printf("Ok \n");
	}else{
		printf("Ko \n");
	}


	return 0;
}