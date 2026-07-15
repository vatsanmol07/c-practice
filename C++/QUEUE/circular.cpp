#include<iostream>
using namespace std;

class Queue {
    int *arr;
    int front, rear, size;

public:
    Queue(int n) {
        arr = new int[n];
        size = n;
        front = rear = -1;
    }

    bool IsEmpty() {
        return front == -1;
    }

    bool IsFull() {
        return (front == (rear + 1) % size);
    }

    // Push
    void push(int x) {
        if (IsFull()) {
            cout << "Queue Overflow\n";
            return;
        }

        if (IsEmpty()) {
            front = rear = 0;
        }
        else {
            rear = (rear + 1) % size;
        }

        arr[rear] = x;
        cout << "Pushed " << x << " into the queue\n";
    }

    // Pop
    void pop() {
        if (IsEmpty()) {
            cout << "Queue Underflow\n";
            return;
        }

        cout << "Popped " << arr[front] << " from the queue\n";

        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % size;
        }
    }

    // Front element
    int start() {
        if (IsEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    void display() {
        if (IsEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.display();

    q.pop();
    q.pop();
    q.pop();
     q.pop();
    q.pop();  
    q.display();

    q.push(60);
   q.push(70);

   q.display();

    cout << "Front element: " << q.start() << endl;
   
}