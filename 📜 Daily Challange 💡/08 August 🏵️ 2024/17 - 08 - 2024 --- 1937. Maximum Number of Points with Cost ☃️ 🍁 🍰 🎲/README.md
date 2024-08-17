# 1937. Maximum Number of Points with Cost

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-number-of-points-with-cost/description/?envType=daily-question&envId=2024-08-17"><strong>➥ ☢️ 1937 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an `m x n` integer matrix `points (0-indexed)`. Starting with `0` points, you want to `maximize` the number of points you can get from the matrix.

### To gain points, you must pick one cell in each row. Picking the cell at coordinates `(r, c)` will add `points[r][c]` to your score.

### However, you will lose points if you pick a cell too far from the cell that you picked in the previous row. For every two adjacent rows `r` and `r + 1` (where `0 <= r < m - 1`), picking cells at coordinates `(r, c1)` and `(r + 1, c2)` will subtract `abs(c1 - c2)` from your score.

### Return *the `maximum` number of points you can achieve*.

### `abs(x)` is defined as:

- x for x >= 0.

- -x for x < 0.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  points = [[1,2,3],[1,5,1],[3,1,1]]

  ### 📤 `Output`  ➤  9

  ### 🔦 `Explanation`  ➤ ➺

    The blue cells denote the optimal cells to pick, 
    which have coordinates (0, 2), (1, 1), and (2, 0).

    You add 3 + 5 + 3 = 11 to your score.
    However, you must subtract abs(2 - 1) + abs(1 - 0) = 2 
    from your score.

    Your final score is 11 - 2 = 9.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ points = [[1,5],[2,3],[4,2]]

  ### 📤 `Output`  ➤  11

  ### 🔦 `Explanation` ➤ 

    The blue cells denote the optimal cells to pick, which have coordinates (0, 1), (1, 1), and (2, 0).
    
    You add 5 + 3 + 4 = 12 to your score.

    However, you must subtract abs(1 - 1) + abs(1 - 0) = 1
    from your score.

    Your final score is 12 - 1 = 11.


</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`m == points.length`** </br>

🔹 **`n == points[r].length`** </br>

🔹 **1 <= m, n <= 10<sup>5</sup>** </br>

🔹 **1 <= m * n <= 10<sup>5</sup>** </br>

🔹 **0 <= points[r][c] <= 10<sup>5</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Dynamic Programming**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

