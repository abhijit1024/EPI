#include<iostream>
#include<climits> // For INT_MAX and INT_MIN
using namespace std;
long reverse(int x){
    bool is_negative = x < 0;
    long result = 0, x_remaining = abs(x);
    while(x_remaining){
        int digit = x_remaining % 10;
        x_remaining /= 10;

        if(result > (INT_MAX - digit) / 10){
            return 0;
        }
        result = result* 10 + digit;
    }
    return is_negative ? - result : result;
}
int main(){
    int num = -89;
    long reverse_num = reverse(num);
    if(reverse_num == 0){
        cout << "overflow occurred" << endl;
    }
    else{
        cout << "Reversed number " << reverse_num << endl;
    }
    return 0;
}