
#include<stdio.h>
#include<conio.h>

void main(){
    int num;
    
    clrscr();
    
    printf("enter a number\t");
    
    scanf("%d",&num);
    
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++)
            printf("*  ");
        printf("\n");
    }
    
    getch();
}