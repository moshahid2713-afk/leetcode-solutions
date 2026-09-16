## Problem: Reverse a String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

I used two pointers, one starting from the beginning and the other from the end of the string. I swap the characters at these positions and move the pointers toward the center until the string is completely reversed.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution modifies the input array in place, so no additional array is required.