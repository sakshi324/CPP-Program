#include<iostream>
using namespace std;

int jweler(int d){

    switch (d){

        case 1:
        cout<<"1000";
        break;

         case 11:
        cout<<"2000";
        break;

         case 12:
        cout<<"3000";
        break;


         case 15:
        cout<<"4000";
        break;
    

    default:
      cout<<"Invalid";

    }


}

int main(){

    int sValue=0;

    cin>>sValue;

    jweler(sValue);

    return 0;


}