#include<iostream>
using namespace std;
  

  int factorial(int n){

      if(n==0){
          return 1;
      }
     
     int prevfact=factorial(n-1);//Recursion 
     return n*prevfact;  //or  return n*factorial(n-1); to niglate upper line
  }

  int main(){

      int n;
      cin>>n;
       cout<<factorial(n);

       return 0;
  }
     