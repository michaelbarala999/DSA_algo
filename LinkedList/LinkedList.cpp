#include<iostream>
using namespace  std;
class Node{
    public: 
    int data ;
    Node* next;

    Node(){

    }
    Node(int x){
        this->data = x;
    }
};
 Node* DeleteNode(Node* &head,int val){
    if(!head){
        return NULL;
    }else{
        // If the head node is to be deleted
        if(head->data == val){
            return head->next;
        }else{
            Node* temp = head;
            while(temp->next && temp->next->data !=val){
                temp = temp->next;
            }
            if(temp->next->data == val){
                temp->next= temp->next->next;
            }
                return head;
            
        }
    }
 }
Node* insert(Node* &head,int value){

  if(head == NULL){
    Node* n = new Node(value);
    head = n;
    return n;
  }
  else{
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* n = new Node(value);
    temp->next=n;
    return head;
  }
}
Node* reverseList(Node* head){
    if(!head){
        return head;
    }
    Node* prev = NULL;
    Node* next = NULL;
    Node* curr = head;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;       
    }
    return prev;
}
void printLinkedList(Node* &head){
    if(head == NULL){
        return;
    }
    else{
        Node* temp = head;
        while(temp!= NULL){
            cout<<temp->data <<" ";
            temp = temp->next;
        }
    }
}
int main(){
    Node* head = NULL;
  insert(head,1);
  insert(head,2);
  insert(head,3);
  insert(head,4);
  insert(head,5);
  //head = DeleteNode(head,3);
  head = reverseList(head);
  printLinkedList(head);
}