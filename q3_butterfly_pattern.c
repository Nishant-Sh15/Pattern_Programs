//adding header files
#include<stdio.h>
#include<conio.h>

// main function 

void main(){
    // defining variables
    int height,row=1,nspace,i;     //nspace represents number of times space will be printed in a row

    clrscr();

    printf("enter height of butterfly : ");

    // getting value of height i.e number of rows the butterfly will be containing
    scanf("%d",&height);

    nspace=height-2;

    // upper half of butterfly
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

    // resetting value of nspace based the fact that whether height is an even number or odd
    if(height%2 != 0)
        nspace=1;
    else
        nspace=0;

    // lower half of the butterfly
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
    // delaying the stoping of execution until some key is pressed
    getch();
}