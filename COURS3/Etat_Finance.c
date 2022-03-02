// Thomas Verrecchia
// 1A - ENSTA 
// IN101


#include <stdio.h>
#include <stdlib.h>




int main(){

	FILE* fichier = NULL;

	//int nb_personne;
	char* nom;

	fichier = fopen("bill.txt","r");

	//fscanf(fichier,"%d",&nb_personne);

	//int* personne = malloc(sizeof(char)*nb_personne);
	//int* solde = malloc(sizeof(int)*nb_personne);


	fscanf(fichier,"%s", nom);
	printf("%s \n", nom);
	

	
}