# [1781. Sum of Beauty of All Substrings](https://leetcode.com/problems/sum-of-beauty-of-all-substrings/description/)

## Approach:

### Algorithm:

1. Run two loops i from 0 to n-1 and j from i+1 to n
2. Here i states the starting index and j states ending index of the substring.
3. For each substring update the maximum and minimum frequencies and find the beauty of the substring
4. Now add the beauty to the ans.
5. Return ans.

### Time Complexity: n*n

### Space Complexity: n --- To store the frequencies.
