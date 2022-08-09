
#include<stdio.h>
int main(){

      auto int iStd=0;

    printf("Enter your Standard");
    scanf("%d",&iStd);
        switch (iStd)
        {
        
        case 1:
        printf("Exam is At 9\n");
        break;
        
        case 2:
        printf("Exam is At 10\n");
    
         break;
        case 3:
        printf("Exam is At 11\n");
         break;
        case 4:
        printf("Exam is At 12\n");
        break;
        
        case 5:
        printf("Exam is At 1\n");
        break;
       
       default:
        printf("invalid Standard\n");
        }
    return 0;

}


