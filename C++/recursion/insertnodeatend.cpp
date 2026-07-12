#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
int main(){
    Node *Head = NULL, *tail = NULL;
    int arr[5] = {10, 20, 30, 40, 50};
    //insert the node at end
for(int i=0;i<5;i++){
    //linked list is empty
    if(Head == NULL){
        Head = new Node(arr[i]);
        tail = Head;
    }
    //linked list is not empty
    else{
        tail->next = new Node(arr[i]);
        tail = tail->next;
    }
}
    //print linked list
    Node *temp = Head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}