#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int>s;
      s.insert(10);
    s.insert(30);
    s.insert(50);
    s.insert(70);

    cout<<*s.lower_bound(10)<<endl;
       cout<<*s.lower_bound(30)<<endl;
          cout<<*s.upper_bound(50)<<endl;
             cout<<(s.upper_bound(70)==s.end())<<endl;

             
}

