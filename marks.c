#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    int mark;
    int bmark;
}st[25];

int main(){
    for(int i=0;i<25;i++){
        int y; scanf("%d",&y);
        st[i].mark = y;
        int x; scanf("%d",&x);
        st[i].bmark = x+y;
    }
    int am,bam=0;
    for (int i=0;i<25;i++){
        am+=st[i].mark;
    }
    am=am/5;
    for (int i=0;i<25;i++){
        bam+=st[i].bmark;
    }
    bam=bam/5;

    if ((bam-am)>=5)
        printf("Can implement – Significant increase in class average");
    else   
        printf("Need not implement – No significant increase in class average");
}
