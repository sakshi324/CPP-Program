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
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
       temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

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
  
//Searching
bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
    if(temp->data==key){
        return true;
    }
    temp=temp->next;
}
return false;
}

//Delete First Node
void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;

    delete todelete;
}
//Deletion
void deletion(node* &head,int val){

    if(head==NULL){  //When The Link List Was Empty
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);  // When only one value in a linkedList
        return;
    }

    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;
}
int main(){
    node * head=NULL;
     insertAtTail(head,1);
     insertAtTail(head,2);
     insertAtTail(head,3);
     display(head);

    insertAtHead(head,4);
     display(head);

    cout<<search(head,2)<<endl;
    
    deletion(head,3);
       display(head);
    
    deleteAtHead(head);
      display(head);
    return 0;
    }