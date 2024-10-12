#include<iostream>
using namespace std;

short Parity(unsigned long x){
    short result = 0;
    while(x){
        result ^= (x & 1);
        x >>= 1;
    }
    return result; 

}
int main(){

    long num = 10;
    cout << "Parity of " << num << " is " << Parity(num) << endl;

    return 0;
}