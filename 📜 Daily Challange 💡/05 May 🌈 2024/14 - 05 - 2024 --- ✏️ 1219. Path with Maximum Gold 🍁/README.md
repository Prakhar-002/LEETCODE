# 1219. Path with Maximum Gold

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ 1438 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### In a gold mine grid of size m x n, each cell in this mine has an integer representing the amount of gold in that cell, 0 if it is empty.

### Return the maximum amount of gold you can collect under the conditions:

- Every time you are located in a cell you will collect all the gold in that cell.

- From your position, you can walk one step to the left, right, up, or down.

- You can't visit the same cell more than once.
Never visit a cell with `0` gold.

- You can start and stop collecting gold from any position in the grid that has some gold.
 

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ grid = [[0,6,0],[5,8,7],[0,9,0]]

  ### Output  ➤ 24

  ### Explanation  ➤ 
  [[0,6,0],
 [5,8,7],
 [0,9,0]]
Path to get the maximum gold, 9 -> 8 -> 7.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤  grid = [[1,0,7],[2,0,6],[3,4,5],[0,3,0],[9,0,20]]

  ### Output  ➤ 28

  ### Explanation ➤ 
  [[1,0,7],
 [2,0,6],
 [3,4,5],
 [0,3,0],
 [9,0,20]]
Path to get the maximum gold, 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7.


</br>

# Constraints 🔒 ˋ°•*⁀➷

- **m == grid.length**
- **n == grid[i].length**
- **1 <= m, n <= 15**
- **0 <= grid[i][j] <= 100**
- **There are at most 25 cells containing gold.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Backtracking**
3. **Matrix**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/14%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201219.%20Path%20with%20Maximum%20Gold%20%F0%9F%8D%81/%F0%9F%8D%81JAVA_1219PathWithMaximumGold.java) |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/path-with-maximum-gold/solutions/5157801/beats-99-24-of-users-with-java-only-normal-dfs-in-n-2-two-for-loops-only)  |
