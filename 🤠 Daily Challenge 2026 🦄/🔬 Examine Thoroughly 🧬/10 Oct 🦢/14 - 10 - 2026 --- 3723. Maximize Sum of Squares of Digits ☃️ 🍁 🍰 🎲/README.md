# 3723. Maximize Sum of Squares of Digits

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximize-sum-of-squares-of-digits/description/?envType=daily-question&envId=2026-10-14"><strong>➥ ☢️ 3723 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two positive integers `num` and `sum`.

### A positive integer `n` is good if it satisfies both of the following:
- The number of digits in `n` is exactly `num`.
- The sum of digits in `n` is exactly `sum`.

### The score of a good integer `n` is the sum of the squares of digits in `n`. Return a string denoting the good integer `n` that achieves the maximum score. If there are multiple possible integers, return the maximum one. If no such integer exists, return an empty string.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`   ➤ `num = 2`, `sum = 3`

  ### 📤 `Output`  ➤ `"30"`

  ### 🔦 `Explanation`  ➤ ➺ There are 3 good integers: 12, 21, and 30.
- The score of 12 is `1^2 + 2^2 = 5`.
- The score of 21 is `2^2 + 1^2 = 5`.
- The score of 30 is `3^2 + 0^2 = 9`.
The maximum score is 9, which is achieved by the good integer 30. Therefore, the answer is `"30"`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `num = 2`, `sum = 17`

  ### 📤 `Output`  ➤ `"98"`

  ### 🔦 `Explanation` ➤ ➺ There are 2 good integers: 89 and 98.
- The score of 89 is `8^2 + 9^2 = 145`.
- The score of 98 is `9^2 + 8^2 = 145`.
The maximum score is 145. The maximum good integer that achieves this score is 98. Therefore, the answer is `"98"`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `num = 1`, `sum = 10`

  ### 📤 `Output`  ➤ `""`

  ### 🔦 `Explanation`  ➤ ➺ There are no integers that have exactly 1 digit and whose digits sum to 10. Therefore, the answer is `""`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= num <= 2 * 10^5`** </br>

🔹 **`1 <= sum <= 2 * 10^6`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math** </br>
🔸 **Greedy** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
