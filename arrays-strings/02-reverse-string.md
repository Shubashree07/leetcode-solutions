# Problem 2: Reverse String (Easy)

**LeetCode:** https://leetcode.com/problems/reverse-string/

**Language:** C  
**Status:** Accepted

## Approach
Used the two-pointer technique. One pointer starts at the beginning
and another at the end. Swap the characters and move both pointers
towards the centre until they meet.

## Complexity
- Time Complexity: O(n)
- Space Complexity: O(1)

## Test Cases

1. Input: ["h","e","l","l","o"]
   Output: ["o","l","l","e","h"]

2. Input: ["H","a","n","n","a","h"]
   Output: ["h","a","n","n","a","H"]

## Notes
The solution modifies the original character array in-place
without using an additional array.