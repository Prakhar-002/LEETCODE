# 2435. Paths in Matrix Whose Sum Is Divisible by K

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/paths-in-matrix-whose-sum-is-divisible-by-k/?envType=daily-question&envId=2025-11-26"><strong>➥ 🫀 2435 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed `m x n` integer matrix `grid` and an integer `k`. You are currently at position (0, 0) and you want to reach position (m - 1, n - 1) moving only down or right.

### Return the number of paths where the sum of the elements on the path is divisible by `k`. Since the answer may be very large, return it modulo 10<sup>9</sup> + 7.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="824" height="377" alt="2435 Que 1" src="https://github.com/user-attachments/assets/58981926-ee7f-4d5c-9127-2b5138099473" />

  ### 📥 `Input`  ➤ grid = [[5,2,4],[3,0,5],[0,7,2]], k = 3

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ There are two paths where the sum of the elements on the path is divisible by k.

- The first path highlighted in red has a sum of 5 + 2 + 4 + 5 + 2 = 18 which is divisible by 3.
- The second path highlighted in blue has a sum of 5 + 3 + 0 + 5 + 2 = 15 which is divisible by 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="318" height="205" alt="2435 Que 2" src="https://github.com/user-attachments/assets/5df20bf4-4d60-4c5d-a95f-35fb1434ae35" />

  ### 📥 `Input` ➤ grid = [[0,0]], k = 5

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤ The path highlighted in red has a sum of 0 + 0 = 0 which is divisible by 5.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img width="531" height="414" alt="2435 Que 3" src="https://github.com/user-attachments/assets/1bbc52f7-ed09-44a6-a6ee-e49e8f8dd2a3" />

  ### 📥 `Input` ➤ grid = [[7,3,4,9],[2,3,6,2],[2,3,7,0]], k = 1

  ### 📤 `Output`  ➤ 10

  ### 🔦 `Explanation` ➤ Every integer is divisible by 1 so the sum of the elements on every possible path is divisible by k.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 m == grid.length </br>
🔹 n == grid[i].length </br>
🔹 1 <= m, n <= 5 * 10<sup>4</sup> </br>
🔹 1 <= m * n <= 5 * 10<sup>4</sup> </br>
🔹 0 <= grid[i][j] <= 100 </br>
🔹 1 <= k <= 50 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Dynamic Programming** </br>
🔸 **Matrix** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/8ac90865-d0ed-4389-a45a-e52734e0b2a1" width = "700px" height="462px" />

</h1>
