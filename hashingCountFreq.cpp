#include<iostream>
using namespace std;

#include<set>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<algorithm>
#include<string>


#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i,a,n) for(int i=a; i<n; i++)
#define ff first 
#define ss second 
#define setbits(x) builtin_popcount(x)

signed main(){

    int n;
    cin>>n;

    vi a(n);

    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    map<int,int>freq;
    rep(i,0,n)
    {

        freq[a[i]]++;
    }
  map<int,int> :: iterator it;
  for(it=freq.begin(); it!=freq.end(); it++){
      cout<<it->ff<<" "<<it->ss<<endl;

  }
  return 0;
}