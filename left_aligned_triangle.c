// including the header files
#include<stdio.h>
#include<conio.h>

// main function

void main(){
    // defining variables
    //i represent number of times dots have been printed in the line
    
    int height,row=1,i;     

    clrscr();

    printf("enter the height of the triangle: ");
    
    //getting height of the triangle

    scanf("%d",&height);

    for(row;row<=height;row++){
        for(i=1;i<=row;i++)
            printf("* ");
        printf("\n");
    }

    // delaying the stoping of execution until some key is pressed
    getch();
}