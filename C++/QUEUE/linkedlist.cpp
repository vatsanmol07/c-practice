#include <iostream>
using namespace std;

// Node of the linked list
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Queue using Linked List
class Queue {
    Node *front, *rear;

public:
    // Constructor
    Queue() {
        front = rear = NULL;
    }

    // Check if queue is empty
    bool IsEmpty() {
        return front == NULL;
    }

    // Push operation (Enqueue)
    void push(int x) {

        // Create a new node
        Node* temp = new Node(x);

        // If queue is empty
        if (IsEmpty()) {
            front = rear = temp;
        }
        else {
            // Insert at the rear
            rear->next = temp;
            rear = temp;
        }

        cout << "Pushed " << x << " into the queue\n";
    }

    // Pop operation (Dequeue)
    void pop() {

        // Queue is empty
        if (IsEmpty()) {
            cout << "Queue Underflow\n";
            return;
        }

        // Store the front node
        Node* temp = front;

        cout << "Popped " << front->data << " from the queue\n";

        // Move front to next node
        front = front->next;

        // If queue becomes empty
        if (front == NULL) {
            rear = NULL;
        }

        // Free memory
        delete temp;
    }

    // Return front element
    int start() {

        if (IsEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }

        return front->data;
    }

    // Display queue
    void display() {

        if (IsEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        Node* temp = front;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {

    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    q.display();

    q.pop();

    q.display();

    cout << "Front Element = " << q.start() << endl;

    return 0;
}