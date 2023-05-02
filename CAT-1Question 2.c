#include <stdio.h>
#include <string.h>

int main()
{
    char str[256]={0};
    
    int upper=0,lower=0,special=0,spaces=0,digits=0;
    
    gets(str);
    
    for(int i=0; str[i] != '\0'; i++){
        if(str[i]>='A' && str[i]<='Z') {
            upper++;
        }
        else if(str[i]>='a' && str[i]<='z') { 
            lower++;
        }
        else if(str[i]==' '){
            spaces++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            digits++;
        }
        else{
            special++;
        }
    }
    printf("\nUpper case letters: %d",upper);
    printf("\nLower case letters: %d",lower);
    printf("\ndigits: %d",digits);
    printf("\nSpecial characters: %d",special);
    printf("\nspaces %d",spaces);
    
    return 0;
}
