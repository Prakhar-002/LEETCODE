# 2147. Number of Ways to Divide a Long Corridor

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/number-of-ways-to-divide-a-long-corridor/description/?envType=daily-question&envId=2025-12-14"><strong>➥ 🫀 2147 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Along a long library corridor, there is a line of seats and decorative plants. You are given a 0-indexed string `corridor` of length `n` consisting of letters `'S'` and `'P'` where each `'S'` represents a **seat** and each `'P'` represents a **plant**.

### One room divider has **already** been installed to the left of index `0`, and another to the right of index `n - 1`. For each position between indices `i - 1` and `i` (`1 <= i <= n - 1`), at most one divider can be installed.

### Divide the corridor into non-overlapping sections, where each section has **exactly two seats** with any number of plants. There may be multiple ways to perform the division. Two ways are **different** if there is a position with a room divider installed in the first way but not in the second way.

### Return the **number of ways** to divide the corridor, modulo `10^9 + 7`. If there is no way, return `0`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="410" height="199" alt="2147 que 1" src="https://github.com/user-attachments/assets/7c933698-4bfa-4583-befc-1f4c255b0901" />

### 📥 `Input`  ➤ `corridor = "SSPPSPS"`

### 📤 `Output`  ➤ `3`

### 🔦 `Explanation`  ➤ There are `3` different ways to divide the corridor so that every section has exactly two seats.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="357" height="68" alt="2147 que 2" src="https://github.com/user-attachments/assets/e0517c82-5e03-4e10-8382-315826c913b0" />

### 📥 `Input` ➤ `corridor = "PPSPSP"`

### 📤 `Output`  ➤ `1`

### 🔦 `Explanation` ➤ There is only `1` valid way: do not install any additional dividers; any divider added would create a section without exactly two seats.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img width="115" height="68" alt="2147 que 3" src="https://github.com/user-attachments/assets/7b7b7da7-cdf7-4bdc-aaa0-eeb3bad01b51" />

### 📥 `Input` ➤ `corridor = "S"`

### 📤 `Output`  ➤ `0`

### 🔦 `Explanation` ➤ It is impossible to divide the corridor so that every section has exactly two seats.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `n == corridor.length` </br>
🔹 `1 <= n <= 10^5` </br>
🔹 `corridor[i]` is either `'S'` or `'P'`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math** </br>
🔸 **String** </br>
🔸 **Dynamic Programming** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/14%20-%2012%20-%202025%20---%202147.%20Number%20of%20Ways%20to%20Divide%20a%20Long%20Corridor%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202147.%20Number%20of%20Ways%20to%20Divide%20a%20Long%20Corridor.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/14%20-%2012%20-%202025%20---%202147.%20Number%20of%20Ways%20to%20Divide%20a%20Long%20Corridor%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202147.%20Number%20of%20Ways%20to%20Divide%20a%20Long%20Corridor.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/14%20-%2012%20-%202025%20---%202147.%20Number%20of%20Ways%20to%20Divide%20a%20Long%20Corridor%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202147.%20Number%20of%20Ways%20to%20Divide%20a%20Long%20Corridor.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/14%20-%2012%20-%202025%20---%202147.%20Number%20of%20Ways%20to%20Divide%20a%20Long%20Corridor%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202147.%20Number%20of%20Ways%20to%20Divide%20a%20Long%20Corridor.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/74032370-ed63-453d-9ef2-99220f4d1517" width = "700px" height="462px" />

</h1>
