#include <bits/stdc++.h>
using namespace std;

class QueueUsingStacks {
    stack<int> stack1, stack2;

public:
    void enqueue(int value) {
        stack1.push(value);
    }

    int dequeue() {
        if (stack2.empty()) {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        if (!stack2.empty()) {
            int value = stack2.top();
            stack2.pop();
            return value;
        }
        return -1; 
    }

    bool isEmpty() {
        return stack1.empty() && stack2.empty();
    }

    int peek() {
        if (stack2.empty()) {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        if (!stack2.empty()) {
            return stack2.top();
        }
        return -1; 
    }
};

int main() {
    QueueUsingStacks q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout << q.dequeue() << endl; 
    cout << q.peek() << endl;    
    cout << q.dequeue() << endl; 
    cout << q.isEmpty() << endl; 

    return 0;
}
