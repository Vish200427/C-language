#include <stdio.h>
#include <stdlib.h>

int x=2;

int pow(int n){
    if (n>0)
        return x*pow(n-1);
    else
        return 1;
}

int main(){
    int n,r;
    scanf("%d",&n);
    if (n>5)
        printf("Enter n less than or equal to 5");
    else if(n>0 && n<=5)
        r = pow(n);
    printf("The answer is %d",r);
}
