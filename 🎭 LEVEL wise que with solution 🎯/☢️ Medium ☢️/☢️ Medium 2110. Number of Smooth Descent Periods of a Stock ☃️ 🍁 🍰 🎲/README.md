# 2110. Number of Smooth Descent Periods of a Stock

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/number-of-smooth-descent-periods-of-a-stock/description/"><strong>➥ ☢️ 2110 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array prices representing the daily price history of a stock, where prices[i] is the stock price on the ith day.

### A smooth descent period of a stock consists of one or more contiguous days such that the price on each day is lower than the price on the preceding day by exactly 1. The first day of the period is exempted from this rule.

### Return the number of smooth descent periods.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `prices = [3,2,1,4]`

  ### 📤 `Output`  ➤ `7`

  ### 🔦 `Explanation`  ➤ There are 7 smooth descent periods:
  ### [3], [2], [1], [4], [3,2], [2,1], and [3,2,1]
  ### Note that a period with one day is a smooth descent period by the definition.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `prices = [8,6,7,7]`

  ### 📤 `Output`  ➤ `4`

  ### 🔦 `Explanation` ➤ There are 4 smooth descent periods: [8], [6], [7], and [7]
  ### Note that [8,6] is not a smooth descent period as 8 - 6 ≠ 1.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `prices = [1]`

  ### 📤 `Output`  ➤ `1`

  ### 🔦 `Explanation` ➤ There is 1 smooth descent period: [1]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= prices.length <= 105` </br>
🔹 `1 <= prices[i] <= 105` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Math** </br>
🔸 **Dynamic Programming** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202110.%20Number%20of%20Smooth%20Descent%20Periods%20of%20a%20Stock%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202110.%20Number%20of%20Smooth%20Descent%20Periods%20of%20a%20Stock.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202110.%20Number%20of%20Smooth%20Descent%20Periods%20of%20a%20Stock%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202110.%20Number%20of%20Smooth%20Descent%20Periods%20of%20a%20Stock.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202110.%20Number%20of%20Smooth%20Descent%20Periods%20of%20a%20Stock%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202110.%20Number%20of%20Smooth%20Descent%20Periods%20of%20a%20Stock.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202110.%20Number%20of%20Smooth%20Descent%20Periods%20of%20a%20Stock%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202110.%20Number%20of%20Smooth%20Descent%20Periods%20of%20a%20Stock.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/8a427a2a-ddaa-47f8-bbc2-d81be2541462" width = "700px" height="462px" />

</h1>
