#include<iostream>

using namespace std;

bool Sorted(int arr[],int n){

    if(n==1){
        return true;
    }

  bool restArray=Sorted(arr+1,n-1);
  if(arr[0]<=arr[1] && restArray);

  return true;


}

int main(){

  

    int arr[]={1,6,5,7,8,9};

    cout<<Sorted(arr,5);

    return 0;
}