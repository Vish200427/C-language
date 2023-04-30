#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int fun(int n){
    if(n==0){
        return 0;
    }
    else{
        return fact(n)/n +fun(n-1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fun(n));
}
