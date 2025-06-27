# [55. Jump Game](https://leetcode.com/problems/jump-game/description/)

## Approach:

### Intuition:
The key idea is to make the best possible choice at each step without considering the overall problem.

We keep track of the farthest position we can reach at any point in time.We iterate over the array and keep making the greedy choice of reaching the farthest by comparing if the current index can be reached by the previous indices or not.

If we reach an index that is beyond the farthest position we can reach, we return false. Else, we keep updating the farthest position with the maximum index we can reach from the current index.

### Approach
Step 1: Initialize maxInd to keep track of the farthest point we can reach from the start.
Step 2: While traversing the array, check if current index is reachable or not.
Step 2.1: If it is not reachable, return false.
Step 2.2: Otherwise, update the maxInd with the max reachable point.
Step 3: If traversing through the entire array is successful, return true

### Complexity
- Time complexity:
O(n) -- To traverse through the array

- Space complexity:
O(1)
