#include<iostream>
using namespace std;

const int kNumUnsignBits = 64;

unsigned long ClosetIntSameBitCount(unsigned long x){
    for(int i = 0; i < kNumUnsignBits - 1; i++){
        if (((x >> i) & 1) != ((x >> (i + 1)) & 1)){ // check which bits are different

            x ^= (1UL << i) | (1UL << (i + 1)); // swap the bits which are different
            return x;
        }
    }
    throw invalid_argument("All bits are 0 or 1");

}
int main(){
    unsigned long x = 6;
    cout << "closest integer with the same bit is :" << ClosetIntSameBitCount(x) << endl;
    return 0;
}