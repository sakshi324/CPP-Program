#include<iostream>
using namespace std;

float DisplayClass(float fNo){

     if((fNo>=0.0)&&(fNo<35.0)){
      cout<<"Fail\n ";
    }
      else if((fNo>=35.0)&&(fNo<50.0)){
      cout<<"Pass class\n";
    }
     else if((fNo>=50.0)&&(fNo<60.0)){
      cout<<"Second Class Pass\n";
    }
     else if((fNo>=60.0)&&(fNo<70.0)){
      cout<<"First Class Pass ";
    }
     else if((fNo>=70.0)&&(fNo<=100.0)){
          cout<<"First Class With Distinction Pass\n ";
}

  else{
      cout<<"Invaild Marks";
  }
            
}
   int main(){
   float fValue=0.0;

   cout<<"Enter the Percentage"<<endl;
   cin>>fValue;
   
   DisplayClass(fValue);

  

 return 0;
}