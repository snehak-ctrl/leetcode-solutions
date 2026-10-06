## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I keep track of the lowest price seen so far.
For each price, I calculate the possible profit and keep the maximum profit found.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested the solution locally with a normal case and a case where no profit is possible.