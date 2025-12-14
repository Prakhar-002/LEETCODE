# 2147. Number of Ways to Divide a Long Corridor

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/number-of-ways-to-divide-a-long-corridor/description/?envType=daily-question&envId=2025-12-14"><strong>➥ 🫀 2147 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Along a long library corridor, there is a line of seats and decorative plants. You are given a 0-indexed string `corridor` of length `n` consisting of letters `'S'` and `'P'` where each `'S'` represents a **seat** and each `'P'` represents a **plant`.

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
