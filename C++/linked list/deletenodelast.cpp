#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
Node*createlinkedlist(int arr[],int index,int size){
    //base case
    if(index==size){
        return NULL;
    }
   Node*temp;
    temp=new Node(arr[index]);
     temp->next=createlinkedlist(arr,index+1,size);
     return temp;
}
int main(){
    Node*Head;
    Head=NULL;
    int arr[]={1,2,3,4,5};
    Head =createlinkedlist(arr,0,5);
    //delete node at end
    if(Head!=NULL)
    {
        // If there's only one node in the list
        if (Head->next == NULL) {
            delete Head;
            Head = NULL;
        } else {
           Node*current=Head;
           Node*prev=NULL;
           while(current->next!=NULL)
           {
               prev=current;
               current=current->next;
    }
while(current->next!=NULL)
           {
               prev=current;
               current=current->next;
           }
           prev->next=NULL;
           delete current;
    while(Head)
{
    cout << Head->data << " ";
    Head = Head->next;
}
        }
    }
}