#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){

    string s="abhinav";

    transform(s.begin(),s.end(),s.begin() ,::toupper);

cout<<s<<endl;

transform(s.begin(),s.end(),s.begin(),::tolower);

cout<<s<<endl;

return 0;



  
 




}