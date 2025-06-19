## [118. Pascal's Triangle](https://leetcode.com/problems/pascals-triangle/description/)
## Approach 1:

### Algorithm:
1. Traverse through the each row and column
2. The value at row r and col c will be
     val=(r-1)C(c-1)
3. To find the val we have two ways:
    1. val=n!/r!*(n-r)!  --- But doing this is extreme bruteforce and would result in very long values also increases time complexity
  
    2. Another way would be val= n*(n-1)*(n-2)...*(n-r+1)/1*2*3*..r. --- Optimal way among the 2 ways described.
  
### Time Complexity: r^3

### Space Complexity: 1

## Approach 2:

### Algorithm:
1. First, we will run a loop i from 1 to r(For row)
2. In the loop manually insert 1 in temp array.
3. Also initialise val to 1.
4. Now run another loop j from 1 to (i-1)
5. To calculate the val use:
     val=val*(i-j)/j
6. Now push this val into temp.
7. Outside the inner loop insert the temp into ans vector.
8. Return ans vector.

### Time Complexity: r^2

### Space Complexity: 1
