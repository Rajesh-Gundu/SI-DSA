# 1266. Minimum Time Visiting All Points (Easy)

**Problem Link:** [LeetCode - Minimum Time Visiting All Points](https://leetcode.com/problems/minimum-time-visiting-all-points/)

## Description

On a 2D plane, there are `n` points with integer coordinates `points[i] = [xi, yi]`. Return the **minimum time in seconds** to visit all the points **in the order given** by the input array.

### Movement Rules:
In **1 second**, you can:
- Move **vertically** by one unit
- Move **horizontally** by one unit
- Move **diagonally** by one unit (1 unit both vertically and horizontally at the same time)

You must visit the points in the given order.  
You may **pass through** other points, but only the ones explicitly in the list count as visits.

---

## Example 1

**Input:**  
`points = [[1,1],[3,4],[-1,0]]`

**Output:**  
`7`

**Explanation:**

- Move from `[1,1]` to `[3,4]`: 3 seconds  
- Move from `[3,4]` to `[-1,0]`: 4 seconds  
- **Total time = 3 + 4 = 7 seconds**

---

## Example 2

**Input:**  
`points = [[3,2],[-2,2]]`

**Output:**  
`5`

---

## Constraints

- `points.length == n`
- `1 <= n <= 100`
- `points[i].length == 2`
- `-1000 <= points[i][0], points[i][1] <= 1000`

---

## Tags

Array, Geometry, Greedy
