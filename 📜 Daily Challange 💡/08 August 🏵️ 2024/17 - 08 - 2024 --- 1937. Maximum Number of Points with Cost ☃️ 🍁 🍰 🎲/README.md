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

![1937 que 1](https://github.com/user-attachments/assets/bdaa4f9a-42da-4293-96e1-3b11751ac451)

  ### 📥 `Input`  ➤  points = [[1,2,3],[1,5,1],[3,1,1]]

  ### 📤 `Output`  ➤  9

  ### 🔦 `Explanation`  ➤ 

    The blue cells denote the optimal cells to pick, 
    which have coordinates (0, 2), (1, 1), and (2, 0).

    You add 3 + 5 + 3 = 11 to your score.
    However, you must subtract abs(2 - 1) + abs(1 - 0) = 2 
    from your score.

    Your final score is 11 - 2 = 9.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![1937 que 2](https://github.com/user-attachments/assets/1d25f312-8406-4d75-9b2a-c1c6438787a8)

  ### 📥 `Input` ➤ points = [[1,5],[2,3],[4,2]]

  ### 📤 `Output`  ➤  11

  ### 🔦 `Explanation` ➤ 

    The blue cells denote the optimal cells to pick, 
    which have coordinates (0, 1), (1, 1), and (2, 0).
    
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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/17%20-%2008%20-%202024%20---%201937.%20Maximum%20Number%20of%20Points%20with%20Cost%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-1937-MaximumNumberOfPointsWithCost.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/17%20-%2008%20-%202024%20---%201937.%20Maximum%20Number%20of%20Points%20with%20Cost%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-1937-MaximumNumberOfPointsWithCost.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/17%20-%2008%20-%202024%20---%201937.%20Maximum%20Number%20of%20Points%20with%20Cost%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-1937-MaximumNumberOfPointsWithCost.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/17%20-%2008%20-%202024%20---%201937.%20Maximum%20Number%20of%20Points%20with%20Cost%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-1937-MaximumNumberOfPointsWithCost.js) |

