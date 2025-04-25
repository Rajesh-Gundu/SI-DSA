# 1365. How Many Numbers Are Smaller Than the Current Number (Easy)

**Problem Link:** [LeetCode - How Many Numbers Are Smaller Than the Current Number](https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/)

## Description

Given the array `nums`, for each `nums[i]`, find out how many numbers in the array are smaller than it.

That is, for each `nums[i]`, count the number of valid `j`'s such that `j != i` and `nums[j] < nums[i]`.

Return the answer in an array.

---

## Example 1

**Input:**  
`nums = [8, 1, 2, 2, 3]`

**Output:**  
`[4, 0, 1, 1, 3]`

**Explanation:**

- `nums[0] = 8` → smaller: [1, 2, 2, 3] → 4 numbers  
- `nums[1] = 1` → smaller: [] → 0 numbers  
- `nums[2] = 2` → smaller: [1] → 1 number  
- `nums[3] = 2` → smaller: [1] → 1 number  
- `nums[4] = 3` → smaller: [1, 2, 2] → 3 numbers

---

## Example 2

**Input:**  
`nums = [6, 5, 4, 8]`

**Output:**  
`[2, 1, 0, 3]`

---

## Example 3

**Input:**  
`nums = [7, 7, 7, 7]`

**Output:**  
`[0, 0, 0, 0]`

---

## Constraints

- `2 <= nums.length <= 500`
- `0 <= nums[i] <= 100`

---

## Tags

Array, Hash Table, Counting, Sorting
