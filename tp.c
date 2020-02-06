#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){

	int choixDest=0;

	printf("Choisissez votre destination:\nTapez '1' pour vous rendre a Capoue ou tapez '2' pour vous rendre a Athenes \n");
	scanf("%d", &choixDest);
	if (choixDest== 1){
		printf("Felicitation vous venez d'arriver a Capoue\n");
	}
	else if (choixDest==2){
		printf("Felicitation vous venez d'arriver a Athenes\n");
	}

	return 0;
}