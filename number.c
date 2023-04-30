#include <stdio.h>
#include <stdlib.h>

int main(){
    long int sum=0;

    for (int i=1000;i<10000;i++){
        sum+=i;
    }
    int l1 = (sizeof(sum)/sizeof(int))*4;
    int r1[l1];
    for (int i=0;i<l1;i++){
        int x = sum%10;
        r1[i] = x;
        sum = sum/10;
    }
    int sum1=0;
    for (int i=0;i<l1;i++){
        sum1+=r1[i];
    }
    int r2[2];
    r2[0] = sum1%10;
    sum1 = sum1/10;
    r2[1] = sum1;
    int r = r2[0]+r2[1];

    if (r%2==0)
        printf("Even Found\n");
    else
        printf("Odd Found\n");
}
