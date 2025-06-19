# [Count number of subarrays with given xor K](https://www.geeksforgeeks.org/problems/count-subarray-with-given-xor/1)

## Approach 1:

### Algorithm:

1. Run a loop i from 0 to n.
2. Assign curr to 0, which indicates the xor.
3. Run a loop j from i to n.
4. Find the curr xor by curr ^= arr[j].
5. Check if this curr == k, if yes increment the cnt value.
6. Return cnt.

### Time Complexity: n^2

### Space Complexity: 1


## Approach 2:

### Algorithm:

1. First, we will declare a map to store the prefix XORs and their counts.
2. Then, we will set the value of 0 as 1 on the map.
3. Then we will run a loop(say i) from index 0 to n-1(n = size of the array).
4. For each index i, we will do the following:
    1. We will XOR the current element i.e. arr[i] to the existing prefix XOR.
    2. Then we will calculate the prefix XOR i.e. xr^k, for which we need the occurrence.
    3. We will add the occurrence of the prefix XOR xr^k i.e. mpp[xr^k] to our answer.
    4. Then we will store the current prefix XOR, xr in the map increasing its occurrence by 1.

### Question: Why do we need to set the value of 0 beforehand?
Assume the given array is [3, 3, 1, 1, 1] and k is 3. Now, for index 0, we get the total prefix XOR as 3, and k is also 3. So, the prefix XOR xr^k will be = 3^3 = 0. Now, if the value is not previously set for the key 0 in the map, we will get the default value 0 and we will add 0 to our answer. This will mean that we have not found any subarray with XOR 3 till now. But this should not be the case as index 0 itself is a subarray with XOR k i.e. 3.
So, in order to avoid this situation we need to set the value of 0 as 1 on the map beforehand.

### Time Complexity: n

### Space Complexity: n --- map
