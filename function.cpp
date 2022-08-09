#include<iostream>

using namespace std;
class ApnaCollege{
    public:
    void fun(){

cout<<"I am a Function with no arguments"<<endl;
    }

    void fun(int x){

 cout<<" I am function with int argument"<<endl;
    }
 
 void fun(double x){
 

     cout<<"I am function with double argument"<<endl;
 
 
 }
};
int  main(){
    ApnaCollege obj;
    obj.fun();
    obj.fun(4);
    obj.fun(3.5);

}