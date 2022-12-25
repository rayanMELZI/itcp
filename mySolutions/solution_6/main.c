#include <stdio.h>
#include <stdlib.h>

int linearSearch(int T[],int len,int el){
    int indexEl;
    int i;
    for(i=0;i<len;i=i+1){
        if(T[i]==el){
            return i;
        }
    }
    return -1;
}

int main(){
    int T[5];
    for(int i=0;i<5;i++){
        printf("donner T[%d]",i);
        scanf("%d",&T[i]);
    }

    if (linearSearch(T,5,2)==-1){
        printf("not found");
    }else{
        printf("index is %d",linearSearch(T,5,2));
    }
    return 0;
}
