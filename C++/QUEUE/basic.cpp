#include<iostream>
using namespace std;
// implement queue using array
class Queue{
    int *arr;
    int front,rear,size;
    public:
    //constructor
    Queue(int n){ 
 arr=new int[n];
    size=n;
    front=-1;
    rear=-1;
    }
    //if queue is empty or not
    bool Isempty(){
        return front==-1;
    }
    //if queue is full
    bool Isfull(){
        return rear==size-1;
    }
    //push
    void push(int x){
    //empty
    if(Isempty()){
        front=rear=0;
        cout<<"pushed"<<x<<"into the queue\n";
        arr[0]=x;
        return;
    }
    //full
    else if(Isfull()){
        cout<<"queue overflow\n";
        return;
    }
    //insert
    else{
        rear=rear+1;
        arr[rear]=x;
         cout<<"pushed"<<x<<"into the queue\n";
    }
    }
    //pop
    void pop(){
        //empty
        if(Isempty()){
            cout<<"queue is empty\n";
            return;
        }
        else {
            if(front==rear){ 
                cout<<"popped"<<arr[front]<<"into the queue\n";
            front=rear=-1;
            }
            else{
                cout<<"popped"<<arr[front]<<"into the queue\n";
                front=front+1;
            }
        }
    }
    //starting element
    int start(){
        if(Isempty()){
            cout<<"Queue is empty\n";
            return -1;
        }
 else
 return arr[front];
    }
};
int main(){
    Queue q(5);
    q.push(2);
    q.push(22);
    q.pop();
    q.pop();
int x=q.start();
    if(!q.Isempty());
    cout<<x<<" ";
}

 
