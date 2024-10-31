#include <iostream>
#include <queue>
#include <deque>
using namespace std;
class MaxQueue {
    queue<int> q;
    deque<int> d;

public:
    void push(int x) {
        q.push(x);
        while (!d.empty() && d.back() < x)
            d.pop_back();
        d.push_back(x);
    }

    void pop() {
        if (q.front() == d.front())
            d.pop_front();
        q.pop();
    }

    int front() {
        return q.front();
    }

    int max() {
        return d.front();
    }

    bool empty() {
        return q.empty();
    }
};
int main() {
    MaxQueue mq;
    mq.push(1);
    mq.push(3);
    mq.push(2);

    cout << "Max: " << mq.max() << endl; 
    mq.pop();
    cout << "Max: " << mq.max() << endl; 
    mq.pop();
            cout << "Max: " << mq.max() << endl; 

    return 0;
}
