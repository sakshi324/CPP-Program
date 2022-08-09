/*1.c++
#include <iostream>
int main() {
    std::cout<<"Hello World! ";
    return 0;
}*/

/*2.
#include<iostream>
int main(){
    std::cout<<"learner"<<std::endl;
    std::cout<<"Me";
    return 0;
}*/

/*3
#include<iostream>
using namespace std;
int main(){
    int num1,num2,sum;
    cout<<"enter two no:";
    cin>>num1>>num2;
    sum=num1+num2;
    cout<<num1<<"+"<<num2<<"="<<sum;
    return 0;

}*/

/*4
#include<iostream>
using namespace std;
int main(){
    double num1,num2,product;
    cout<<"enter the no"<<endl;
    cin>>num1>>num2;
    product=num1*num2;
    cout<<num1<<"*"<<num2<<"="<<product;
    return 0;
}*/

/*5
#include <iostream>
using namespace std;
int main(){
    int divisor,dividend,quotient,remainder;
    cout<<"divisor"<<endl;
    cin>>divisor;
    cout<<"dividend"<<endl;
    cin>>dividend;
    quotient=divisor/dividend;
    remainder=divisor%dividend;
    cout<<"enter quotient" << quotient <<endl;
    cout<<"enter remainder" << remainder;
    return 0;
}*/

/*6
#include<iostream>
using namespace std;
int main(){
    cout<<"Size of char:"<<sizeof(char)<<" bytes"<<endl;
    cout<<"Size of int:"<<sizeof(int)<<" bytes"<<endl;
    cout<<"Size of double:"<<sizeof(double)<<" bytes"<<endl;
    cout<<"Size of long:"<<sizeof(long)<<" bytes"<<endl;
    cout<<"Size of boo:"<<sizeof(bool)<<" bytes"<<endl;
    cout<<"Size of float:"<<sizeof(float)<<" bytes"<<endl;
    cout<<"Size of void:"<<sizeof(void)<<" bytes"<<endl;


    return 0;
}*/

/*7
#include<iostream>
using namespace std;
int main(){
    int num,cube;
    cout<<"enter the no"<<endl;
    cin>>num;
    cube=num*num*num;
    cout<<"cube of"<< num<<"="<<cube;
    return 0;
}*/

/*8
#include<iostream>
using namespace std;
int main(){
    int height,base,area;
    cout<<"enter the height";
    cin>>height;
    cout<<"enter the base";
    cin>>base;
    area=height*base/2;
    cout<<"Area of traingle"<<area;
    return 0;
}*/

/*9
#include<iostream>
using namespace std;
int main(){
    int num1=2,num2=1,temp=0;
    cout<<"Before swap"<<endl;
    cout<<"num1="<<num1<<",num2="<<num2<<endl;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"After swap"<<endl;
    cout<<"num1="<<num1<<",num2="<<num2;
    return 0;
}*/

/*10
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    if(num%2==0)
    cout<<num<<"is even";
    else
    cout<<num<<"is odd";
    return 0;
}*/

/*11
#include<iostream>
using namespace std;
int main(){
    double num;
    cout<<"Enter The number"<<endl;
    cin>>num;
    if(num>0.0)
    cout<<("positive Number");
    else if(num<=0.0)
    cout<<("Negative Number");
    else 
    cout<<("is zero");
    return 0;
}*/

/*12
#include<iostream>
using namespace std;
int main(){
    double num1,num2;
    cout<<"Enter Two Number";
    cin>>num1>>num2;
    if(num1>num2)
    cout<<"num1 is gretest";
    else if(num2>num1);
    cout<<"num2 is gretest";
    else(num1=num2);
    cout<<"same number";

    return 0;
}*/

/*13
#include <iostream>
using namespace std;
int main(){
    double n1,n2,n3;
    cout<<"Enter The Three Number";
    cin>>n1>>n2>>n3;
    if((n1>=n2)&&(n1>=n3))
    cout<<"num1 is greater"<<n1;
    else if((n2>=n1)&&(n2>=n3))
    cout<<"num2 is greater "<<n2;
    else
    cout<<"Num3 was Gretest"<<n3;
    return 0;
}*/

/*14
#include<iostream>
#include<cmath>
using namespace std;
int main(){
   double a,b,c,x1,x2;
   double discriminant,imaginary,real;
   cout<<"Enter the coefficient a,b and c";
   cin>>a>>b>>c;
   discriminant=b*b-4*a*c;
   if(discriminant>0){
       x1=(-b+sqrt(discriminant))/(2*a);
        x2=(-b-sqrt(discriminant))/(2*a);
   cout<<"Roots are real and different "<<endl;
   cout<<"x1="<<x1<<endl;
   cout<<"x2="<<x2<<endl;
   } 
   else if(discriminant==0){
       cout<<"roots are real and same"<<endl;
       x1=-b/(2*a);
       cout<<"x1=x2="<<x1<<endl;
   }
   else{
       real=-b/(2*a);
       imaginary=sqrt(-discriminant)/(2*a);
       cout<<"roots are complex and diffrent"<<endl;
       cout<<"x1="<<real<<"+"<<imaginary<<"i"<<endl;
        cout<<"x2="<<real<<"-"<<imaginary<<"i"<<endl;
   }
   return 0;
   }*/

/*15
   #include<iostream>
   using namespace std;
   int main(){
       char c;
    cout<<"enter the alphabet"<<endl;
    cin>>c;
   
   if(!isalpha(c)){
     cout<<"non alphabetic charecter";
    
   }
   else{
       char temp =tolower(c);
       bool is_vowel;

       is_vowel=(temp=='a'||temp=='e'||temp=='i'||temp=='o'||temp=='u');
      
     if(is_vowel)
       cout<<c<<" is vowel";
       else
       cout<<c<<" not a vowel";
       return 0;
   }
   }*/

/*16
    #include<iostream>
    using namespace std;
    int main(){
        int n,sum=0;
        cout<<"enter number"<<endl;
        cin>>n;
        for(int i=1;i<=n;++i){
        sum+= i;
        }
        cout<<"sum of no" <<sum;
        return 0;
    }*/

/*  17
    #include<iostream>
    using namespace std;
    int main(){
        int n;
        unsigned long long factorial=1;
        cout<<"enter a positive number";
        cin>>n;
        if(n<0){
            cout<<"error";
        }
        else{
            for(int i=1;i<=n;++i){
            factorial*=i;
        }
        cout<<"factorial"<<n<<"="<<factorial;
    }
    return 0;
    }*/

/*18
     #include<iostream>
    using namespace std;
    int main(){
        int n;
      
        cout<<"enter a positive number";
        cin>>n;
          for(int i=1;i<=n;++i){
      cout<<n<<"*"<<n<<i<<"="<<n*i<<endl;
          }
       return 0;
    }*/

/*19
    #include<iostream>
    using namespace std;
    int main(){
        int n,t1=0,t2=1,next_term=0;
        cout<<"enter the number:";
        cin>>n;
        cout<<"fibonacci series:";
        for(int i=1;i<=n;++i){
            cout<<t1<<",";
            next_term=t1+t2;
            t1=t2;
            t2=next_term;
        }
      return 0;
    }*/

/*
#include<iostream>
using namespace std;
int main(){
    int n1,n2,gcd;
    cout<<"enter two number";
    cin>>n1>>n2;
    if(n1<n2){
        int temp=n2;
        n2=n1;
        n1=temp;

    }
    for(int i=1;i<=n2;++i){
        if(n1%i==0 && n2%i==0)
        gcd=i;
    }
   cout<<"GCD="<<gcd;
 return 0;
} */

/*21
#include <iostream>
using namespace std;
string removeDup(string s){
    if(s.length()==0){
        return "";

    }
    char ch=s[0];
    string ans=removeDup(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}
int main(){
    cout<<removeDup("aaabbbeeecdddd");
    return 0;
}*/

/*
#include<iostream>
using namespace std;
string moveallX(string s){
    if(s.length()==0){
    return "";
}
  char ch=s[0];
  string ans= moveallX(s.substr(1));

  if(ch=='x'){
     return ans+ch;
  }
return ch+ans;

}
int main(){
    cout<<moveallX("axsxsxsxsxsxsx")<<endl;
    return 0;
}*/

/*
#include <iostream>
using namespace std;

if(s.length()==0){
    cout<<ans<<endl;
    return;
}
   char ch=s[0];
string ros=s.substr(1);

subseq(ros,ans);
subseq(ros,ans+ch);

int main(){
subseq("ABC","");
cout<<endl
return 0;
}*/

/*
#include <iostream>
using namespace std;
  void subseq(string s,string ans){
      if(s.length()==0){
          cout<<ans<<endl;
          return ;
      }
      char ch=s[0];
      int code =ch ;
      string ros = s.substr(1);

      subseq(ros,ans);
      subseq(ros,ans+ch);
     subseq(ros,ans+to_string(code));
  }
      
      int main(){
          subseq("AB","");


return 0;
}*/
/*
#include<iostream>
using namspace std;

void permutation(string s,string ans){
if (s.length()==0){
    cout<<ans<<endl;
    return ;
}
for(int i=0;i<s.length();i++){
   char ch=s[i];
   string ros =s.substr(0,i)+s.substr(i+1);

   permutatio(res,ans+ch);
}
}
int main(){
    permutation ("ABC","");
    return 0;
}*/

#include <iostream>
using namespace std;

voidMerge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        a[i] = arr[l + i];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }

        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (i < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}
void mergesort(int arr[], int l, int r)
{
    if (l + r)
    {
        int mid = (l + r) / 2

                  mergeSort(arr, l, mid)
                      mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
int main()
{
    mergeSort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "";
    }
    cout << endl;

    return 0;
}
