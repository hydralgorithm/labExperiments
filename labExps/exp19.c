#include <stdio.h>
#include <math.h>
int main(){
    int n,i,j,x,power,sym=1;
    double fx,sum=0.0;
    scanf("%d",&n);
    scanf("%d",&x);
    for(i=0;i<n;i++){
        power=2*i+1;
        if(i>0){
            if(i%2==0){
                sym=1;
            }
            else{
                sym=-1;
            }
        }
        double fact = 1.0;
        for(j=2;j<=power;j++){
            fact=fact*j;
        }
        fx=(sym*pow((double)x,power))/fact;
        sum+=fx;
    }
    printf("sin(%d) = %.3f",x,sum);
    return 0;
}