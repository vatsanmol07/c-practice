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



int main() {
    Node *Head = NULL;
    //Head = new Node(10);
    int arr[5] = {20, 30, 40, 50, 60};
    //cout << Head->data << endl;
    //cout << Head->next << endl;
    //insert node at beginning
    //linked list is empty
    for(int i=0;i<5;i++){
    if (Head == NULL) {
        Head = new Node(arr[i]);
        //linked list is not empty
    } else {
        Node *temp;
        temp = new Node(arr[i]);
        temp->next = Head;
        Head = temp;
    }
}
    //print linked list
    Node *temp = Head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
   
}