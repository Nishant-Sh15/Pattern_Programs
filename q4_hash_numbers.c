// including header files
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

// defining main function
void main(){
    // defining variables 
    // *narr is a pointer which we will be using as a pointer to an array in this programm using dynamic memory allocation
    // temp is variable temporarily store the value of number
    int i,num,*narr,temp,rem,j,k,length;

    // arr is a three dimensional array containing strings which are rows of a number when they are printed
    char arr [10][8][4]={
        {"####","#  #","#  #","#  #","#  #","#  #","#  #","####"},
        {"  # "," ## ","# # ","  # ","  # ","  # ","  # ","####"},
        {"####","   #","   #","   #","####","#   ","#   ","####"},
        {"####","   #","   #","####","   #","   #","   #","####"},
        {"#   ","#   ","#  #","#  #","####","   #","   #","   #"},
        {"####","#   ","#   ","####","   #","   #","   #","####"},
        {"### ","#   ","#   ","####","#  #","#  #","#  #","####"},
        {"####","   #","   #","   #","   #","   #","   #","   #"},
        {"####","#  #","#  #","####","#  #","#  #","#  #","####"},
        {"####","#  #","#  #","####","   #","   #","   #","   #"}};

    // clearing the screen
    clrscr();

    // asking for number i.e num
    printf("enter any number less than five digit");
    
    scanf("%d",&num);

    temp=num;

    // finding lenth of number entered
    for(length=0;temp!=0;length++){
    temp=temp/10;
    }
    if(length==0)
        length=1;
    temp=num;
    rem=temp%10;
    temp=temp/10;

    // forming a one dimensional  array using dynamic memory allocation
    narr= (int*)calloc(length*sizeof(1),sizeof(1));

    // storing each digit of number in number array i.e narr
    for(i=length-1;i>-1;i--){
        narr[i]=rem;
        rem=temp%10;
        temp=temp/10;
    }

    // printing the number entered in form of hash patterns
    for(i=0;i<8;i++){
        for(j=0;j< length;j++){
            for(k=0;k<4;k++){
                printf("%c",arr[narr[j]][i][k]);
            } 
            printf("  ");
        }
        printf("\n");
    }

    // holding the stopping of programm's execution until some key is pressed
    getch();
 
}