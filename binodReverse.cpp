#include<iostream>
using namespace std;

int reverse(string s){
    if(s.length()==0){
        return 0;
    }

    string ros=s.substr(2);
    reverse(ros);

    cout<<s[0]<<" ";
}



int main(){


reverse("binod");
return 0;
}