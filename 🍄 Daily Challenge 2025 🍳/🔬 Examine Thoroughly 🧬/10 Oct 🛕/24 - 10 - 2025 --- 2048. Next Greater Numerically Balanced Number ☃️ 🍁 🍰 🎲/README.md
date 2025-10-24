# 2048. Next Greater Numerically Balanced Number

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/next-greater-numerically-balanced-number/description/?envType=daily-question&envId=2025-10-24"><strong>➥ ☢️ 2048 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### An integer `x` is numerically balanced if for every digit `d` in the number `x`, there are exactly `d` occurrences of that digit in `x`.

### Given an integer `n`, return the smallest numerically balanced number strictly greater than `n`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `n = 1`

  ### 📤 `Output`  ➤ `22`

  ### 🔦 `Explanation`  ➤ ➺

  - 22 is numerically balanced since:
    - The digit 2 occurs 2 times.
  - It is also the smallest numerically balanced number strictly greater than 1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `n = 1000`

  ### 📤 `Output`  ➤ `1333`

  ### 🔦 `Explanation`  ➤ ➺

  - 1333 is numerically balanced since:
    - The digit 1 occurs 1 time.
    - The digit 3 occurs 3 times.
  - It is also the smallest numerically balanced number strictly greater than 1000.
  - Note that 1022 cannot be the answer because 0 appeared more than 0 times.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `n = 3000`

  ### 📤 `Output`  ➤ `3133`

  ### 🔦 `Explanation`  ➤ ➺

  - 3133 is numerically balanced since:
    - The digit 1 occurs 1 time.
    - The digit 3 occurs 3 times.
  - It is also the smallest numerically balanced number strictly greater than 3000.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `0 <= n <= 10^6` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table** </br>
🔸 **Math** </br>
🔸 **Backtracking** </br>
🔸 **Counting** </br>
🔸 **Enumeration** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/24%20-%2010%20-%202025%20---%202048.%20Next%20Greater%20Numerically%20Balanced%20Number%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202048.%20Next%20Greater%20Numerically%20Balanced%20Number.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/24%20-%2010%20-%202025%20---%202048.%20Next%20Greater%20Numerically%20Balanced%20Number%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202048.%20Next%20Greater%20Numerically%20Balanced%20Number.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/24%20-%2010%20-%202025%20---%202048.%20Next%20Greater%20Numerically%20Balanced%20Number%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202048.%20Next%20Greater%20Numerically%20Balanced%20Number.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/24%20-%2010%20-%202025%20---%202048.%20Next%20Greater%20Numerically%20Balanced%20Number%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202048.%20Next%20Greater%20Numerically%20Balanced%20Number.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/8ab7b6ed-eb9f-4d5e-bebd-a8303a61b176" width = "700px" height="462px" />

</h1>
