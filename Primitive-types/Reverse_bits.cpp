#include <iostream>
using namespace std;

int reverse(int num){

    int reverse = 0;
    for(int i = 0; i < 32; i++){
        int bit = num & 1;
        reverse = (reverse << 1) | bit ;
        num = num >> 1;
    }
    return reverse;
}
int main(){
    int num = 4;
    cout << "Original bit" << num << endl;
    cout << "reverse bit " << reverse(num) << endl;
    return 0;
}