#include<iostream>
#include<algorithm>
#include<iostream>

using namespace std;

int main(){

    string s1="nincompoop";


      
    cout<<s1.length()<<endl;
     for(int i=0;i<s1.length();i++){

        cout<<s1[i]<<endl;
    }

    //when we write leng nthot size then also it acsses
    // that using when we iterate our code 
    //add 2 in string using int 
    string s=s1.substr(6,4);
    cout<<s<<endl;

    string s2="786";
    int x=stoi(s2);     //stoi function use for int and string combination
    cout<<x+2<<endl;
     
    //0r
    int x2=786;

    cout<<to_string(x2)+"2"<<endl;


    //soting String

    string s3="xcmnmvzcxmfas";

      reverse(s3.begin(),s3.end());

      cout<<s3<<endl;


    s1.insert(2,"lol");//insert

    cout<<s1<<endl;



  cout<<s1.find("com")<<endl;//find

    s1.erase(3,3);
    cout<<s1<<endl;
    return 0;
}