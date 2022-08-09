#include<iostream>
using namespace std;
int main(){

    int n1,n2;
    cout<<"Enter the Numbers  :" ;
    cin>>n1>>n2;

    char op;
    cout<<"Enter a Oprator: ";
    cin>>op;
   

   switch (op)
   {
   case '+':
   cout<<n1+n2<<endl;
       break;

       case '-':
       cout<<n1-n2<<endl;
        break;
       case '*':
       cout<<n1*n2<<endl;
    break;
       case '%':
       cout<<n1%n2<<endl;
  break;
       case '/':
       cout<<n1/n2<<endl;
   break;
   default:
       break;
   }


}