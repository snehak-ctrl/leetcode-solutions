## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I start with the first string as the prefix and compare it with each following string.
I keep only the characters that match until there is no common prefix.

### Complexity

- Time: O(n × m)
- Space: O(m)

### Notes

I tested the solution locally with a case that has a common prefix and a case with no common prefix.