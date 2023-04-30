#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[256];
    fgets(str,256,stdin);
    int i=0;
    str[0]=toupper(str[0]);
    int c=0;
    while(str[i]!=' '){
        c++;
        i++;
    }
    for(c+1;c<strlen(str);c++){
        str[c]=toupper(str[c]);
    }
    printf("%s\n",str);
    printf("%d",strlen(str));

    return 0;
}
