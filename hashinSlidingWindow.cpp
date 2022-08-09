#include<iostream>

using namespace std;

#include<set>
#include<vector>
#include<map>
#include<unordered_map>
#include<stack>
#include<queue>
#include<algorithm>
#include<string>

#define vi vector<int> 
#define pii pair<int,int> 
#define vii vector <pii>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define ff first
#define ss second
#define setbits(x) builtin_popcount(x)

signed main(){
    int n,k,INT_MAX;
    cin>>n>>k;
    vi a(n);

    rep(i,0,n)
    cin>>a[i];

     int s=0, ans=INT_MAX;

    rep(i,0,k){
        s+=a[i];
    }
    cout<<s<<endl<<" ";
    ans=min(ans,s);

    rep(i,1,n-k+1){

    s-=a[i-1];
    s+=a[i+k-1];
    ans= min(ans,s);
}

cout<<ans<<endl;
return 0;
}
