# 1833. Maximum Ice Cream Bars

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-ice-cream-bars/description/?envType=daily-question&envId=2026-06-21"><strong>➥ ☢️ 1833 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### It is a sweltering summer day, and a boy wants to buy some ice cream bars.
### At the store, there are `n` ice cream bars. You are given an array `costs` of length `n`, where `costs[i]` is the **price** of the `ith` ice cream bar in coins. The boy initially has `coins` coins to spend, and he wants to buy as **many ice cream bars as possible**.
### **Note:** The boy can buy the ice cream bars in **any order**.
### Return the **maximum number** of ice cream bars the boy can buy with `coins` coins.
### **You must solve the problem by counting sort.**

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ costs = [1,3,2,4,1], coins = 7
  ### 📤 `Output`  ➤ 4
  ### 🔦 `Explanation`  ➤ The boy can buy ice cream bars at indices `0, 1, 2, 4` for a total price of `1 + 3 + 2 + 1 = 7`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ costs = [10,6,8,7,7,8], coins = 5
  ### 📤 `Output`  ➤ 0
  ### 🔦 `Explanation` ➤ The boy **cannot afford** any of the ice cream bars, since all costs exceed `5`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ costs = [1,6,3,1,2,5], coins = 20
  ### 📤 `Output`  ➤ 6
  ### 🔦 `Explanation` ➤ The boy can buy **all** the ice cream bars for a total price of `1 + 6 + 3 + 1 + 2 + 5 = 18`, which is within his budget of `20`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `costs.length == n` </br>
🔹 `1 <= n <= 10^5` </br>
🔹 `1 <= costs[i] <= 10^5` </br>
🔹 `1 <= coins <= 10^8` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Greedy** </br>
🔸 **Sorting** </br>
🔸 **Counting Sort** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/21%20-%2004%20-%202025%20---%201833.%20Maximum%20Ice%20Cream%20Bars%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201833.%20Maximum%20Ice%20Cream%20Bars.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/21%20-%2004%20-%202025%20---%201833.%20Maximum%20Ice%20Cream%20Bars%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201833.%20Maximum%20Ice%20Cream%20Bars.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/21%20-%2004%20-%202025%20---%201833.%20Maximum%20Ice%20Cream%20Bars%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201833.%20Maximum%20Ice%20Cream%20Bars.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/21%20-%2004%20-%202025%20---%201833.%20Maximum%20Ice%20Cream%20Bars%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-1833.%20Maximum%20Ice%20Cream%20Bars%20.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/31a22b55-ea84-4f2e-8df0-012711c0c43d" width = "700px" height="462px" />

</h1>
