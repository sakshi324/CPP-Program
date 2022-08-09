#include<iostream>
#include<set>

using namespace std;
int main(){
multiset<int> s;
 s.insert(1);
 s.insert(3);

 s.insert(3);

 s.insert(3);

 s.insert(1);

  s.insert(1);

for(auto i: s){
      cout<<i<<" ";
}cout<<endl;
     s.erase(3);

     //or for only one int erase for

     s.erase(s.find(1));
     cout<<endl;

     for(auto i: s){
      cout<<i<<" ";
     }
     cout<<endl;

      }



