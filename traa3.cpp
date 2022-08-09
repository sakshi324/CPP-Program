#include<iostream>
using namespace std;

voidmerge(int arr[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
      for(int i=0;i<n2;i++){
        a[i]=arr[l+i];
    }

    int i=0;
    int j=0;
    int k=l;

    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++; i++;

        }

        else{
            arr[k]=b[j];
            k++;j++;
        }
   }   

   while (i<n1){
       arr[k]=a[i];
       k++; i++;
   }
    while (i<n2){
       arr[k]=b[j];
       k++; j++;
   }

}
void mergesort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
    
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
}   
int main(){
    int arr[]={5,4,3,2,1};
    mergeSort(arr,0,4);
    for (int i=0;i<5;i++){
        cout<<arr[i]<<"";
    }
    cout<<endl;

    
return 0;
}

/*#include <iostream>
using namespace std;
class A{
    public:
    int a;
    void funcA(){
        cout<<"func A\n";
    }
    private:
    int b;
    void funcB(){
        cout<<"func B\n";

    }
    protected:
    int c;
    void funcC(){
        cout<<"func c\n";
    }

};

int main(){
    A obj;
    obj.funcA();
}*/





