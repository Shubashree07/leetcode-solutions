# Problem 1: Two Sum

**LeetCode:** [Two Sum](https://leetcode.com/problems/two-sum/)

- **Difficulty:** Easy
- **Language:** C
- **Status:** Accepted
- **Local Testing:** Passed 2 test cases

## Problem Description

Given an array of integers and a target value, return the indices of the two numbers whose sum equals the target.

## Approach

Used a hash table with open addressing.

1. Traverse the array.
2. Calculate the complement (`target - nums[i]`).
3. Search for the complement in the hash table.
4. If found, return the stored index and current index.
5. Otherwise, store the current number and its index.

## Complexity Analysis

- **Time Complexity:** Expected O(N)
- **Space Complexity:** O(N)

## Test Cases

| Input | Expected Output | Result |
|---|---|---|
| nums = [2,7,11,15], target = 9 | [0,1] | Passed |
| nums = [3,3], target = 6 | [0,1] | Passed |

## Key Learning

Learned how hash tables improve lookup efficiency compared with a nested-loop approach. Also understood how to handle duplicate values.
