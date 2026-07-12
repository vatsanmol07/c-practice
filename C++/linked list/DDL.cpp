#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node*prev;
    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
    int main(){ 
        Node*head=NULL;
        //insert node at start


      //linked list doesnot exist  
      if(head==NULL){
          head=new Node(6);    
    }
    //already exists
    else{
        Node*temp=new Node(6);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    Node*trav=head;
    while(trav!=NULL){
        cout<<trav->data<<" ";
        trav=trav->next;
    }
    return 0;
}
