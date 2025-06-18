# [229. Majority Element II](https://leetcode.com/problems/majority-element-ii/description/)
## Approach 1:

### Algorithm:
1. Sort the array nums
2. Find the cnt of each element and check if its cnt is greater than n/3
3. If yes push it onto the res array.

### Time Complexity: n log n + n

### Space Complexity: 1

## Approach 2(Boyer-Moore Majority Vote Algorithm):

### Intution:

For a number to be a majority number, its occurrence should be atleast (n/3)+1.
So if we consider 3 numbers are majority numbers the length of the nums array would be atleast 3*(n/3+1) which is greater than n.
Hence We can find atmost two majority numbers in nums.

### Algorithm:
1. Initialize majority1, majority2, count1, and count2 to track the majority elements and their counts.
2. Iterate through the input list nums to find the two majority elements.
3. Iterate through nums again to verify the counts of the two majority elements.
4. Return a list of majority elements that appear more than len(nums) // 3 times.

### Time Complexity: n + n

### Space Complexity: 1
