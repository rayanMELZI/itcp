#include <stdio.h>
#include <stdlib.h>

typedef struct maillon{
    int val;
    maillon* suiv;
};
typedef struct maillon *liste;

liste linkedList(liste l){
    liste *q;
    q=l;
    while(l->suiv!=NULL){
        if(l->val==l->suiv->val){
        l=l->siuv;
        free(q);
        q=l;
        }else{
            l=l->siuv;
        }
    }
    return l;
}

int main()
{
    liste l,q,r;
    l=(liste)malloc(sizeof(struct maillon));
    l->val=1;

    q=(liste)malloc(sizeof(struct maillon));
    q->val=1;
    l->suiv=q;

    q=(liste)malloc(sizeof(struct maillon));
    q->val=2;
    l->suiv=q;

    q=(liste)malloc(sizeof(struct maillon));
    q->val=2;
    l->suiv=q;

    q=(liste)malloc(sizeof(struct maillon));
    q->val=3;
    l->suiv=NULL;

    r=linkedList(l);

    for(int i=0;i<5;i++){
        printf("%d",l->val)
        l=l->suiv;
    }

    return 0;
}
