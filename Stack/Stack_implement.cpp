#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> vec;  

public:
    void push(int value) {
        vec.push_back(value);
    }

    void pop() {
        if (!vec.empty()) {
            vec.pop_back();
        } else {
            cout << "Stack is empty! Cannot pop.\n";
        }
    }

    int top() {
        if (!vec.empty()) {
            return vec.back();
        } else {
            cout << "Stack is empty! No top element.\n";
            return -1;  
        }
    }

    bool isEmpty() {
        return vec.empty();
    }

    int size() {
        return vec.size();
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;  
    cout << "Stack size: " << s.size() << endl;  

    s.pop();
    cout << "After pop, top element: " << s.top() << endl;  

    s.pop();
    s.pop();
    s.pop();  
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
