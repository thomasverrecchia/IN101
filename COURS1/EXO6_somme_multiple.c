// Thomas Verrecchia
// 1A - ENSTA 
// IN101

#include <stdio.h>
#include <string.h>


int somme(int x, int y){
	int somme = 0;
	int i ;

	for(i=x; i<=y; i++){

		if(i%5==0 && i%2!=0){
			somme += i;
			
		}
	}

	return somme;
}


int main(){

	int x = -10;
	int y = 10;

	printf("%d \n",somme(x,y) );

}