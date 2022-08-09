#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

struct Info{
    int size;
    int min;
    int max;
    int ans;
    bool isBST;
}
Info largestBSTinBT(Node* root){
    if(root==NULL){
        return{0,INT_MAX,INT_MIN,0,true};
    }
   if(root->left==NULL && root->right==NULL){
       return{1,root->data,root->data,1,true};
   }
   Info leftInfo=largestBSTinBT(root->left);
    Info leftInfo=largestBSTinBT(root->left);

    Info curr;
    curr.size=(1+leftInfo.size+right.size);

    if(leftInfo.isBST && right.isBST && leftInfo.max< root->data && rightInfo.min> root-> data){
        curr.min=min(leftInfo.min ,min(rightInfo.min, root->data));
        curr.max=max(rightInfo.max,max( leftInfo.max,  root->data));

        curr.ans=curr.size;
        curr.isBST=true;

        return curr;
    }
   curr.ans=max(leftInfo.ans,rightInfo.ans);
   curr.isBST=false;
   return curr;
}

int main(){

      struct Node* root =new Node(12);
       root->left=new Node(9);
       root->right=new Node(15);
       root->left->left= new Node(5);
       root->left->right=new Node(10);

    cout<<"Largest BST in BT"<<largestBSTinBT(root).ans<<endl;
return 0;
}