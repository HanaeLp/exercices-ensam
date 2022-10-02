#include <stdio.h>
#include <stdlib.h>

int main()
{
    //les variables
    int i,j,k,x,y,z,h,m,T[4];
    //
    printf("les 4 nombres sont :\n");
    for(i=1;i<=500;i++){
        x=i;
        for(j=1;j<=500;j++){
            y=j;
            for(k=1;k<=500;k++){
                z=k;
                m = x*100 + y*10 + z;
                if(m == pow(x,3) + pow(y,3) + pow(z,3)){
                        for(h=0;h<2;h++){
                            T[h]= m;
                            printf("%d\t",T[h]);
                        }
                }
            }
        }
    }
    return 0;
}
