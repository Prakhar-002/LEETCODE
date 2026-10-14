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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/14%20-%2010%20-%202026%20---%203723.%20Maximize%20Sum%20of%20Squares%20of%20Digits%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203723.%20Maximize%20Sum%20of%20Squares%20of%20Digits.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/14%20-%2010%20-%202026%20---%203723.%20Maximize%20Sum%20of%20Squares%20of%20Digits%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203723.%20Maximize%20Sum%20of%20Squares%20of%20Digits.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/14%20-%2010%20-%202026%20---%203723.%20Maximize%20Sum%20of%20Squares%20of%20Digits%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203723.%20Maximize%20Sum%20of%20Squares%20of%20Digits.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/14%20-%2010%20-%202026%20---%203723.%20Maximize%20Sum%20of%20Squares%20of%20Digits%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203723.%20Maximize%20Sum%20of%20Squares%20of%20Digits.js) |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/maximize-sum-of-squares-of-digits/solutions/8572793/leetcode-daily-grind-java-c-python-javas-g157) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/02b83064-6b56-4283-a65c-1629d2bfd362" width = "700px" height="462px" />

</h1>
