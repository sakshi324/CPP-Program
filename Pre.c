#include<stdio.h>

int SumFactors(int iNo){

int iSum=0;
int iCnt=0;

for(iCnt=1;iCnt<=iNo;iCnt++){
    if(iNo%iCnt==0){
     iSum=iSum+iCnt;
}
}
return iSum;
}


int main(){

   int iValue1=0;
    int bRet=0;

    printf("Enter the Number\n");
    scanf("%d",&iValue1);

    bRet=SumFactors(iValue1);
        printf("Number is%d",bRet);
        return 0;
    
}