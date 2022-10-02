#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//les variables
	int a,b;
	char F;
	//boucle pour la refaire d'operation
	do{
		//demende deux nbs entiers
		printf("Donner deux nombres entiers : \n");
		scanf("%d%d",&a,&b);
		//verifier que b defferente que 0
		while(b == 0){
			printf("****************************\n");
			printf("La division sur zero est impossible, s'il vous plait donner un autre nombre defferente que 0 \n");
			scanf("%d",&b);
		}
		//le quotient
		printf("Le quotient de la division entiere de %d et %d est : %d\n", a,b, a/b);
		//le reste
		printf("Le reste de la division entiere de %d et %d est : %d\n", a,b, a%b);
		//fin de operation
		do{
			printf("\nSi vous voullez refaire une autre operation clique sur Y, si non clique sur Q\n");
		    scanf("%s",&F);
		}while(F!= 'Y' && F!= 'Q');
	}while(F == 'Y');
	exit(0);
	return 0;
}
