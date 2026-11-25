# 08. Valid Parentheses

**Name:** Shuba Shree G J  
**Roll Number:** R25EF258  
**Course:** B.Tech CSE – REVA University  
**Language:** C

## Problem
LeetCode 20 – Valid Parentheses

## Approach
- Use a stack to store opening brackets.
- Traverse the string character by character.
- Push opening brackets onto the stack.
- For closing brackets, check whether the top of the stack contains the matching opening bracket.
- Return false if brackets do not match or the stack is empty.
- Return true if the stack is empty after processing the entire string.

## Time Complexity
O(n)

## Space Complexity
O(n)

## Test Cases

1. Input: "()" → Output: true
2. Input: "()[]{}" → Output: true
3. Input: "(]" → Output: false
4. Input: "([{}])" → Output: true
5. Input: "(((" → Output: false

## LeetCode Result
Accepted.

Screenshot: [08-result.png](08-result.png)