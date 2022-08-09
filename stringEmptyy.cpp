#include<iostream>
#include<string>
using namespace std;
int main(){

    string str="abc";
    cout<<str<<endl;

    str.clear();

    if(str.empty())//(!str.empty())then the compiler gives a input was is"String is naot Empty"when we declare the sentence down
    cout<<"String is Empty";


    return 0;
}