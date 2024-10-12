#include<iostream>
using namespace std;

short parity(unsigned long x){
    short result = 0;
    while(x){
        result ^= 1;
        x &= (x - 1);
    }
    return result;
}
int main (){
    long x= 10;
    cout << parity(x) ;
    return 0;
}