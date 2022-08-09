#include<iostream>
#include<algorithm>
#include<iostream>

using namespace std;

int main(){
      string str="adsfjhlksdjf";

      //convert uppercase

      for(int i=0;i<str.size();i++){     //because of small 'a' was before a capital 'A'
          if(str[i]>='a'&& str[i]<='z'){

          str[i]-=32;
      }
      }
   cout<<str<<"\n";


   //convert to lower case

   for(int i=0;i<str.size();i++){
       if(str[i]>='A'&& str[i]<='z'){
           str[i]+=32;
       }
   }

   cout<<str;
   return 0;

}