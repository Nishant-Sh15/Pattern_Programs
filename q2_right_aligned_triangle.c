// including the header files
#include<stdio.h>
#include<conio.h>

// main function

void main(){
    // defining variables
    //i represent number of times dots have been printed in the line
    // j represent number of times sace have been printed in the line 
    int height,row,i,j;     

    clrscr();

    printf("enter the height of the triangle: ");
    
    //getting height of the triangle

    scanf("%d",&height);

    for(row=1;row<=height;row++){
        for(j=1;j<=height-row;j++)
            printf("  ");
        for(i=1;i<=row;i++)
            printf("* ");
        printf("\n");
    }

    // execution of program ends when some key is pressed
    getch();
}