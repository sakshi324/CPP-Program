#include<stdio.h>
int main(){
    
    int iAge=0;

    printf("Enter your age:");
    scanf("%d",&iAge);

   
  if(iAge>0 && iAge<10){
        printf("Ticket 100 :%d",iAge);b bv
    }
    else if(iAge>=10 && iAge<40){
        printf("Ticket 400 :%d",iAge);
    }
        else if(iAge>40){
            printf("Ticket 300 :%d",iAge);
        }

    
   return 0;
}