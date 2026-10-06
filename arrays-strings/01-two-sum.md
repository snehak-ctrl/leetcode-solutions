## Problem: Two Sum 

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used a hash map to store the numbers I have already seen and their indices.
For each number, I calculate the number needed to reach the target. If that
number is already in the hash map, I return the two indices.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

I tested the solution locally with a normal case and a duplicate-number case
before attempting the LeetCode submission.