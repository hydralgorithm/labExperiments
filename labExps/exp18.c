#include <stdio.h>
int main(){
    int n,i,j,num=1;
    printf("Enter size for floyd's triangle: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",num++);
        }
        printf("\n");
    }
    return 0;
}