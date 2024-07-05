// including header files
#include <stdio.h>
#include<conio.h>
#include<stdlib.h>


// defining main function
void main(){
    // defining variables
    int n,flag=0,**arr,rmin,cmin,r,c,rmax,cmax,i;
    
    // clearing the screen
    clrscr();
    
    // asking for the number
    printf("enter a number");

    // storing the number in variable "n"
    scanf("%d",&n);
    
    // configuiring the initial values of minimum and maximum row and column
    rmin=0;
    cmin=0;
    rmax=n-1;
    cmax=n-1;
    
    // creating a pointer for two dimensional array of size required n*n natural numbers
    arr=(int**)calloc(n*sizeof(1),sizeof(n));
    
    // storing values of each one dimensional array 
    for(i=0;i<n;i++)
        *(arr+i)=(int*)calloc(n*sizeof(1),sizeof(1));
    
    i=1;
    
    
    while(1){
        for(r=rmin,c=cmin;c<=cmax;c++,i++){
            *(*(arr+r)+c)=i;
            if(i>=n*n){
                flag=1;
                break;
            }
        }
        
        i--;
        
        if(flag==1)
            break;
        
        
        for(r=rmin,c=cmax;r<=rmax;r++,i++){
            *(*(arr+r)+c)=i;
            if(i>=n*n){
                flag=1;
                break;
            }
        }
        
        i--;
        
        if(flag==1)
            break;
            
        for(r=rmax,c=cmax;c>=cmin;c--,i++){
            *(*(arr+r)+c)=i;
            if(i>=n*n){
                flag=1;
                break;
            }
        }
        
        i--;
        
        if(flag==1)
            break;
            
        for(r=rmax,c=cmin;r>rmin;r--,i++){
            *(*(arr+r)+c)=i;
            if(i>=n*n){
                flag=1;
                break;
            }
        }
        
        if(flag==1)
            break;
         
        // updating values of minimum and maximum value of rows and columns after a complete cycle   
        rmin++;
        cmin++;
        rmax--;
        cmax--;
        
        
    }
    
    // printing the nuber square stored in the array
    for(r=0;r<n;r++){
        for(c=0;c<n;c++)
            printf("%5d  ",*(*(arr+r)+c));
        printf("\n");
    }
    
    // preventing the execution from stopping  until a key is pressed
    getch();

}
