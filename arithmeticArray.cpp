#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }

    int ans=2;
    int pd=a[1]-a[0];
    int j=2;
    int curr=2;
while(j<n){
    if(pd==arr[i]-a[i-1]){
        curr++;
    }

    else{
        pd==a[j]=a[j-1];
        curr=2;
    }

    j++;

}
return 0;
}