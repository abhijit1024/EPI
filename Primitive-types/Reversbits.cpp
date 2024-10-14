#include <iostream>
using namespace std;

// Assume we have a precomputed lookup table for reversing 12-bit numbers.
const long precomputed_reverse[4096] = { /* Precomputed 12-bit reversals */ };

long ReverseBits(long x) {
    const int kWordSize = 16;  // Number of bits we will shift by
    const int kBitMask = 0xFFF; // Mask to extract the lower 12 bits (0xFFF = 1111 1111 1111 in binary)

    // Reverse the lower 12 bits of 'x' and shift it to the correct position
    return precomputed_reverse[x & kBitMask] << (3 * kWordSize);
}

int main() {
    long num = 12345;  // Example input
    cout << "Reversed bits: " << ReverseBits(num) << endl;
    return 0;
}
