# 2661. First Completely Painted Row or Column

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/first-completely-painted-row-or-column/description/?envType=daily-question&envId=2025-01-20"><strong>➥ ☢️ 2661 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `arr`, and an `m x n` integer matrix mat. `arr` and `mat` both contain all the integers in the range `[1, m * n]`.

### Go through each index `i` in `arr` starting from index `0` and paint the cell in `mat` containing the integer `arr[i]`.

### Return *the smallest index* `i` *at which either a row or a column will be completely painted in* `mat`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`  ➤ arr = [1,3,4,2], mat = [[1,4],[2,3]]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ The moves are shown in order, and both the first row and second column of the matrix become fully painted at arr[2].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input` ➤ arr = [2,8,7,4,1,3,5,6,9], mat = [[3,2,5],[1,4,6],[8,7,9]]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ The second column becomes fully painted at arr[3].

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ 

  ### 📤 `Output`  ➤ 

  ### 🔦 `Explanation`  ➤ 

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`m == mat.length`** </br>

🔹 **`n = mat[i].length`** </br>

🔹 **`arr.length == m * n`** </br>

🔹 **`1 <= m, n <= 10<sup>5</sup>** </br>

🔹 **`1 <= m * n <= 10<sup>5</sup>** </br>

🔹 **`1 <= arr[i], mat[r][c] <= m * n`** </br>

🔹 **All the integers of `arr` are unique.** </br>

🔹 **All the integers of `mat` are unique.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Matrix**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
