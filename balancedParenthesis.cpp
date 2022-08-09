#include<bits/stdc++.h>
using namespace std;

bool isVaild(string s){
    int n=s.size();

    stack<int>st;
    bool ans=true;
    for(int i=0;i<n;i++){
        if(s[i]=='{' || s[i]=='('|| s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            if(!st.empty()&& st.top()==')'){
                st.pop();

            }
            else{
                ans=false;
                break;

            }
        }
         else if(s[i]=='{'){
            if(!st.empty()&& st.top()=='}'){
                st.pop();

            }
             else{
                ans=false;
                break;

            }
         }
             else if(s[i]=='['){
            if(!st.empty()&& st.top()==']'){
                st.pop();

            }
             else{
                ans=false;
                break;

            }
        }

         
    }
      if(!st.empty()){
          return false;
      }
}

int main(){

    string s="{([])}";

    if(isVaild(s)){

        cout<<"Vaild String"<<endl;
    }
    else{
        cout<<"Invaild String "<<endl;
    }
    
}
