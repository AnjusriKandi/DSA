# [56. Merge Intervals](https://leetcode.com/problems/merge-intervals/description/)

## Approach:

### Algorithm:

1. First, we will group the closer intervals by sorting the given array of intervals(if it is not already sorted).
2. After that, we will start traversing the array using a loop(say i) and insert the first element into our answer list(as the answer list is empty).
3. Now, while traversing we will face two different cases:
     1. If the current interval can be merged with the last inserted interval of the answer list:
        
        In this case, we will update the end of the last inserted interval with the maximum(current interval’s end, last inserted interval’s end) and continue moving afterward. 
     2. If the current interval cannot be merged with the last inserted interval of the answer list:
        
        In this case, we will insert the current interval in the answer array as it is. And after this insertion, the last inserted interval of the answer list will obviously be updated to the current interval.
4. Thus the answer list will be updated with the merged intervals and finally, we will return the answer list.

### Time Complexity: n*log n+ n

### Space Complexity: 1
