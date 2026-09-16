## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I use an index to keep track of the position where the next non-zero element should be placed. After moving all non-zero elements forward, I fill the remaining positions with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution modifies the array in place and maintains the relative order of the non-zero elements.