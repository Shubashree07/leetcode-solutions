# Problem 5: Longest Common Prefix

**Name:** Shuba Shree G J  
**Roll Number:** R25EF258  
**Course:** B.Tech CSE – REVA University  
**Language:** C

## Problem Link
[LeetCode – Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)

## Approach
- Take the first string as the reference.
- Compare each character with the corresponding character in all other strings.
- If a mismatch is found, stop and return the prefix collected so far.
- If all characters match, return the complete first string.

## Time Complexity
O(n × m), where n is the number of strings and m is the length of the shortest string.

## Space Complexity
O(m), for storing the resulting prefix.

## Local Test Cases
1. `{"flower", "flow", "flight"}` → `fl`
2. `{"dog", "racecar", "car"}` → `""`
3. `{"a"}` → `a`

## Result
Accepted on LeetCode. Local tests passed.