#include<iostream>

using namespace std;

int firstocr(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstocr(arr,n,i+1,key);

}

int lastocr(int arr[],int n,int i,int key){

     if(i==n){
        return -1;
    }
   int restArray=lastocr(arr,n,i+1,key);
       if(restArray!=-1){
        return restArray;
      }
   

  if(arr[i]==key){
      return i;
  }

  return -1;
}

int main(){
    int arr[]={1,2,3,2,4,2,7};
     cout<<firstocr(arr,6,0,2)<<endl;
      cout<<lastocr(arr,6,0,2)<<endl;


     return 0;
}