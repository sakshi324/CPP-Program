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

    rep(i,0,n){
    cin>>a[i];
    }
  map<int ,int> cnt;
    int prefSum=0;

    rep(i,0, n){
    prefSum+=a[i];
    cnt[prefSum]++;
}

int ans=0;
map<int,int> :: iterator it;

for(it =cnt.begin(); it!=cnt.end(); it++) {
    int c=it->ss;

    ans+= (c*(c-1))/2;

    if(it->ff==0)
        ans += it->ss;

    
}

cout<<ans<<endl;

return 0;
}




