#include<stdio.h>

int summ(int iNo){
    

    if(iNo<0){
        iNo=-iNo;
    }
    
   int sum=0;
    for(int iCnt=1;iCnt<=iNo;iCnt++){

       sum=iCnt+sum;
 }
     return sum;
    
}
 int main(){
     int n=0;
     int iRet;
     scanf("%d",&n);
     iRet=summ(n);
    printf("%d",iRet);

       
       return 0;

   }
 

