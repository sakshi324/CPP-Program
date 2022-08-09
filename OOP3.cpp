#include<iostream>
using namespace std;

class student{
    
    public:
    string name;
    int age;
    bool gender;

     student(){
      cout<<"Default Constructor "<<endl;
    }//Default Constructor

     student(string s,int a,int g){

      
      cout<<"Parametrized Constructor "<<endl;
       name =s;
       age=a;
       gender=g;
     }

   student(student &a){
      cout<<"Copy Constructor "<<endl;
      name=a.name;
      age=a.age;
      gender=a.gender;
    }//Copy Constructor

    ~student(){
      cout<<"Destructor called"<<endl;
    }//Destructor constructor
   
   void printInfo(){
    cout<<"Name=";
    cout<<name<<endl;
    cout<<"age=";
    cout<<age<<endl;
    cout<<"Gender=";
    cout<<gender<<endl;
}
};  

int main(){
   student a("uvi",20,1);
     a.printInfo();
    student b=a;
    a.printInfo();
    student c;
   ;

   
   
  return 0;
}