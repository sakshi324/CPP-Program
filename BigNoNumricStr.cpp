#include<iostream>
#include<algorithm>
#include<iostream>
   using namespace std;

   int main(){

       string s="4987233659";


       sort(s.begin(),s.end(),greater<int>());
       cout<<s<<endl;
       return 0;
   }