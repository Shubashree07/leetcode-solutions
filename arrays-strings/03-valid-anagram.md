# Problem 3: Valid Anagram (Easy)

**Name:** Shuba Shree G J  
**Roll Number:** R25EF258  
**Course:** B.Tech CSE – REVA University  
**Programming Language:** C

**LeetCode:** https://leetcode.com/problems/valid-anagram/

**Status:** Accepted

## Approach

Used a frequency counting technique with an integer array
of size 26 to count lowercase English letters.

First, increment the count for every character in string s.
Then, decrement the count for every character in string t.

If all 26 counts are zero, both strings are anagrams.
Otherwise, they are not anagrams.

## Complexity

- Time Complexity: O(n + m)
- Space Complexity: O(1)

## Test Cases

1. Input: s = "anagram", t = "nagaram"
   Output: true

2. Input: s = "rat", t = "car"
   Output: false

3. Input: s = "a", t = "a"
   Output: true

## Notes

The solution uses a fixed-size frequency array
and works efficiently for lowercase English letters.