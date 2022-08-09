#include<stdio.h>

int sum(int iValue1,int iValue2){
    
    int iAns=0;

    iAns=iValue1+iValue2;


    return iAns;
}

int main(){
   int iNo1=0;
   int iNo2=0;
   int iNo3=0;


   printf("First  ");

   scanf("%d",&iNo1);

   printf("Second  ");

   scanf("%d",&iNo2);

   iNo3=sum(iNo1,iNo2);

   printf("Sum %d",iNo3);

   }