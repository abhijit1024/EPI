#include<bits/stdc++.h>
using namespace std;

typedef enum {RED,WHITE,BLUE} color;

void DutchFlagPartition(int pivot_index,vector<color>* A_ptr){

    vector<color>& A = *A_ptr;
    color pivot = A[pivot_index];

    for(int i = 0; i < A.size(); i++){
        for(int j = i + 1; j < A.size(); ++j){
            if(A[j] < pivot){
                swap(A[i] , A[j]);
                    break;
            }
        }
    }
    for(int i = A.size() - 1; i >= 0 && A[i] >= pivot; --i){
        for(int j = i -1; j >= 0 && A[j] >= pivot; --j){
            if(A[j] > pivot){
                swap(A[i] , A[j]);
                break;
            }
        }
    }
    
}
int main(){
    vector <color> arr = {RED ,WHITE,BLUE,WHITE,RED,WHITE,BLUE,WHITE};

    cout << "Original" ;
    for(int num: arr) {
        cout << num << " ";
    }
    cout << endl;

    DutchFlagPartition(1, &arr);

    cout << "partitioned : ";
    for(int num :arr){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}