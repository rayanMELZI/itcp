#include <stdio.h>
#include <stdlib.h>

int main()
{
    char S[50];
    int I;
    printf("give you string \n");
    scanf("%s",S);

    I=atoi(S);

    if(I==0){
        printf("Bad String");
    }else{
        printf("the integer of this string is %d",I);
    }

    return 0;
}
