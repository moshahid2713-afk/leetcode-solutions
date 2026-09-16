#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};

// Test Case 1 (Typical):
// Input: s = "anagram", t = "nagaram"
// Expected Output: true

// Test Case 2 (Edge Case):
// Input: s = "a", t = "b"
// Expected Output: false