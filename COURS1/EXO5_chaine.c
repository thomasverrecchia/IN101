// Thomas Verrecchia
// 1A - ENSTA 
// IN101

#include <stdio.h>
#include <string.h>


char* changed_digit(char* c){

	int i;
	int compteur=0;
	int len =strlen(c);


	if (c[0]=='+'){	

		for (i=0;i<len;i++){
			if (c[i] == '9'){
				compteur +=1;
			}
		}

		if (compteur == len -2){
			return "vrai";
		}else{
			return "faux";
		}


	}else{
		for (i=0;i<len;i++){
			if (c[i] == '0'){
				compteur +=1;
			}
		}

		if (compteur == len -2){
			return "vrai";
		}else{
			return "faux";
		}
	}

}

int main(){

	char* c = "-11";

	printf("%s \n",changed_digit(c));

}