#include <iostream>
#include <stdio.h>

int main() {
	//les variables
	int A,B,C,a;
	//Demende de trois entiers
	printf("Donner trois nombres entreies : \n");
	scanf("%d%d%d",&A,&B,&C);
	//affichage des resultats avant
	printf("Les valeurs avant : A = %d, B = %d, C = %d\n",A, B, C);
	//methode de par permetation
	 a=A;
	 A=C;
	 C=B;
	 B=a;
	//affichage des resultats apres
	printf("Les valeurs apres : A = %d, B = %d, C = %d\n",A, B, C);
	return 0;
}
