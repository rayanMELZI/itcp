#include <stdio.h>
#include <stdlib.h>

void Arrays(int *a,int n,int *b,int m){
    int x,i,j;
    for(i=0;i<n;i++){
        if(*(a+i)>*b){
            x=*b;
            *b=*(a+i);
            *(a+i)=x;
        }
    }
    for(i=0;i<m;i++){
        if(*(b+i)>*b){
            j=i;
        }
    }
    x = *b;
    for(i=1;i<j;i++){
        *(b+i-1)=*(b+i);
    }
    *(b+j-1)=x;
}

int main()
{
    int a[3],b[3];
    for(int i=0;i<3;i++){
        printf("donner a[%d]",i);
        printf("donner b[%d]",i);
        scanf("%d%d",&a[i],&b[i]);
    }
    Arrays(a,3,b,3);

    for(int i=0;i<3;i++){
        printf("a[%d]=%d",i,a[i]);
        printf("b[%d]=%d",i,b[i]);
    }

    return 0;
}
