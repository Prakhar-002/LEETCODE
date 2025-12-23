# Q2. Interleaving String

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/interleaving-string/description/?envType=problem-list-v2&envId=dsa-strategy-summit-2d-dynamic-programming"><strong>➥ ☢️ Q2 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given strings `s1`, `s2`, and `s3`, find whether `s3` is formed by an interleaving of `s1` and `s2`.

### An interleaving of two strings `s` and `t` is a configuration where `s` and `t` are divided into `n` and `m` substrings respectively, such that:

- `s = s1 + s2 + ... + sn`
- `t = t1 + t2 + ... + tm`
- `|n - m| <= 1`

### The interleaving is `s1 + t1 + s2 + t2 + s3 + t3 + ...` or `t1 + s1 + t2 + s2 + t3 + s3 + ...`

### Note: `a + b` is the concatenation of strings `a` and `b`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![97 que 1](https://github.com/user-attachments/assets/ad754cf8-be11-4f50-a4b3-93e60cc29feb)

### 📥 `Input`  ➤ `events = [[1,3,2],[4,5,2],[2,4,3]]`

### 📤 `Output`  ➤ `4`

### 🔦 `Explanation`  ➤ Choose events `0` and `1` with values `2` and `2` for a total of `4`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `events = [[1,3,2],[4,5,2],[1,5,5]]`

### 📤 `Output`  ➤ `5`

### 🔦 `Explanation` ➤ Choose event `2` alone with value `5`, since it overlaps with both other events.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `events = [[1,5,3],[1,5,1],[6,6,5]]`

### 📤 `Output`  ➤ `8`

### 🔦 `Explanation` ➤ Choose events `0` and `2` with values `3` and `5` for a total of `8`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `2 <= events.length <= 10^5` </br>
🔹 `events[i].length == 3` </br>
🔹 `1 <= startTimeᵢ <= endTimeᵢ <= 10^9` </br>
🔹 `1 <= valueᵢ <= 10^6` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Binary Search** </br>
🔸 **Dynamic Programming** </br>
🔸 **Sorting** </br>
🔸 **Heap (Priority Queue)** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/2D%20-%20DP/Q2.%20Interleaving%20String/%F0%9F%8D%81JAVA%20-%20Interleaving%20String.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/2D%20-%20DP/Q2.%20Interleaving%20String/%F0%9F%8E%B2CPP%20-%20Interleaving%20String.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/2D%20-%20DP/Q2.%20Interleaving%20String/%F0%9F%8D%B0PYTHON%20-%20Interleaving%20String.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/2D%20-%20DP/Q2.%20Interleaving%20String/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Interleaving%20String.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/bb3544ec-9d8e-4ba3-b94b-f72dc5094b95" width = "700px" height="462px" />

</h1>
