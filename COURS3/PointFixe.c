// Thomas Verrecchia
// 1A - ENSTA 
// IN101


#include <stdio.h>

int fixpt(int* tab, int size_tab){

	int i;

	for(i=0; i< size_tab; i++){
		if(tab[i] == i){
			return i;
		}
	}

	return -1;
}


int main(){
	int tab[5] = {5,0,0,3,0};

	printf("%d \n", fixpt(tab,5));
}