## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I keep track of the minimum price seen so far while traversing the prices. For each price, I calculate the possible profit and update the maximum profit whenever a better profit is found.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

If the prices continuously decrease, no profitable transaction is possible, so the answer remains 0.