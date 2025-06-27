# [Fractional Knapsack](https://www.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1)

## Approach:

### Algorithm:

1. Calculate the ratio (profit/weight) for each item.
2. Sort all the items in decreasing order of the ratio.
3. Initialize res = 0, current capacity= given capacity.
4. Do the following for every item i in the sorted order:
    1. If the weight of the current item is less than or equal to the remaining capacity then add the value of that item into the result
    2. Else add the current item as much as we can and break out of the loop.
5. Return res.

### Time Complexity: n log n + n

### Space Complexity: n
