# [1482. Minimum Number of Days to Make m Bouquets](https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/)

## Approach 1:

### Intuition:
We will be checking if the no. of boquets that were formed on ith day were >= m. If yes we will be taking the minimum number of days required.
Here, we will be searching linearly between minimum and maximum of the bloomDay array. 
### Algorithm:
1. If m*k > arr.size: This means we have insufficient flowers. So, it is impossible to make m bouquets and we will return -1.
2. We will run a loop(say i) from min(arr[]) to max(arr[]) to check all possible answers.
3. Next, we will pass each potential answer, represented by the variable 'i' (which corresponds to a specific day), to the 'possible()' function. If the function returns true, indicating that we can create 'm' bouquets, we will return the value of 'i'.
4. Finally, if we are outside the loop, we can conclude that is impossible to make m bouquets. So, we will return -1.

### Time Complexity: (max(arr)-min(arr)+1)*n

### Space Complexity: 1

## Approach 2:

### Intuition:
For the Approach 1, instead of linear search we will be applying binary search on the days with low=min(arr[]) and high=max(arr[])

### Time Complexity: log (max(arr[])-min(arr[])+1)*n

### Space Complexity: 1
