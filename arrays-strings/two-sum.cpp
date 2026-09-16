// Two Sum
// Approach: Hash Map
// Time Complexity: O(n)
// Space Complexity: O(n)
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};


// Test Case 1 (Typical):
// Input: nums = [2,7,11,15], target = 9
// Expected Output: [0,1]

// Test Case 2 (Edge Case):
// Input: nums = [3,3], target = 6
// Expected Output: [0,1]