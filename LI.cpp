#include<iostream>
using namespace std;

bool Check(int iNo){
    
   if((iNo%5==0) &&(iNo%3==0) ){
     return true;
  }
}
     
 int main(){
 
     int iValue=0;
     int iRet=false;
     cin>>iValue;
     iRet=Check(iValue);
   

   if(iRet==true){
       cout<<"Yes";
   }
     else{
         cout<<"None";
     }

     return 0;

   }
 

