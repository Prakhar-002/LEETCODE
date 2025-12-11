# 3577. Count the Number of Computer Unlocking Permutations

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-the-number-of-computer-unlocking-permutations/?envType=daily-question&envId=2025-12-10"><strong>➥ ☢️ 3577 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array `complexity` of length `n`. There are `n` locked computers in a room with labels from `0` to `n - 1`, each with its own **unique** password. The password of computer `i` has a complexity `complexity[i]`.

### The password for the computer labeled `0` is **already decrypted** and serves as the **root**. All other computers must be unlocked using it or another previously unlocked computer, following this information:

- You can decrypt the password for computer `i` using the password for computer `j`, where `j` is any integer less than `i` with a lower complexity (i.e. `j < i` and `complexity[j] < complexity[i]`).
- To decrypt the password for computer `i`, you must have **already unlocked** a computer `j` such that `j < i` and `complexity[j] < complexity[i]`.

### Find the number of **permutations** of `[0, 1, 2, ..., (n - 1)]` that represent a valid order in which the computers can be unlocked, starting from computer `0` as the only initially unlocked one. Since the answer may be large, return it **modulo** `10^9 + 7`.

### Note: The password for the computer with label `0` is decrypted, and **not** the computer with the first position in the permutation.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤ `complexity = [1,2,3]`

### 📤 `Output`  ➤ `2`

### 🔦 `Explanation`  ➤ The valid permutations are:

- `[0, 1, 2]`  
  - Unlock computer `0` first with root password.  
  - Unlock computer `1` with password of computer `0` since `complexity[0] < complexity[1]`.  
  - Unlock computer `2` with password of computer `1` since `complexity[1] < complexity[2]`.

- `[0, 2, 1]`  
  - Unlock computer `0` first with root password.  
  - Unlock computer `2` with password of computer `0` since `complexity[0] < complexity[2]`.  
  - Unlock computer `1` with password of computer `0` since `complexity[0] < complexity[1]`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `complexity = [3,3,3,4,4,4]`

### 📤 `Output`  ➤ `0`

### 🔦 `Explanation` ➤ There are no possible permutations which can unlock all computers.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `2 <= complexity.length <= 10^5` </br>
🔹 `1 <= complexity[i] <= 10^9` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Math** </br>
🔸 **Brainteaser** </br>
🔸 **Combinatorics** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/10%20-%2012%20-%202025%20---%203577.%20Count%20the%20Number%20of%20Computer%20Unlocking%20Permutations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203577.%20Count%20the%20Number%20of%20Computer%20Unlocking%20Pe.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/10%20-%2012%20-%202025%20---%203577.%20Count%20the%20Number%20of%20Computer%20Unlocking%20Permutations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203577.%20Count%20the%20Number%20of%20Computer%20Unlocking%20Perm.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/10%20-%2012%20-%202025%20---%203577.%20Count%20the%20Number%20of%20Computer%20Unlocking%20Permutations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203577.%20Count%20the%20Number%20of%20Computer%20Unlocking%20Pe.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/10%20-%2012%20-%202025%20---%203577.%20Count%20the%20Number%20of%20Computer%20Unlocking%20Permutations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203577.%20Count%20the%20Number%20of%20Computer%20Unlockin.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/881eb5dd-7546-4c7f-a01c-0513dbcd0bd5" width = "700px" height="462px" />

</h1>
