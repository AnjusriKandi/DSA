# [1903. Largest Odd Number in String](https://leetcode.com/problems/largest-odd-number-in-string/description/)

## Approach 1:

### Intuition:

For each substring possible, check if the last digit is odd.
In such substrings, answer will be the substring with maximum length.

### Algorithm:

1. Run a loop i from 0 to n-1
2. Run a loop j from i to n-1
3. For a substring from the index i to j
    1. Check if the digit at last index is odd && length of the substring is greater than that of the previously generated possible answer. If yes update the ans.
4. Return ans.

### Time Complexity: n^2

### Space Complexity: 1

## Approach 2:

### Algorithm: 

1. From the last, find the index(say i) of first occurrence of first odd digit.
2. The answer will be the substring from 0 to i.

### Time Complexity: n

### Space Complexity: 1
