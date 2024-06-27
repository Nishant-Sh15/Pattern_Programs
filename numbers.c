#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int i,num,*narr,temp,rem,j,k,length;
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

    clrscr();

    printf("enter any number less than five digit");
    scanf("%d",&num);
    temp=num;
    for(length=0;temp!=0;length++){
    temp=temp/10;
    }
    if(length==0)
        length=1;
    temp=num;
    rem=temp%10;
    temp=temp/10;

    narr= (int*)calloc(length*sizeof(1),sizeof(1));

    for(i=length-1;i>-1;i--){
        narr[i]=rem;
        rem=temp%10;
        temp=temp/10;
    }

    for(i=0;i<8;i++){
        for(j=0;j< length;j++){
            for(k=0;k<4;k++){
                printf("%c",arr[narr[j]][i][k]);
            } 
            printf("  ");
        }
        printf("\n");
    }

    getch();

    

}