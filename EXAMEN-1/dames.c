// Thomas Verrecchia
// 1A - ENSTA 
// IN101


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Q1.1

// 1 : On commence par récupérer les données du fichier et le stocker dans un tableau de taille y. Chaque élément du tableau 
//	   est un tableau de taille x représentant les lignes.
// 2 : On récupère la postion de départ.
// 3 : On identifie les prochaines positions possibles.
// 4 : On séléctionne au hasard la prochaine postion et on réitère l'opération jusqu'a arrive en bas ou jusqu'a ce que plus
//	   aucune position ne soit possible. Si telle est le cas on remonte à la position précèdente et on choisit une autre 
//	   direction et ainsi de suite 
// 5 : On retourne le résultat et si besoin le nombre d'étape

// Q1.2 : voir question 1.1

// Q1.3 : Ne sait pas


void dames(char* fname){

/* Créeons dans un premier temps une matrice représentant en mémoire les données du fichier */

	int read, taille_damier,i,j,nb_max;
	int** damier;
	char* ligne;

	// Ouverture du fichier
	FILE* fichier = fopen(fname,"r");
	if(fichier==NULL){
		printf("ERREUR : Le fichier n'a pas pu être ouvert \n");
		return ;
	}

	// Récupération de la taille du damier
	read = fscanf(fichier,"%d",&taille_damier);

	if(read!=1 || taille_damier<=2){
		printf("ERREUR. Taille du damier non conforme\n");
		fclose(fichier);
		return;
	}

	// Création du damier
	damier = malloc(taille_damier*sizeof(*damier));

	// On alloue les N lignes du damier
	for(i=0;i<taille_damier;i++){
		damier[i]=malloc(taille_damier*sizeof(int));
	}

	// On alloue la taille d'une ligne
	ligne=malloc(sizeof(char*));

	// On complète le damier avec des 0 pour les "." et des 1 pour les "X".
	
	for(i=0;i<taille_damier;i++){
		
		fscanf(fichier,"%s",ligne);

		for(j=0;j<taille_damier;j++){

			if(ligne[j] == '.'){
				damier[i][j] = 0;
			}else{
				damier[i][j] = 1;
			}			
		}
		
	}

	for(int k = 0;k <taille_damier;k++){
		for(int l = 0; l<taille_damier;l++){
			printf("%d |",damier[k][l]);
		}
		printf("\n");
	}
	printf("\n");

	
	fclose(fichier);


/* Il s'agit maintenant de trouver si un chemin est possible pour relier le point de départ du camp d'en face. Nous ne 
chercherons pas le plus court pour l'instant */


	nb_max = 100;


	free(ligne);
	free(damier);
	
}

int main(int argc, char *argv[]){

	remplissage_damier(argv[1]);

	return 0;
}