# 🔥🥳Beats 99.24% of users with Java🎉||✅ Only normal DFS || In ( n ^ 2)  || Two for loops only  😻😻

<h2 align="center"> 

<a href="https://leetcode.com/problems/path-with-maximum-gold/solutions/5157801/beats-99-24-of-users-with-java-only-normal-dfs-in-n-2-two-for-loops-only"><strong>➥ 💡 Live Solution On Leetcode ✒️</strong></a>
</h2>

# Screenshot 🎉
![1219.png](https://assets.leetcode.com/users/images/10435e86-c81c-4a71-b3a8-18ba4495eab3_1715699240.2757876.png)

---

# Intuition 🤔
<!-- Describe your first thoughts on how to solve this problem. -->

    It's a simple que... let me explain ---

1. We need to `collect max gold` from our `goldmine` in one go by any road . . . Yes `we are too rich ` 😂😂

2. Condition is `we can't go where is 0 gold`.

3. *We'll collect same gold which is tha value of our grid*.

4. We can walk one step to the `left, right, up, or down`.

5. `Ex.` 
    ```
        [[0,6,5],
        [5,8,7],
        [0,9,0]]

        In this grid we'll start from 
            9 -> 8 -> 7 -> 5 -> 6
                    OR
            6 -> 5 -> 7 -> 8 -> 9
        Total will be = 35
    ```

---

# Approach 😉
<!-- Describe your approach to solving the problem. -->
    Basically 2 approach we have

1. `Grid with only gold` 🤩🤩 ---

    - We'll apply `2 for loop` and add every value
    ```
        public int gridWithNoZeros(int[][] grid) {
            int gold = 0;
            for (int i = 0; i < grid.length; i++) {
                for (int j = 0; j < grid[0].length; j++) {
                    // check our goldMine contain only Gold
                    if (grid[i][j] == 0) {
                        return -1;
                    } else
                        gold += grid[i][j];
                }
            }
            return gold;
        }
    
    ```
    - In main function we'll `check for -1` else return gold

    ```
        int Gold = gridWithNoZeros(grid);
        if (Gold != -1){
            return Gold;
        }
    ```

2. `Gold but distorted` 🫤🫤 ---

    - `Main DFS theory` ...

    ```
        public int dfs(int grid[][], int row, int col) {
            return 0 
             If row is less than 0
             If row is greater than length - 1
             If col is less than 0
             If col is greater than length - 1
             If grid value is 0

            // Main work

            First we will make our grid value 0 
            because we can not go back  
            
            Take value of upmost from our DFS  ( row, col - 1 )
            Take value of rightmost from our DFS  ( row + 1, col )
            Take value of downMost from our DFS  ( row, col + 1 )
            Take value of Leftmost from our DFS  ( row - 1, col )

            Assign the main value to our grid which we had chanced

            at last take the max value from up, down, left, right 
            * add with self value and return 
        }
    ```

    - In main function we'll `apply 2 for loop` and take the max gold from every possible path.
    ```
        int maxGold = 0;

        for (int i = 0; i < grid.length; i++) {
            for (int j = 0; j < grid[0].length; j++) {
                if (grid[i][j] > 0) {
                    int gold = dfs(grid, i, j);
                    maxGold = Math.max(maxGold, gold);
                }
            }
        }
    ```

    - `Finally return maxGold`



---

# Complexity 🫡
- Best Time complexity: $$O(n^2)$$
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: $$O(1)$$
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

---
# Code 💕

JAVA
``` JAVA
class Solution {

    // Our DFS function
    public int dfs(int grid[][], int i, int j) {
        if (i < 0                       // If row is less than 0
                || i >= grid.length     // If row is greater than length - 1
                || j < 0                // If col is less than 0
                || j >= grid[0].length  // If col is greater than length - 1
                || grid[i][j] == 0) {   // If grid value is 0
            return 0;
        }

        // Store the value in a variable
        int temp = grid[i][j];

        // Assign our grid to 0 because we can't go back upword
        grid[i][j] = 0;

        int upSum = dfs(grid, i - 1, j);    // Total up sum
        int downSum = dfs(grid, i + 1, j);  // Total down sum
        int leftSum = dfs(grid, i, j + 1);  // Total left sum
        int rightSum = dfs(grid, i, j - 1); // Total right sum

        // Assign Again it's original value 
        grid[i][j] = temp;

        // Take max of all sides and add with ourself and return...
        return temp + Math.max(Math.max(Math.max(leftSum, rightSum), upSum), downSum);
    }

    // If our grid has no 0 then we can simply add all values
    public int gridWithNoZeros(int[][] grid) {
        int gold = 0;
        for (int i = 0; i < grid.length; i++) {
            for (int j = 0; j < grid[0].length; j++) {
                if (grid[i][j] == 0) {
                    return -1;
                } else
                    gold += grid[i][j];
            }
        }
        return gold;
    }

    public int getMaximumGold(int[][] grid) {

        // Grid only with gold 
        int Gold = gridWithNoZeros(grid);
        if (Gold != -1){
            return Gold;
        }

        int maxGold = 0;

        for (int i = 0; i < grid.length; i++) {
            for (int j = 0; j < grid[0].length; j++) {
                if (grid[i][j] > 0) {
                    // We'll check every posssible position from grid
                    int gold = dfs(grid, i, j);
                    maxGold = Math.max(maxGold, gold);
                }
            }
        }

        return maxGold;
    }
}
```

