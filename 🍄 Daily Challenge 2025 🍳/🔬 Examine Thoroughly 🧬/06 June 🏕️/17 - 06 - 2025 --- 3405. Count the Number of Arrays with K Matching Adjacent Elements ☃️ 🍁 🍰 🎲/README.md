# 3405. Count the Number of Arrays with K Matching Adjacent Elements

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-the-number-of-arrays-with-k-matching-adjacent-elements/description/?envType=daily-question&envId=2025-06-17"><strong>➥ 🫀 3405 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given three integers: `n`, `m`, and `k`. You need to count the number of "good" arrays of size `n`, defined as follows:

1. Each element in the array must be within the inclusive range `[1, m]`.
2. Exactly `k` indices `i` (where `1 <= i < n`) must satisfy the condition `arr[i - 1] == arr[i]`. In other words, there must be exactly `k` instances where adjacent elements are equal.

### Your task is to return the number of such good arrays.  Since the answer may be very large, return the result modulo 10<sup>9</sup> + 7 (i.e., 1000000007).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 3, m = 2, k = 1

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ There are 4 good arrays. They are [1, 1, 2], [1, 2, 2], [2, 1, 1] and [2, 2, 1].</br> Hence, the answer is 4.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 4, m = 2, k = 2

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation` ➤ The good arrays are [1, 1, 1, 2], [1, 1, 2, 2], [1, 2, 2, 2], [2, 1, 1, 1], [2, 2, 1, 1] and [2, 2, 2, 1]. </br> Hence, the answer is 6.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 5, m = 2, k = 0

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ The good arrays are [1, 2, 1, 2, 1] and [2, 1, 2, 1, 2]. Hence, the answer is 2.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= n <= 10<sup>5</sup> </br>

🔹 1 <= m <= 10<sup>5</sup> </br>

🔹 0 <= k <= n - 1 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>

🔸 **Combinatorics**  </br>

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

<img src ="" width = "700px" height="462px" />

</h1>
