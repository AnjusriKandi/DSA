# [1283. Find the Smallest Divisor Given a Threshold](https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/)

## Approach:

### Algorithm:

1. Try different divisors starting from 1 up to the largest number in the list using the binary search.
2. For each divisor, calculate:
    1. For every number in the list, divide it by that divisor, round up, and add to a total sum.

3. If that total sum is too big, try a larger divisor.
4. If the sum is within the threshold, try a smaller one to see if you can do even better.
5. Keep going until you find the smallest possible divisor that keeps the sum within the allowed limit.

### Time Complexity: (log max(nums[]))*n

### Space Complexity: 1
