# 2698. Find the Punishment Number of an Integer

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-punishment-number-of-an-integer/description/?envType=daily-question&envId=2025-02-15"><strong>➥ ☢️ 2698 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a positive integer `n`, return the `punishment number` of n.

### The punishment number of `n` is defined as the sum of the squares of all integers `i` such that:

- `1 <= i <= n`

- The decimal representation of `i * i` can be partitioned into contiguous substrings such that the sum of the integer values of these substrings equals `i`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`  ➤ n = 10

  ### 📤 `Output`  ➤ 182

  ### 🔦 `Explanation`  ➤  </br></br> There are exactly 3 integers i in the range [1, 10] that satisfy the conditions in the statement:</br></br>➺ 1 since 1 * 1 = 1</br></br>➺ 9 since 9 * 9 = 81 and 81 can be partitioned into 8 and 1 with a sum equal to 8 + 1 == 9.</br></br>➺ 10 since 10 * 10 = 100 and 100 can be partitioned into 10 and 0 with a sum equal to 10 + 0 == 10.</br></br> Hence, the punishment number of 10 is 1 + 81 + 100 = 182

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 37

  ### 📤 `Output`  ➤ 1478

  ### 🔦 `Explanation` ➤ </br></br> There are exactly 4 integers i in the range [1, 37] that satisfy the conditions in the statement:</br></br> ➺ 1 since 1 * 1 = 1. </br></br> ➺ 9 since 9 * 9 = 81 and 81 can be partitioned into 8 + 1. </br></br> ➺ 10 since 10 * 10 = 100 and 100 can be partitioned into 10 + 0. </br></br> ➺ 36 since 36 * 36 = 1296 and 1296 can be partitioned into 1 + 29 + 6.</br></br> Hence, the punishment number of 37 is 1 + 81 + 100 + 1296 = 1478

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= n <= 1000`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>
🔸 **Backtracking**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
