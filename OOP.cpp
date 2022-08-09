#include<iostream>
using namespace std;

class student{
    
    public:
    string name;
    int age;
    bool gender;
      
      student(string s,int a,int g){
      cout<<"Parametrized Constructor "<<endl;
       name =s;
       age=a;
       gender=g;
     }

   void printInfo(){
    cout<<"Name=";
    cout<<name<<endl;
    cout<<"age=";
    cout<<age<<endl;
    cout<<"Gender=";
    cout<<gender<<endl;
}

   bool operator==(student &a){
     if(name==a.name && age==a.age && gender==a.gender){
       return true;
     }
     return false;
      }
   };

int main(){
    student a("sak ",22,1);
  
    student b=a;

   
     if(b==a){
    cout<<"Same"<<endl;
   }
  else{
    cout<<"Not Same"<<endl;
   }
   
  return 0;
}