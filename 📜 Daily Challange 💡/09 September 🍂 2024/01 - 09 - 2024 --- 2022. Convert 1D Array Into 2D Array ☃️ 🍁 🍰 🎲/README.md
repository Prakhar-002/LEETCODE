# 2022. Convert 1D Array Into 2D Array

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ 2022 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a `0-indexed` 1-dimensional (1D) integer array original, and two integers, `m` and `n`. You are tasked with creating a 2-dimensional (2D) array with  `m` rows and `n` columns using `all` the elements from original.

### The elements from indices `0` to `n - 1` (`inclusive`) of `original` should form the first row of the constructed 2D array, the elements from indices `n` to `2 * n - 1` (`inclusive`) should form the second row of the constructed 2D array, and so on.

### Return *an `m x n` 2D array constructed according to the above procedure, or an empty 2D array if it is impossible*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ original = [1,2,3,4], m = 2, n = 2

  ### 📤 `Output`  ➤ [[1,2],[3,4]]

  ### 🔦 `Explanation`  ➤ ➺The constructed 2D array should contain 2 rows and 2 columns. </br>The first group of n=2 elements in original, [1,2], becomes the first row in the constructed 2D array.</br> The second group of n=2 elements in original, [3,4], becomes the second row in the constructed 2D array.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ original = [1,2,3], m = 1, n = 3

  ### 📤 `Output`  ➤  [[1,2,3]]

  ### 🔦 `Explanation` ➤ The constructed 2D array should contain 1 row and 3 columns.</br> Put all three elements in original into the first row of the constructed 2D array.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ original = [1,2], m = 1, n = 1

  ### 📤 `Output`  ➤ []

  ### 🔦 `Explanation`  ➤ There are 2 elements in original.</br> It is impossible to fit 2 elements in a 1x1 2D array, so return an empty 2D array.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= original.length <= 5 * 10<sup>4</sup>** </br>

🔹 **1 <= original[i] <= 10<sup>5</sup>** </br>

🔹 **1 <= m, n <= 4 * 10<sup>4</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Matrix**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

