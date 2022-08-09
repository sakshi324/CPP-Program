#include<iostream>
using namespace std;

void toh(int n,int src,int dest,int helper){

    if(n==0){
        return ;

    }
    toh(n-1,src,helper,dest);
        cout<<src<<dest<<endl;
        toh(n-1,helper,dest,src);
      
    }


int main(){


toh(3,'a','c','b');
return 0;
}


