# 1015. Smallest Integer Divisible by K

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/smallest-integer-divisible-by-k/description/?envType=daily-question&envId=2025-11-25"><strong>➥ ☢️ 1015 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a positive integer `k`, you need to find the length of the smallest positive integer `n` such that `n` is divisible by `k`, and `n` only contains the digit 1.

### Return the length of `n`. If there is no such `n`, return -1.

### Note: `n` may not fit in a 64-bit signed integer.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `k = 1`

  ### 📤 `Output`  ➤ `1`

  ### 🔦 `Explanation`  ➤

  - The smallest answer is `n = 1`, which has length 1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `k = 2`

  ### 📤 `Output`  ➤ `-1`

  ### 🔦 `Explanation`  ➤

  - There is no such positive integer `n` divisible by 2.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `k = 3`

  ### 📤 `Output`  ➤ `3`

  ### 🔦 `Explanation`  ➤

  - The smallest answer is `n = 111`, which has length 3.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= k <= 10^5` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table** </br>
🔸 **Math** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/25%20-%2011%20-%202025%20---%201015.%20Smallest%20Integer%20Divisible%20by%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201015.%20Smallest%20Integer%20Divisible%20by%20K.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/25%20-%2011%20-%202025%20---%201015.%20Smallest%20Integer%20Divisible%20by%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201015.%20Smallest%20Integer%20Divisible%20by%20K.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/25%20-%2011%20-%202025%20---%201015.%20Smallest%20Integer%20Divisible%20by%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201015.%20Smallest%20Integer%20Divisible%20by%20K.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/25%20-%2011%20-%202025%20---%201015.%20Smallest%20Integer%20Divisible%20by%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201015.%20Smallest%20Integer%20Divisible%20by%20K.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/8f3c6815-c26c-4d62-a432-3026d9424b35" width = "700px" height="462px" />

</h1>
