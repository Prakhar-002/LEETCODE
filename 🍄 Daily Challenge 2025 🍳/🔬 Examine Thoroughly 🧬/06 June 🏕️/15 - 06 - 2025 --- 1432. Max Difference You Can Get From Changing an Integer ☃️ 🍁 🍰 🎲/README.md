# 1432. Max Difference You Can Get From Changing an Integer

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/max-difference-you-can-get-from-changing-an-integer/description/?envType=daily-question&envId=2025-06-15"><strong>➥ ☢️ 1432 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer `num`. You will apply the following steps to `num` two separate times:

1. Pick a digit `x` (where `0 <= x <= 9`).
2. Pick another digit `y` (where `0 <= y <= 9`).  It's allowed for `y` to be the same as `x`.
3. Replace all occurrences of the digit `x` in the decimal representation of `num` with the digit `y`.

### Let `a` and `b` represent the two resulting integers after independently applying these operations to `num`.

### Your task is to return the *maximum* difference between `a` and `b`.

### Important Note:

- Neither `a` nor `b` are allowed to have any leading zeroes.
- Neither `a` nor `b` may be equal to 0 after remapping

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ num = 555

  ### 📤 `Output`  ➤ 888

  ### 🔦 `Explanation`  ➤ The first time pick x = 5 and y = 9 and store the new integer in a.
The second time pick x = 5 and y = 1 and store the new integer in b.
We have now a = 999 and b = 111 and max difference = 888.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ num = 9

  ### 📤 `Output`  ➤ 8

  ### 🔦 `Explanation` ➤ The first time pick x = 9 and y = 9 and store the new integer in a.
The second time pick x = 9 and y = 1 and store the new integer in b.
We have now a = 9 and b = 1 and max difference = 8

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= num <= 10<sup>8</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>

🔸 **Greedy**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/15%20-%2006%20-%202025%20---%201432.%20Max%20Difference%20You%20Can%20Get%20From%20Changing%20an%20Integer%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201432.%20Max%20Difference%20You%20Can%20Get%20From%20Changin.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/15%20-%2006%20-%202025%20---%201432.%20Max%20Difference%20You%20Can%20Get%20From%20Changing%20an%20Integer%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201432.%20Max%20Difference%20You%20Can%20Get%20From%20Changing%20.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/15%20-%2006%20-%202025%20---%201432.%20Max%20Difference%20You%20Can%20Get%20From%20Changing%20an%20Integer%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201432.%20Max%20Difference%20You%20Can%20Get%20From%20Changin.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/15%20-%2006%20-%202025%20---%201432.%20Max%20Difference%20You%20Can%20Get%20From%20Changing%20an%20Integer%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201432.%20Max%20Difference%20You%20Can%20Get%20From%20Cha.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/3d65d268-80eb-4a64-a571-1cb32f4a8438" width = "700px" height="462px" />

</h1>
