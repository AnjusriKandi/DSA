# [15. 3Sum](https://leetcode.com/problems/3sum/description/)

## Optimal Approach

### Algorithm
1.Sort the array nums
2. Use for loop to traverse i from 0 to n
3. In the for loop initialize 0 to j and n-1 to k .
  3.1. Now while j<k w will check if nums[i]+nums[j]+nums[k]==sum if yes push the elements onto the set.
  3.2. If the calculated sum is less than required sum, increment j since we requie a larger element.
  3.3. Otherwise decrement k to get smaller element.
4.Now push set<vector> elements onto ans vector and return it.

### Time Complexity: n log n + n^2

### Space Complexity: n
