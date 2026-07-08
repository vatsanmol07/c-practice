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
int main(){
   // Node a1(10);
Node *Head;//dynamic memory allocation
Head = new Node(10);
cout<<Head->data<<endl;
cout<<Head->next<<endl;
}