# 🔥💯Beats 100% of users with Java🎉||✅ Piecewise func code || Lets CODE🎉🎊

<h2 align="center"> 

<a href="https://leetcode.com/problems/score-after-flipping-matrix/solutions/5153013/beats-100-of-users-with-java-piecewise-func-code-lets-code"><strong>➥ 💡 Live Solution On Leetcode ✒️</strong></a>
</h2>

# Screenshot 🎉
![861.png](https://assets.leetcode.com/users/images/ef1c7e30-cc38-4e76-b9cb-b8eaf456b545_1715610889.2153702.png)


---


# Intuition 🤔
<!-- Describe your first thoughts on how to solve this problem. -->
1. We need to `maximinze the binary number` that is `present in every one Row`.

    - `Catch` is this we can only `flip` the `whole Row or Col`.
    - `Flip means` -- convert `all 0 to 1` & convert `all 1 to 0`.

2. Finally `convert every binary number present in row` to number and `return` the `some of nums `.

---


# Approach 🫰
<!-- Describe your approach to solving the problem. -->
1. To maximize the binary of `n bit` ... There is only way to convert it's `first bit to 1`.
    `Ex.` max of `0110` acc to que will be `1001`

2. So we'll `convert every first 0 of every row to 1`. 

3. To maximize the col --- `We'll count number of 1 in every col`
4. `If ones will less then half of total col length`.
5. We'll `flip the col`.

---

# Func Wise Solution 🔥
    We'll make some functions -->

#### Remember this 😎
    
    // grid[0].length == Total Cols (Goes Horizontal)
    // grid.length == Total Rows (Goes Vertical)


1. **To** `flip our Row`.

    - Convert 0 to  1 and 1 to 0 like --
    `
        grid[row][j] = grid[row][j] == 0 ? 1 : 0;
    `
    ```
    public void flipRow(int grid[][], int row) {
        for (int j = 0; j < grid[0].length; j++) {
            // Or sub the value by 1 
            grid[row][j] = 1 - grid[row][j];
        }
    }
    ```

2. **To** `flip our Col`.

    - Convert 0 to  1 and 1 to 0 like --
    `
        grid[i][col] = grid[i][col] == 0 ? 1 : 0;
    `
    ```
    public void flipCol(int grid[][], int col) {
        for (int i = 0; i < grid.length; i++) {
            grid[i][col] = 1 - grid[i][col];
        }
    }

    ```

3. **To** `count No. of one in a col`.

    `Gives us Total no. of one in our col`

    ```
    public int countOneInCol(int grid[][], int col) {
        int countOne = 0;
        for (int i = 0; i < grid.length; i++) {
            if (grid[i][col] == 1) {
                countOne++;
            }
        }
        return countOne;
    }

    ```

4. **To** `convert our row's binary value to digit`.


    ```
    public int convertRowToNum(int row[]) {
        int num = 0;
        for (int i = 0; i < row.length; i++) {
            num = num * 2 + row[i];
        }

        return num;
    }

    ```

#### Main Func 😇 -->
    Now we'll write our main function from here-->

1. *First* `convert every first number of 1st col to one`.
    
    ```
    for (int i = 0; i < grid.length; i++) {
        if (grid[i][0] == 0) {
            flipRow(grid, i);
        }
    }
    ```

2. *Check* `the every col for no. of one`.
    
    ```
    for (int j = 1; j < grid[0].length; j++) {
        int countOneInCol = countOneInCol(grid, j);

        // If no. of one is less than twice of total length
        if (countOneInCol * 2 < grid.length) {
            // Flip the col
            flipCol(grid, j);
        }
    }
    ```

3. *Convert* `every row to binary and add the number`.
    
    ```
    int totalSum = 0;
    for (int j = 0; j < grid.length; j++) {
        totalSum += convertRowToNum(grid[j]);
    }
    ```

4. `Return the totalSum`.


---



# Complexity 😒
- Time complexity: $$O(n^2)$$
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: $$O(1)$$
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

---

# Code 💖

JAVA
``` JAVA
class Solution {

    // Flip Row's one to zero and Zero to one
    public void flipRow(int grid[][], int row) {
        for (int j = 0; j < grid[0].length; j++) {
            // grid[row][j] = grid[row][j] == 0 ? 1 : 0;
            grid[row][j] = 1 - grid[row][j];
        }
    }

    // Flip col's one to zero and Zero to one
    public void flipCol(int grid[][], int col) {
        for (int i = 0; i < grid.length; i++) {
            // grid[i][col] = grid[i][col] == 0 ? 1 : 0;
            grid[i][col] = 1 - grid[i][col];
        }
    }

    // To count No. of one in a col
    public int countOneInCol(int grid[][], int col) {
        int countOne = 0;
        for (int i = 0; i < grid.length; i++) {
            if (grid[i][col] == 1) {
                countOne++;
            }
        }
        return countOne;
    }

    // Method to convert array to a number
    public int convertRowToNum(int row[]) {
        int num = 0;
        for (int i = 0; i < row.length; i++) {
            num = num * 2 + row[i];
        }

        return num;
    }

    // Main Function
    public int matrixScore(int[][] grid) {

        // Ensure first digit of every row is one
        for (int i = 0; i < grid.length; i++) {
            if (grid[i][0] == 0) {
                // Convert every row's first no. to one
                flipRow(grid, i);
            }
        }

        // Check the every col for no. of one
        for (int j = 1; j < grid[0].length; j++) {
            int countOneInCol = countOneInCol(grid, j);

            if (countOneInCol * 2 < grid.length) {
                flipCol(grid, j);
            }
        }

        // Convert every row to binary and add the number
        int totalSum = 0;
        for (int j = 0; j < grid.length; j++) {
            totalSum += convertRowToNum(grid[j]);
        }

        return totalSum;
    }
}
```

---

![up.jpg](https://assets.leetcode.com/users/images/2d661ca4-6ee3-4420-886b-a6cd1653b510_1715613426.5460658.jpeg)

