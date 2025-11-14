# 2536. Increment Submatrices by One

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/increment-submatrices-by-one/description/?envType=daily-question&envId=2025-11-14"><strong>➥ ☢️ 2536 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a positive integer `n`, indicating that we initially have an `n x n` 0-indexed integer matrix `mat` filled with zeroes.

### You are also given a 2D integer array `query`. For each `query[i] = [row1i, col1i, row2i, col2i]`, you should do the following operation:

- Add 1 to every element in the submatrix with the top left corner `(row1i, col1i)` and the bottom right corner `(row2i, col2i)`. That is, add 1 to `mat[x][y]` for all `row1i <= x <= row2i` and `col1i <= y <= col2i`.

### Return the matrix `mat` after performing every query.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="531" height="121" alt="2536 que 1" src="https://github.com/user-attachments/assets/2e772561-17d1-471c-b7a9-f63f63f9e0ca" />

  ### 📥 `Input`  ➤ `n = 3, queries = [[1,1,2,2],[0,0,1,1]]`

  ### 📤 `Output`  ➤ `[[1,1,0],[1,2,1],[0,1,1]]`

  ### 🔦 `Explanation`  ➤ 

  - The diagram above shows the initial matrix, the matrix after the first query, and the matrix after the second query.
    - In the first query, we add 1 to every element in the submatrix with the top left corner (1, 1) and bottom right corner (2, 2).
    - In the second query, we add 1 to every element in the submatrix with the top left corner (0, 0) and bottom right corner (1, 1).

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="261" height="82" alt="2536 que 2" src="https://github.com/user-attachments/assets/147465ff-c036-48c7-aba6-09e755bc8e9f" />

  ### 📥 `Input`  ➤ `n = 2, queries = [[0,0,1,1]]`

  ### 📤 `Output`  ➤ `[[1,1],[1,1]]`

  ### 🔦 `Explanation`  ➤ 

  - The diagram above shows the initial matrix and the matrix after the first query.
    - In the first query we add 1 to every element in the matrix.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= n <= 500` </br>
🔹 `1 <= queries.length <= 10^4` </br>
🔹 `0 <= row1i <= row2i < n` </br>
🔹 `0 <= col1i <= col2i < n` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Matrix** </br>
🔸 **Prefix Sum** </br>

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

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
