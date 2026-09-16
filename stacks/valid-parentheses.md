## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to store opening brackets. Whenever a closing bracket is encountered, I check whether it matches the most recent opening bracket in the stack.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The string is valid only when every closing bracket matches its corresponding opening bracket and the stack is empty at the end.