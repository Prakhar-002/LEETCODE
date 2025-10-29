# 3370. Smallest Number With All Set Bits

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/smallest-number-with-all-set-bits/description/?envType=daily-question&envId=2025-10-29"><strong>➥ ♻️ 3370 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a positive number `n`.

### Return the smallest number `x` greater than or equal to `n`, such that the binary representation of `x` contains only set bits (1s).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `n = 5`

  ### 📤 `Output`  ➤ `7`

  ### 🔦 `Explanation`  ➤

  - The binary representation of 7 is "111".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `n = 10`

  ### 📤 `Output`  ➤ `15`

  ### 🔦 `Explanation`  ➤

  - The binary representation of 15 is "1111".

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `n = 3`

  ### 📤 `Output`  ➤ `3`

  ### 🔦 `Explanation`  ➤

  - The binary representation of 3 is "11".

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= n <= 1000` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math** </br>
🔸 **Bit Manipulation** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/29%20-%2010%20-%202025%20---%203370.%20Smallest%20Number%20With%20All%20Set%20Bits%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203370.%20Smallest%20Number%20With%20All%20Set%20Bits.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/29%20-%2010%20-%202025%20---%203370.%20Smallest%20Number%20With%20All%20Set%20Bits%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203370.%20Smallest%20Number%20With%20All%20Set%20Bits.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/29%20-%2010%20-%202025%20---%203370.%20Smallest%20Number%20With%20All%20Set%20Bits%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203370.%20Smallest%20Number%20With%20All%20Set%20Bits.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/29%20-%2010%20-%202025%20---%203370.%20Smallest%20Number%20With%20All%20Set%20Bits%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203370.%20Smallest%20Number%20With%20All%20Set%20Bits.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/61acacda-27eb-4010-af03-02f31119b589" width = "700px" height="462px" />

</h1>
