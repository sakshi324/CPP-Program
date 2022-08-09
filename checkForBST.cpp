#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
          }
};

bool isBST(Node* root,Node* min, Node* max){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data<=min->data){
        return false;
    }
    if(max!NULL && root->data>=max->data){
        return false;
    }
    bool leftVaild =isBST(root->left,min, root);
    bool rightVaild=isBST(root->right,root,max);
    return leftVaild and rightVaild;
}

int main(){
    Node* root1=new Node(1);
      root
}
