## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used the binary search technique on the sorted array. I repeatedly check the middle element and eliminate half of the remaining search space based on whether the target is smaller or larger.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Binary search works efficiently because the input array is sorted and half of the search space can be eliminated after every comparison.