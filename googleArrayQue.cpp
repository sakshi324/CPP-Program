#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
 

     int a[n];

  for(int i=0;i<=n;i++){
      cin>>a[i];
  }
  const int N =1e6+2;

  int idx[n];
  for(int i=0;i<=n;i++){
      int [n]=-1;
  }
  int minidx=INT_MAX;

  for(int i=0;i<=n;i++){

      if(a[i]!=-1){
          minidx=min(minidx,a[i]);


      }else{
          idx[a[i]]=i;
      }



  }
  if(minidx==INT_MAX){
      cout<<-1<<endl;
  }
  else{
      cout<<minidx+1<<endl;
  }
  

}


