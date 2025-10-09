#include <stdio.h>
int main(){
    int n;
    printf("Enter number of terms:\n");
    scanf("%d", &n);
    printf("sin(x) = ");
    for(int i = 0; i < n; i++){
        int power = 2 * i + 1;
        if(i > 0){
            if(i % 2 == 0){
                printf(" + ");
            } else {
                printf(" - ");
            }
        }
        printf("x^%d/%d!", power, power);
    }
    return 0;
}