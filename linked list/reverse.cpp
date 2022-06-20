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
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
node* reverse(node* &head){
    node* prevPtr=NULL;
    node* currentPtr=head;
    node* nextPtr;
    while(currentPtr!=NULL){
           nextPtr=currentPtr->next;
           currentPtr->next=prevPtr;
           prevPtr=currentPtr;
           currentPtr=nextPtr;
    }
    return prevPtr;
}
//recursiveWay
node* reverseRecur(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=reverseRecur(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    cout<<endl;
    // node* newhead=reverse(head);
    node* newhead2=reverseRecur(head);
    display(newhead2);
    cout<<endl;
    return 0;}