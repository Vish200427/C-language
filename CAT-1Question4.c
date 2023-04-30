#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    printf("type?: ");
    char type[20];
    int price;
    int extra;
    scanf("%s",&type);
    
    if(strcmp("Hatchback",type)==0){
        printf("price?: ");
        scanf("%d",&price);
        printf("extra?: ");
        scanf("%d",extra);
        int total;
        total= price+extra;
        printf("%d",total);
        int disc=total*(0.03);
        int gst=(total-disc)*(0.12);
        int net=total-disc+gst;
        printf("Net amt to be paid approximately: %d",net);
    }
    else{
        printf("\nInvalid type");
    }
}
