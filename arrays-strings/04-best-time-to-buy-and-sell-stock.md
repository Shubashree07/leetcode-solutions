# Problem 4: Best Time to Buy and Sell Stock (Easy)

**LeetCode:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

**Name:** Shuba Shree G J  
**Roll Number:** R25EF258  
**Language:** C  
**Status:** Accepted

## Approach
Used a greedy approach. Track the minimum stock price seen so far.
For each day, calculate the profit by subtracting the minimum price
from the current price. Update the maximum profit whenever a better
profit is found.

## Complexity
- Time Complexity: O(n)
- Space Complexity: O(1)

## Test Cases

1. Input: [7,1,5,3,6,4]
   Output: 5

2. Input: [7,6,4,3,1]
   Output: 0

## Notes
Only one buy and one sell transaction is allowed.
The buy must happen before the sell.