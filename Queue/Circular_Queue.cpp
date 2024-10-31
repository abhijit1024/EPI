#include <bits/stdc++.h>
using namespace std;

class CircularQueue {
private:
    vector<int> entries;
    size_t capacity;
    int front, rear, size;

public:
    explicit CircularQueue(size_t cap)
        : entries(cap), capacity(cap), front(0), rear(cap - 1), size(0) {}

    bool isEmpty() const {
        return size == 0;
    }

    bool isFull() const {
        return size == capacity;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full\n";
            return;
        }
        rear = (rear + 1) % capacity;
        entries[rear] = value;
        size++;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        int value = entries[front];
        front = (front + 1) % capacity;
        size--;
        return value;
    }

    int getFront() const {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return entries[front];
    }

    int getRear() const {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return entries[rear];
    }
};

int main() {
    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;

    q.dequeue();
    q.enqueue(60);

    cout << "Front element after dequeue: " << q.getFront() << endl;
    cout << "Rear element after enqueue: " << q.getRear() << endl;

    return 0;
}
