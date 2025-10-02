# 3100. Water Bottles II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/water-bottles-ii/description/?envType=daily-question&envId=2025-10-02"><strong>➥ ☢️ 3100 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two integers `numBottles` and `numExchange`.

### `numBottles` represents the number of full water bottles that you initially have. In one operation, you can perform one of the following operations:

- Drink any number of full water bottles turning them into empty bottles.
- Exchange `numExchange` empty bottles with one full water bottle. Then, increase `numExchange` by one.

### Note that you cannot exchange multiple batches of empty bottles for the same value of `numExchange`. For example, if `numBottles == 3` and `numExchange == 1`, you cannot exchange 3 empty water bottles for 3 full bottles.

### Return the maximum number of water bottles you can drink.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="948" height="482" alt="3100 que 1" src="https://github.com/user-attachments/assets/74297747-7a94-431c-844b-f66d25937e26" />

  ### 📥 `Input`  ➤ `numBottles = 13, numExchange = 6`

  ### 📤 `Output`  ➤ `15`

  ### 🔦 `Explanation`  ➤ The problem description contains a table illustrating the process for this input.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="990" height="642" alt="3100 que 2" src="https://github.com/user-attachments/assets/bee63dd2-b8d5-41ec-8bd5-0dafdf0768d1" />

  ### 📥 `Input`  ➤ `numBottles = 10, numExchange = 3`

  ### 📤 `Output`  ➤ `13`

  ### 🔦 `Explanation`  ➤ The problem description contains a table illustrating the process for this input.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= numBottles <= 100` </br>
🔹 `1 <= numExchange <= 100` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math** </br>
🔸 **Simulation** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/02%20-%2010%20-%202025%20---%203100.%20Water%20Bottles%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203100.%20Water%20Bottles%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/02%20-%2010%20-%202025%20---%203100.%20Water%20Bottles%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203100.%20Water%20Bottles%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/02%20-%2010%20-%202025%20---%203100.%20Water%20Bottles%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203100.%20Water%20Bottles%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/02%20-%2010%20-%202025%20---%203100.%20Water%20Bottles%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203100.%20Water%20Bottles%20II.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/1eca9218-0684-4234-9b5c-bd521bfdf022" width = "700px" height="462px" />

</h1>
