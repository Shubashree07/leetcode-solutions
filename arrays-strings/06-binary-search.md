# Problem 6: Binary Search

**Name:** Shuba Shree G J  
**Roll Number:** R25EF258  
**Course:** B.Tech CSE – REVA University  
**Language:** C

## Problem Link
[LeetCode – Binary Search](https://leetcode.com/problems/binary-search/)

## Approach
- Initialize two pointers: `left` and `right`.
- Calculate the middle index.
- If the middle element equals the target, return its index.
- If the target is greater, search the right half.
- Otherwise, search the left half.
- Return `-1` if the target is not found.

## Time Complexity
O(log n)

## Space Complexity
O(1)

## Local Test Cases
1. `{-1, 0, 3, 5, 9, 12}`, target `9` → `4`
2. `{-1, 0, 3, 5, 9, 12}`, target `2` → `-1`
3. `{5}`, target `5` → `0`

## Result
Accepted on LeetCode. All local tests passed.