#include<iostream>
using namespace std;

class Demo{

int i;
public:
int x;
private:
int y;
public:
Demo()
{
    x=10;
    y=20;
    i=30;
}
void gun(){
    cout<<"INside fun";
    cout<<y;

    fun();
}
private:

    void fun(){
        cout<<"Inside gun";
    }
};

int main(){

Demo obj;

  obj.x;
 //obj.y;
 // obj.i;



}



