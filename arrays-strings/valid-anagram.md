## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I sorted both strings and then compared them. If the sorted strings are equal, both strings contain the same characters with the same frequencies, so they are anagrams.

### Complexity

- Time: O(n log n)
- Space: O(n)

### Notes

First checking whether the string lengths are equal helps quickly identify cases that cannot be anagrams.