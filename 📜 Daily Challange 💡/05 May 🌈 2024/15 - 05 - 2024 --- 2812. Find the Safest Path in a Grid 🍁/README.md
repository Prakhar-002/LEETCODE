# 2812. Find the Safest Path in a Grid

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-safest-path-in-a-grid/?envType=daily-question&envId=2024-05-03"><strong>➥ ☢️ 2812 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a `0-indexed` 2D matrix `grid` of size `n x n`, where `(r, c)` represents:

- A cell containing a thief if `grid[r][c] = 1`

- An empty cell if `grid[r][c] = 0`

### You are initially positioned at cell `(0, 0)`. In one move, you can move to any adjacent cell in the grid, including cells containing thieves.

### The `safeness factor` of a path on the grid is defined as the `minimum` manhattan distance from any cell in the path to any thief in the grid.

### Return *the `maximum safeness factor` of all paths leading to cell `(n - 1, n - 1)`*.

### An adjacent cell of cell `(r, c)`, is one of the cells `(r, c + 1)`, `(r, c - 1)`, `(r + 1, c)` and `(r - 1, c)` if it exists.

### The `Manhattan distance` between two cells `(a, b)` and `(x, y)` is equal to `|a - x| + |b - y|`, where `|val|` denotes the absolute value of val.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![2812 que 1](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/bc33c6f4-a220-4203-ac6b-333674b54cb8)

  ### Input  ➤ grid = [[1,0,0],[0,0,0],[0,0,1]]

  ### Output  ➤ 0

  ### Explanation  ➤ All paths from (0, 0) to (n - 1, n - 1) go through the thieves in cells (0, 0) and (n - 1, n - 1). 

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![2812 que 2](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/b2269cf2-059c-4fe5-931e-11e60d037447)

  ### Input ➤ grid = [[0,0,1],[0,0,0],[0,0,0]]

  ### Output  ➤ 2

  ### Explanation ➤ The path depicted in the picture above has a safeness factor of 2 since: </br> - The closest cell of the path to the thief at cell (0, 2) is cell (0, 0). The distance between them is | 0 - 0 | + | 0 - 2 | = 2. </br> It can be shown that there are no other paths with a higher safeness factor.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

![2812 que 3](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/cc02b3cc-c97f-4211-809b-7f7ffd0bb1f0)

  ### Input ➤ grid = [[0,0,0,1],[0,0,0,0],[0,0,0,0],[1,0,0,0]]

  ### Output  ➤ 2

  ### Explanation  ➤ The path depicted in the picture above has a safeness factor of 2 since: </br> - The closest cell of the path to the thief at cell (0, 3) is cell (1, 2). The distance between them is | 0 - 1 | + | 3 - 2 | = 2. </br> - The closest cell of the path to the thief at cell (3, 0) is cell (3, 2). The distance between them is | 3 - 3 | + | 0 - 2 | = 2. </br> It can be shown that there are no other paths with a higher safeness factor.

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= grid.length == n <= 400**
- **`grid[i]`.length == n**
- **`grid[i][j]` is either 0 or 1.**
- **There is at least one thief in the `grid`.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Binary Search**
3. **Breadth-First Search**
4. **Union Find**
5. **Matrix**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/15%20-%2005%20-%202024%20---%202812.%20Find%20the%20Safest%20Path%20in%20a%20Grid%20%F0%9F%8D%81/%F0%9F%8D%81JAVA_2812_FindTheSafestPathInAGrid.java) |