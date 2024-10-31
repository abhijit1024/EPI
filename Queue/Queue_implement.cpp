#include <bits/stdc++.h>
using namespace std;

class Queue {
    private:
        vector<int> data;

    public:
        void Enqueue(int x) {
            data.emplace_back(x);
        }

        void Dequeue() {
            if (!data.empty()) {
                data.erase(data.begin());
            } else {
                cout << "Queue is empty!" << endl;
            }
        }

        void Front() const {
            if (!data.empty()) {
                cout << "Front: " << data.front() << endl;
            } else {
                cout << "Queue is empty!" << endl;
            }
        }

        int Size() const {
            return data.size();
        }
};

int main() {
    Queue q;
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Front();
    q.Dequeue();
    q.Front();
    cout << "Queue Size: " << q.Size() << endl;
    return 0;
}
