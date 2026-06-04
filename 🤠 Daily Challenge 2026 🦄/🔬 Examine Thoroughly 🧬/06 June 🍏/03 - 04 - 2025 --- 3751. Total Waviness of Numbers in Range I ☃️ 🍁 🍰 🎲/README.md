# 3751. Total Waviness of Numbers in Range I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/total-waviness-of-numbers-in-range-i/description/?envType=daily-question&envId=2026-06-04"><strong>➥ ☢️ 3751 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given two integers `num1` and `num2` representing an inclusive range `[num1, num2]`.
### The **waviness** of a number is defined as the **total count of its peaks and valleys**:
### &nbsp;&nbsp;&nbsp;&nbsp;• A digit is a **peak** if it is **strictly greater** than both of its immediate neighbors.
### &nbsp;&nbsp;&nbsp;&nbsp;• A digit is a **valley** if it is **strictly less** than both of its immediate neighbors.
### &nbsp;&nbsp;&nbsp;&nbsp;• The **first** and **last** digits of a number **cannot** be peaks or valleys.
### &nbsp;&nbsp;&nbsp;&nbsp;• Any number with **fewer than 3 digits** has a waviness of `0`.
### Return the **total sum of waviness** for all numbers in the range `[num1, num2]`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ num1 = 120, num2 = 130
  ### 📤 `Output`  ➤ 3
  ### 🔦 `Explanation`  ➤ `120`: middle digit `2` is a peak → waviness `1`. `121`: middle digit `2` is a peak → waviness `1`. `130`: middle digit `3` is a peak → waviness `1`. All others have waviness `0`. Total = `3`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ num1 = 198, num2 = 202
  ### 📤 `Output`  ➤ 3
  ### 🔦 `Explanation` ➤ `198`: middle digit `9` is a peak → waviness `1`. `201`: middle digit `0` is a valley → waviness `1`. `202`: middle digit `0` is a valley → waviness `1`. All others have waviness `0`. Total = `3`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ num1 = 4848, num2 = 4848
  ### 📤 `Output`  ➤ 2
  ### 🔦 `Explanation` ➤ Number `4848`: second digit `8` is a **peak**, third digit `4` is a **valley**, giving a waviness of `2`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= num1 <= num2 <= 10^5` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Math** </br>
🔸 **Dynamic Programming** </br>
🔸 **Enumeration** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/03%20-%2004%20-%202025%20---%203751.%20Total%20Waviness%20of%20Numbers%20in%20Range%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203751.%20Total%20Waviness%20of%20Numbers%20in%20Range%20I.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/03%20-%2004%20-%202025%20---%203751.%20Total%20Waviness%20of%20Numbers%20in%20Range%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203751.%20Total%20Waviness%20of%20Numbers%20in%20Range%20I.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/03%20-%2004%20-%202025%20---%203751.%20Total%20Waviness%20of%20Numbers%20in%20Range%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203751.%20Total%20Waviness%20of%20Numbers%20in%20Range%20I.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/03%20-%2004%20-%202025%20---%203751.%20Total%20Waviness%20of%20Numbers%20in%20Range%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203751.%20Total%20Waviness%20of%20Numbers%20in%20Range%20I.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/26175530-fc90-4b66-b908-158c64f9be90" width = "700px" height="462px" />

</h1>
