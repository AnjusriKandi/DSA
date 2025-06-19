# [Largest Subarray with 0 Sum](https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1)

## Approach 1:

### Algorithm:

1. Assign 0 to maxl indicating that initially maxlength is 0.
2. Run a loop i from 0 to n, where n is the size of the array arr.
3. Assign 0 to sum
4. Run another loop j from i to n (inner loop).
5. Inside the inner loop increase the sum by arr[j]
6. And check if the sum is equal to 0. If yes update the maxl.
7. Finally return maxl.

### Time Complexity: n^2

### Space Complexity: 1

## Approach 2:

### Intuition:

When we calculate the prefix sum, if there exists duplicate value exist then the sum in between is 0.

### Algorithm:

1. Assign 0 to maxl, indicating that initially max length is 0.
2. Also assign 0 to sum
3. Use an unordered map that stores two integers, where key indicates the sum and value indicates the first occurence of that sum(index). 
4. Run a loop i from 0 to n, where n is the size of the array arr.
5. Now add the current element to sum.
6. If sum==0 the update maxl to i+1;
7. Otherwise check if the sum value already exists in the map
    1. If yes, update the maxl
    2. Otherwise store the current sum with its corresponding index in the map.
8. Finally, return maxl.

### Time Complexity: n

### Space Complexity: n --- map
