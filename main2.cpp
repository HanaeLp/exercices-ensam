#include <iostream>
#include <stdio.h>

int main() {
	//Les variables
	int NET, TVA;
	double TTC;
	//question 1
	//prendre les variables necessaire
	printf("Donner le prix net de l'article\n");
	scanf("%d",&NET);
	printf("Donner le pourcentage de TVA de l'article\n");
	scanf("%d",&TVA);
	//affichage
	TTC = NET + ((NET*TVA)/100);
	printf("PTTC = PNET + PNET.TVA/100 = %lf\n", TTC);
	printf("*****************************************\n");
	//question 2
	//prendre les variables necessaire
	printf("Donner le le prix TTC de l'article\n");
	scanf("%d",&TTC);
	printf("Donner le pourcentage de TVA de l'article\n");
	scanf("%d",&TVA);
	//affichage
	printf("NET = (TTC.100)/(1 + TVA) = %lf", (TTC*100)/(1 + TVA));
	
	return 0;
}
