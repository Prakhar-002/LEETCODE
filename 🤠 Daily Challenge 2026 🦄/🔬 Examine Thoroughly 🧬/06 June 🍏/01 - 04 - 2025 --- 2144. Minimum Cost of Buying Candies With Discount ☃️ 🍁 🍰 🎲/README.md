# 2144. Minimum Cost of Buying Candies With Discount

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/description/?envType=daily-question&envId=2026-06-01"><strong>➥ ♻️ 2144 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### A shop is selling candies at a discount. For every **two candies sold**, the shop gives a **third candy for free**.
### The customer can choose any candy to take away for free as long as the cost of the chosen candy is **less than or equal to the minimum cost** of the two candies bought.
### &nbsp;&nbsp;&nbsp;&nbsp;• For example, if there are `4` candies with costs `1`, `2`, `3`, and `4`, and the customer buys candies with costs `2` and `3`, they can take the candy with cost `1` for free, but **not** the candy with cost `4`.
### Given a 0-indexed integer array `cost`, where `cost[i]` denotes the cost of the `ith` candy, return the **minimum cost** of buying all the candies.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ cost = [1,2,3]
  ### 📤 `Output`  ➤ 5
  ### 🔦 `Explanation`  ➤ Buy candies with costs `2` and `3`, take candy with cost `1` for free. Total cost = `2 + 3 = 5`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ cost = [6,5,7,9,2,2]
  ### 📤 `Output`  ➤ 23
  ### 🔦 `Explanation` ➤ Buy `9` and `7`, get `6` free. Buy `5` and `2`, get `2` free. Minimum total cost = `9 + 7 + 5 + 2 = 23`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ cost = [5,5]
  ### 📤 `Output`  ➤ 10
  ### 🔦 `Explanation` ➤ Since there are only **2 candies**, we buy both. There is no third candy to take for free. Total cost = `5 + 5 = 10`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= cost.length <= 100` </br>
🔹 `1 <= cost[i] <= 100` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Greedy** </br>
🔸 **Sorting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/01%20-%2004%20-%202025%20---%202144.%20Minimum%20Cost%20of%20Buying%20Candies%20With%20Discount%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202144.%20Minimum%20Cost%20of%20Buying%20Candies%20With%20Discount.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/01%20-%2004%20-%202025%20---%202144.%20Minimum%20Cost%20of%20Buying%20Candies%20With%20Discount%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202144.%20Minimum%20Cost%20of%20Buying%20Candies%20With%20Discount.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/01%20-%2004%20-%202025%20---%202144.%20Minimum%20Cost%20of%20Buying%20Candies%20With%20Discount%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202144.%20Minimum%20Cost%20of%20Buying%20Candies%20With%20Discount.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/01%20-%2004%20-%202025%20---%202144.%20Minimum%20Cost%20of%20Buying%20Candies%20With%20Discount%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202144.%20Minimum%20Cost%20of%20Buying%20Candies%20With%20Discoun.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/1346517b-4659-4013-acd8-eac8198d8b86" width = "700px" height="462px" />

</h1>
