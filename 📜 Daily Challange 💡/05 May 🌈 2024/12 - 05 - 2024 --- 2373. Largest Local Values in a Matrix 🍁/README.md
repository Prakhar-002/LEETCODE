# 2373. Largest Local Values in a Matrix

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/largest-local-values-in-a-matrix/description/?envType=daily-question&envId=2024-05-12"><strong>➥ ♻️ 2373 Leetcode Que  Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an `n x n` integer matrix `grid`.

### Generate an integer matrix `maxLocal` of size `(n - 2) x (n - 2)` such that:

- `maxLocal[i][j]` is equal to the largest value of the `3 x 3` matrix in `grid` centered around row `i + 1` and column `j + 1`.

### In other words, we want to find the largest value in every contiguous `3 x 3` matrix in `grid`.

### Return *the generated matrix*.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![2373 que 1](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/55f4bfa5-4255-4c7d-9d85-e225f58d5b2f)

  ### Input  ➤ grid = [[9,9,8,1],[5,6,2,6],[8,2,6,4],[6,2,2,2]]

  ### Output  ➤  [[9,9],[8,6]]

  ### Explanation  ➤ The diagram above shows the original matrix and the generated matrix. </br> Notice that each value in the generated matrix corresponds to the largest value of a contiguous 3 x 3 matrix in grid.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![2373 que 2](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/aa0c211c-2e39-4269-9bb5-964f215b2c0e)

  ### Input ➤  grid = [[1,1,1,1,1],[1,1,1,1,1],[1,1,2,1,1],[1,1,1,1,1],[1,1,1,1,1]]

  ### Output  ➤ [[2,2,2],[2,2,2],[2,2,2]]

  ### Explanation ➤  Notice that the 2 is contained within every contiguous 3 x 3 matrix in grid.


</br>

# Constraints 🔒 ˋ°•*⁀➷

- **n == grid.length == grid[i].length**
- **3 <= n <= 100**
- **1 <= grid[i][j] <= 100**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Matrix**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/12%20-%2005%20-%202024%20---%202373.%20Largest%20Local%20Values%20in%20a%20Matrix%20%F0%9F%8D%81/%F0%9F%8D%81JAVA_2373_LargestLocalValuesInAMatrix.java) |