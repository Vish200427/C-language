#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int w;
int fun(int arr[],int size){
    if(size==1){
        
        return w; 
    }
    else{
        int mid=size/2;
        int barr[mid];
        for(int i=0;i<mid;i++){
            barr[i]=arr[i];
        }
        w++;
        return fun(barr,mid);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,7,8,4,4,4,6,7,6,6,6};
    fun(arr,17);
    printf("number of iterations to reach base condition: %d",w);
}
