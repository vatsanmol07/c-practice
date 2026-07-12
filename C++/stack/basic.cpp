#include<iostream>
using namespace std;
//implementation of stack using array
class Stack{
    int*arr;
    int size;
    int top;
    public:
    bool flag;
    //constructor
    Stack(int s){
        size=s;
        arr=new int[size];
        top=-1;
        flag=1;
    }
    //push operation
    void push(int val){
        if(top==size-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        else{
            top++;
            arr[top]=val;
            cout<<val<<" pushed to stack"<<endl;
            flag=0;
        }

    } //pop operation
    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return;
        }
        else{
            cout<<arr[top]<<" popped from stack"<<endl;
            top--;
        }
    } 
   //peek operation
    int peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    } 
    //isEmpty operation
    bool isEmpty(){
        return top==-1;
    } 
    //isFull operation
    bool isFull(){
        return top==size-1;
    } 
    int ISsize(){
        return top+1;
    }       
};
int main(){
    Stack s(5);
    s.push(-1);
    int val=s.peek();
    if(s.flag==0){
        cout<<"value: "<<val<<endl;
    }
    
    cout<<"Top element is: "<<s.peek()<<endl;
    cout<<"Stack size is: "<<s.ISsize()<<endl;
    return 0;
}
    