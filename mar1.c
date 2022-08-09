#include<stdio.h>

int main(){
    auto int iStd=0;

    printf("Enter your Standard");
    scanf("%d",&iStd);

    if(iStd==1){
        printf("Exam is At 9\n");
    }
        
    else if(iStd==2){
        printf("Exam is At 10\n");

    }  
    else if(iStd==3){
        printf("Exam is At 11\n");
    }
        
    else if(iStd==4){
        printf("Exam is At 12\n");
    }
        
    else if(iStd==5){
        printf("Exam is At 1\n");

    }
    else{
        printf("invalid Standard\n");
    }
    return 0;

}
