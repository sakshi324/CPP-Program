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
#define rep (i,a,n)for(int i=a; i<n; i++)
#define ff first 
#define ss second 
#define setbits (x) builtin_popcount(x)

signed main(){

    int n,k;
    cin>>n>>k;

    vi a(n);

    rep(i,0,n)
    cin>>a[i];


    priority_queue<int,vector<int> pq;

    rep(i,0,n){
        pq.push(a[i];)
    }
     pq.push(2);
     pq.push(3);
     pq.push(1);

     cout<<pq.top()<<endl; 

     return 0;
}

