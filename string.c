#include <stdio.h>
#include <string.h>

int main(){
    char str[256]={0};
    scanf("%s",&str);
    printf("Length of the string is: %d\n",strlen(str));
    int a[256]={0};
    for(int i=0;i<strlen(str);i++){
        a[str[i]]++;
    }
    int w=0,c=0;
    for(int i=0;i<256;i++){
        if(a[i]!=0){
            w++;
        }
        if(a[i]>1){
            c++;
        }
    }
    printf("Word frequency is: %d\n",w);
    if(c==0){
        printf("No repeated characters found in string.\n");
    }
    for(int i=0;i<strlen(str);i++){
        if(a[str[i]]>1){
            printf("First repeated character is: %c\n",str[i]);
            break;
        }
    }
    for(int i=0;i<strlen(str);i++){
        if(a[str[i]]==1){
            printf("First non-repeated character is: %c\n",str[i]);
            break;
        }
    }

    return 0;
}
