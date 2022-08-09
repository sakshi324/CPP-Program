#include<stdio.h>
int main(){
    int marks=0;

    printf("Enter your Marks:");
    scanf("%d",&marks);

    printf("Enter entered marks :%d\n",marks);

    if(marks>60){
        printf("First class");
    }
    else{
        printf("not in first class");
    }



    return 0;
}