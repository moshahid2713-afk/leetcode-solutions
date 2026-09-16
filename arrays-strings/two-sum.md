## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used a hash map to store each number and its index while traversing the array. For every element, I calculate the complement needed to reach the target and check whether that complement is already in the hash map.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The hash map allows the required pair to be found in a single pass through the array. The solution also handles duplicate values correctly.