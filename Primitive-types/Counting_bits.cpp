#include<iostream>
using namespace std;

short CountBits(unsigned int x){
    short nums_bits = 0;
    while(x){
        nums_bits += x & 1; // checks the Lsb of x if its 1 then (1&1) = 1 ,count is incremented ,otherwise (0&1) = 0 ,count is not incremented.
        x >>= 1; // right shift moves the bits 

    }
    return nums_bits;
}
int main(){
    unsigned int number = 324;
    cout << "Number of 1 bits in " << number << " is: " << CountBits(number) << endl;
    return 0;
}

