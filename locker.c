#include <stdio.h>

int main(){
    int chn[7];
    int hav[7], del[7];
    for(int i=0;i<7;i++){
        scanf("%d",&chn[i]);
        hav[i]=chn[i]+5;
        del[i]=chn[i]-8;
    }
    int gan[7];
    for(int j=0;j<7;j++){
        gan[j]=hav[j]-del[j];
        printf("%d,",gan[j]);
    }
}   
