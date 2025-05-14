#include <iostream>
#include <exception>
using namespace std;

class QueueOverflowException : public exception {};
class QueueUnderflowException : public exception {};

template <typename T>
class Queue {
    T* arr;
    int capacity, front, rear, count;

public:
    Queue(int size) : capacity(size), front(0), rear(-1), count(0) {
        arr = new T[capacity];
    }

    ~Queue() {
        delete[] arr;
    }

    void enqueue(T val) {
        if (count == capacity)
            throw QueueOverflowException();
        rear = (rear + 1) % capacity;
        arr[rear] = val;
        count++;
    }

    T dequeue() {
        if (count == 0)
            throw QueueUnderflowException();
        T val = arr[front];
        front = (front + 1) % capacity;
        count--;
        return val;
    }
};

int main() {
    Queue<int> q(2);
    try {
        q.enqueue(1);
        q.enqueue(2);
        cout << "Attempting to enqueue to a full queue..." << endl;
        q.enqueue(3);
    } catch (const QueueOverflowException& e) {
        cout << "Caught QueueOverflowException - what(): " << e.what() << endl;
    }

    try {
        q.dequeue();
        q.dequeue();
        cout << "Attempting to dequeue from an empty queue..." << endl;
        q.dequeue();
    } catch (const QueueUnderflowException& e) {
        cout << "Caught QueueUnderflowException - what(): " << e.what() << endl;
    }

    return 0;
}
