#include <stdio.h>
#include <stdlib.h>

int main()
{
    //les variables
    float a,b,c,delta,x1,x2;
    char F;
    //boucle pour la refaire d'operation
	do{
        //demende des valeurs
        printf("Donner la valeur de a :\n");
        scanf("%f",&a);
        printf("Donner la valeur de b :\n");
        scanf("%f",&b);
        printf("Donner la valeur de c :\n");
        scanf("%f",&c);
        //calcule de dela
        delta = pow(b,2) - 4*a*c;
        printf("Le discriminant de cette equation est : %f\n", delta);
        //les racines
        if(delta > 0)
        {
            x1 = (-b - sqrt(delta))/2*a;
            x2 = (-b + sqrt(delta))/2*a;
            printf("Le nombre des solutions est : 2\nX1 = %f\tX2 = %f\n",x1,x2);
        }
        else if (delta < 0)
        {
            printf("les solutions de ce equation est depends à des nombres complexe :\n");
        }
        else
        {
            x1 = -b/2*a;
            printf("Le nombre des solutions est : 1\nX1 = %f\n",x1);
        }
        //fin de operation
		do{
			printf("\nSi vous voullez refaire une autre operation clique sur Y, si non clique sur Q\n");
		    scanf("%s",&F);
		}while(F!= 'Y' && F!= 'Q');
	}while(F == 'Y');
	exit(0);
    return 0;
}
