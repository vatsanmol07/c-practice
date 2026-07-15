#include<iostream>
using namespace std;
//implementation of stack using linked list
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Stack{
    Node*top;
    int size;
    public:
    Stack(){
        top=NULL;
        size=0;
    }
    //push operation
    void push(int val){
        Node*temp=new Node(val);
        if(!temp){
            cout<<"Stack overflow"<<endl;
            return;
        } else{ 
        temp->next=top;
        top=temp;
        size++;
        cout<<val<<" pushed to stack"<<endl;
        }
    }
    //pop operation
    void pop(){
        if(!top){
            cout<<"Stack underflow"<<endl;
            return;
        } else{
            Node*temp=top;
            top=top->next;
            delete temp;
            size--;
            cout<<"Element popped from stack"<<endl;
        }
    }
    //peek operation
    int peek(){
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        } else{
            return top->data;
        }
    }
    //isEmpty operation
    bool isEmpty(){
        return top==NULL;
    }
    //issize operation
    int issize(){
        return size;
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"Top element is: "<<s.peek()<<endl;
    s.pop();
    cout<<"Top element is: "<<s.peek()<<endl;
    cout<<"Stack size is: "<<s.issize()<<endl;
    s.pop();
    return 0;
}