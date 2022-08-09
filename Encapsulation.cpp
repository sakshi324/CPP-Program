#include<iostream>
using namespace std;
class A{
    public:
    int a;
    void funcA(){
        cout<<"func A\n";
    }
    private:
    int b;
    void funcB(){
        cout<<"func B\n";

    }
    protected:
    int c;
    void funcC(){
        cout<<"Func C/n";

    }
};

int main(){
    A obj;
    obj.funcA();
     obj.funcB();

}