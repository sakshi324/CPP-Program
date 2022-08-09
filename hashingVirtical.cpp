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

struct Node{
   int key;
     Node *left,*right;
}

Node* newNode(int key){
    Node* node=new Node;
    node->key=key;
    node->left=node->right=NULL;
    return node;
}

    void getVerticalOrder(Node* root, int hdis, map<int,vi> &m){
        if(root==NULL);
        return ;

        m[hdis].push_back(root->key);
        getVerticalOrder(root->left,hdis-1,m);
         getVerticalOrder(root->right,hdis+1,m);
    }



signed main(){

      Node *root= new Node(10);
        root->left=new Node(7);
      root->right=new Node(4);
        root->left->left=new Node(3);
       root->left->right=new Node(11);
     root->right->left=new Node(14);
       root->right->right=new Node(6);

       map<int,vector<int>>m;

       int hdis=0;

       getVerticalOrder(root,hdis ,m );

       map<int,vi>::iterator it;
       for(it=m.begin(); it!=m.end(); it++){
           for(int i=0; i<(it->ss).size(); i++){
               cout<<(it->ss)[i]<<" ";
           }
           cout<<endl;
       }
       return 0;
}

