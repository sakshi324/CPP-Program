#include <iostream>
using namespace std;

//virtualFunction

class base{
    public:
    void print(){
        cout<<"this base"<<endl;
    }
    void display(){
        cout<<"this is base 2"<<endl;
    }
};

class derived:public base{
  public:
  void print(){
  cout<<"this is derived"<<endl;

}
  void display(){
      cout<<"this is derived 2"<<endl;
  }

};
int main(){
    base *baseptr;
    derived d;
    baseptr=&d;

   baseptr -> print();

   baseptr ->display();
   return 0;

}