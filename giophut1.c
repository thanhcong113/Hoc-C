#include <stdio.h>
#include <stdlib.h>
void giophut(int *gio,int *phut);
void giophut(int *gio,int *phut){
*gio=*phut/60;
*phut=*phut%60;
}
int main()
{
    int gio=0,phut=90;
    giophut(&gio,&phut);
    printf("%d gio %d phut",gio,phut);
    return 0;
}
