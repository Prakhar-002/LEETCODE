# 2028. Find Missing Observations

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-missing-observations/description/?envType=daily-question&envId=2024-09-05"><strong>➥ ☢️ 2028 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You have observations of `n + m` `6-sided` dice rolls with each face numbered from `1` to `6`. `n` of the observations went missing, and you only have the observations of `m` rolls. Fortunately, you have also calculated the `average value` of the `n + m` rolls.

### You are given an integer array `rolls` of length `m` where `rolls[i]` is the value of the `i-th` observation. You are also given the two integers `mean` and `n`.

### Return an array of length n containing the missing observations such that the `average value` of the `n + m` rolls is `exactly mean`. If there are multiple valid answers, return any of them. If no such array exists, return an empty array.

### The `average value` of a set of `k` numbers is the sum of the numbers divided by `k`.

### Note that `mean` is an integer, so the sum of the `n + m` rolls should be divisible by `n + m`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ rolls = [3,2,4,3], mean = 4, n = 2

  ### 📤 `Output`  ➤ [6,6]

  ### 🔦 `Explanation`  ➤ The mean of all n + m rolls is (3 + 2 + 4 + 3 + 6 + 6) / 6 = 4.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ rolls = [1,5,6], mean = 3, n = 4

  ### 📤 `Output`  ➤ [2,3,2,2]

  ### 🔦 `Explanation` ➤ The mean of all n + m rolls is (1 + 5 + 6 + 2 + 3 + 2 + 2) / 7 = 3.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ rolls = [1,2,3,4], mean = 6, n = 4

  ### 📤 `Output`  ➤  []

  ### 🔦 `Explanation`  ➤  It is impossible for the mean to be 6 no matter what the 4 missing rolls are. 

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`m == rolls.length`** </br>

🔹 **1 <= n, m <= 10<sup>5</sup>** </br>

🔹 **`1 <= rolls[i], mean <= 6`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Math**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/05%20-%2009%20-%202024%20---%202028.%20Find%20Missing%20Observations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-2028-FindMissingObservations.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/05%20-%2009%20-%202024%20---%202028.%20Find%20Missing%20Observations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-2028-FindMissingObservations.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/05%20-%2009%20-%202024%20---%202028.%20Find%20Missing%20Observations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-2028-FindMissingObservations.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/05%20-%2009%20-%202024%20---%202028.%20Find%20Missing%20Observations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-2028-FindMissingObservations.js) |

