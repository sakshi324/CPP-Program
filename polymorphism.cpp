#include"bits/stdc++.h"
using namespace std;

//Function OverLoading
class ApnaCollege
{
    public:
    void fun(){
        cout<<"Sakshi"<<endl;

    }

    void fun(int x){
        cout<<"patil"<<endl;
    }

    void fun(double x){
        cout<<"blahblahblah"<<endl;
    }

};
int32_t main(){
    ApnaCollege obj;
    obj.fun();
    obj.fun(3);
    obj.fun(6.2);
    return 0;
}