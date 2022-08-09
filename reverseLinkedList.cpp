#include<iostream>
using namespace std;
 
 class node{
    public:  
    int data;                
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

//Insert At Last
void insertAtTail(node* &head,int val){

     node* n=new node(val);
     
      if(head==NULL){
          head=n;
          return;
      }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;

}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
       temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node* reverse(node* &head){   //reverse LinkList
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }

    if(nextptr!=NULL){
    head->next=reverse(nextptr);
    }
    return prevptr;
 }

 node* reverseRecursive(node* &head){
     if(head==NULL || head->next==NULL ){
         return head;
     }
     node* newwhead=reverseRecursive(head->next);
     head->next->next==head;
     head->next=NULL;

     return newwhead;
 }
 int main(){
    node* head=NULL;
     insertAtTail(head,1);
     insertAtTail(head,2);
     insertAtTail(head,3);
     insertAtTail(head,4);
     insertAtTail(head,5);
     insertAtTail(head,6);
      display(head);

    node* newhead=reverse(head);
     display(newhead);

   node* newwhead=reverseRecursive(head);
     display(newwhead);
      return 0;
 }