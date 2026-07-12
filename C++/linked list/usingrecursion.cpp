#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
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
    Node*Head=NULL;
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    Head = createlinkedlist(arr, 0, size);
    //print linked list
    Node* temp = Head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}
