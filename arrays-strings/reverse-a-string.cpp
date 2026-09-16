#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};

// Test Case 1 (Typical):
// Input: ["h","e","l","l","o"]
// Expected Output: ["o","l","l","e","h"]

// Test Case 2 (Edge Case):
// Input: ["a"]
// Expected Output: ["a"]