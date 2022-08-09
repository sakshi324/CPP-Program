#include<iostream>
#include<set>

using namespace std;
//custom comparator
int main(){
    set<int,greater<int>>s;
      s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);

  for(auto i: s){
      cout<<i<<" ";
  }
  cout<<endl;

}