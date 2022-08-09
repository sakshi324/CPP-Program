#include<iostream>

using namespace std;

int diff(int n,int m){

    int i=0;int sum1=0,sum2=0;

    for(int i=0;i<m;i++){
        if(i%n==0){
            sum1=sum1+i;
        }

        else{
            sum2=sum2+i;
        }
    }

    return sum2-sum1;
}

int main(){
int n,m;

cin>>n>>m;

cout<<diff(n,m);

return 0;

}