#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n+1];

    cin>>arr;

     
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            check =0;
            break;
        }
    }



}