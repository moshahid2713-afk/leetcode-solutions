## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I start with the first string as the initial prefix. I compare it with each following string and keep removing characters from the end until the current string starts with the prefix.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

If there is no common prefix, the solution returns an empty string.