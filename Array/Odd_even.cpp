#include <iostream>
#include<vector>
using namespace std;

void EvenOdd(vector<int>* A_ptr){

    vector<int>& A = *A_ptr;    //Dereference the pointer to get the current vector
    int next_even = 0, next_odd = A.size() - 1;

    while(next_even < next_odd){
        if(A[next_even] % 2 == 0){ // check if the current element is even
            ++next_even;    // If even move to the next element
        }
        else{               // If odd then swap 
            swap(A[next_even] , A[next_odd--]); // swaps with the next odd element
        }
    }
}

int main(){
    vector<int> arr = {3, 8, 5, 2, 9, 4, 1};  
    cout << "Original vector: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    EvenOdd(&arr);  

    cout << "Rearranged vector: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}