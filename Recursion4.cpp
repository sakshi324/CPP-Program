#include<iostream>
using namespace std;
  

void dec(int n){
    

    if(n==0){
    cout<<" ";
        return ;
    }
    

    cout<<n<<endl;
   dec(n-1);
    
}

void inc(int n){

    if(n==0){
   cout<<endl;
        return ;
    }
    inc(n-1);

    cout<<n<<endl;
}


int main(){
    int n;

    cin>>n;

    dec(n);
    inc(n);
    return 0;
  }
