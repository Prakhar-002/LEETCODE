# 861. Score After Flipping Matrix

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/score-after-flipping-matrix/?envType=daily-question&envId=2024-05-03"><strong>➥ ☢️ 861 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an m x n binary matrix grid.

### A move consists of choosing any row or column and toggling each value in that row or column (i.e., changing all `0`'s to `1`'s, and all `1`'s to `0`'s).

### Every row of the matrix is interpreted as a binary number, and the `score` of the matrix is the sum of these numbers.

### Return *the highest possible `score` after making any number of `moves` (including zero moves)*.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![861 que 1](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/1f6eb34d-eee3-4608-bada-f0164a6f52db)

  ### Input  ➤ grid = [[0,0,1,1],[1,0,1,0],[1,1,0,0]] 

  ### Output  ➤ 39

  ### Explanation  ➤ 0b1111 + 0b1001 + 0b1111 = 15 + 9 + 15 = 39

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ grid = [[0]]

  ### Output  ➤  1

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **m == grid.length**
- **n == grid[i].length**
- **1 <= m, n <= 20**
- **`grid[i][j]` is either 0 or 1.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Greedy**
3. **Bit Manipulation**
4. **Matrix**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/13%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%20861.%20Score%20After%20Flipping%20Matrix%20%F0%9F%8D%81/%F0%9F%8D%81JAVA_861_ScoreAfterFlippingMatrix.java) |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/score-after-flipping-matrix/solutions/5153013/beats-100-of-users-with-java-piecewise-func-code-lets-code)  |
