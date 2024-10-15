#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for (int num : nums) {
            if (s.find(num) != s.end()) {
                return true;  
            }
            s.insert(num);
        }
        return false;  
    }
};

int main() {
    Solution solution;
 
    vector<int> nums1 = {1, 2, 3, 1};
    cout << "Test Case 1: " << (solution.containsDuplicate(nums1) ? "true" : "false") << endl;

    vector<int> nums2 = {1, 2, 3, 4};
    cout << "Test Case 2: " << (solution.containsDuplicate(nums2) ? "true" : "false") << endl;

    vector<int> nums3 = {1, 1, 1, 3, 3, 4, 2, 4, 2};
    cout << "Test Case 3: " << (solution.containsDuplicate(nums3) ? "true" : "false") << endl;

    vector<int> nums4 = {};
    cout << "Test Case 4: " << (solution.containsDuplicate(nums4) ? "true" : "false") << endl;

    return 0;
}
