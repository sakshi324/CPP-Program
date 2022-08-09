#include<iostream>
#include<set>

using namespace std;
int32_t main(){
    set<int>s;

    s.insert(1);
     s.insert(1);
      s.insert(2);
       s.insert(3);
        s.insert(4);

        for(auto i: s){
            cout<<i<<endl;
        }
        cout<<endl;
        cout<<s.size()<<endl;
        
        s.erase(2);
        cout<<endl;


          for(auto i:s){
            cout<<i<<" ";
            cout<<endl;
     }
}