#include<stdio.h>
#include<conio.h>

void main(){
    int height,row=1,nspace,nstar,i;

    clrscr();

    printf("enter height of butterfly : ");
    scanf("%d",&height);

    nspace=height-2;
    while(nspace>-1){
        for(i=1;i<=(height-nspace)/2;i++)
            printf("* ");
        for(i=1;i<=nspace;i++)
            printf("  ");
        for(i=1;i<=(height-nspace+1)/2;i++)
            printf("* ");
        printf("\n");
        if(nspace==1)
            nspace-=1;
        else
            nspace-=2;
        
    }
    if(height%2 != 0)
        nspace=1;
    else
        nspace=0;

    while(nspace<=height-2){
        
        for(i=1;i<=(height-nspace)/2;i++)
            printf("* ");
        for(i=1;i<=nspace;i++)
            printf("  ");
        for(i=1;i<=(height-nspace)/2;i++)
            printf("* ");
        printf("\n");
        nspace+=2;

    }
    getch();
}