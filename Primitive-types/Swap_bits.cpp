#include <iostream>
using namespace std;

long swapBits(long x,int i ,int j){

    if(((x >> i) & 1) != ((x >> j) & 1)){ // check if the bits match or not
        unsigned long bit_mask = (1L << i) | (1L << j); //  mask the bits with left shift with 1 ,then OR them
        x ^= bit_mask; // XOR on the bit_mask
    }
    return x; 
}
int main(){
    long num = 10;
    int i = 1, j = 4;
    cout << "Original number: " << num << endl;
    num = swapBits(num, i, j);
    cout << "Number after swapping bits at positions " << i << " and " << j << ": " << num << endl;
    return 0;
}
