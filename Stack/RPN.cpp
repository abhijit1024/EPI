#include<bits/stdc++.h>
using namespace std;

int evaluateRPN(const vector<string>& tokens) {
    stack<int> stk;

    for (const string& token : tokens) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int b = stk.top(); stk.pop();
            int a = stk.top(); stk.pop();

            if (token == "+") stk.push(a + b);
            else if (token == "-") stk.push(a - b);
            else if (token == "*") stk.push(a * b);
            else if (token == "/") stk.push(a / b);
        } else {
            stk.push(stoi(token));
        }
    }

    return stk.top();
}

int main() {
    vector<string> tokens = {"2", "1", "+", "3", "*"};
    cout << "Result: " << evaluateRPN(tokens) << endl;
    return 0;
}