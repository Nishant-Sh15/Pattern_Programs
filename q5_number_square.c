#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){
    int n,flag=0,**arr,rmin,cmin,r,c,rmax,cmax,i;
    
    clrscr();
    
    printf("enter a number");
    
    scanf("%d",&n);
    
    rmin=0;
    cmin=0;
    rmax=n-1;
    cmax=n-1;
    
    arr=(int**)calloc(n*sizeof(1),sizeof(n));
    
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
            
        rmin++;
        cmin++;
        rmax--;
        cmax--;
        
        
    }
    
    for(r=0;r<n;r++){
        for(c=0;c<n;c++)
            printf("%5d  ",*(*(arr+r)+c));
        printf("\n");
    }
    
    getch();

}
