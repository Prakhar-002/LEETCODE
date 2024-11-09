# 3133. Minimum Array End

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-array-end/description/?envType=daily-question&envId=2024-11-09"><strong>➥ ☢️ 3133 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two integers `n` and `x`. You have to construct an array of positive integers `nums` of size `n` where for every `0 <= i < n - 1`, `nums[i + 1]` is greater than `nums[i]`, and the result of the bitwise `AND` operation between all elements of `nums` is `x`.

### Return *the minimum possible value of `nums[n - 1]`*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 3, x = 4

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation`  ➤ `nums` can be `[4,5,6]` and its last element is 6.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 2, x = 7

  ### 📤 `Output`  ➤ 15

  ### 🔦 `Explanation` ➤ `nums` can be `[7,15]` and its last element is 15.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= n, x <= 10<sup>8</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Bit Manipulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/09%20-%2011%20-%202024%20---%203133.%20Minimum%20Array%20End%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203133.%20Minimum%20Array%20End.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/09%20-%2011%20-%202024%20---%203133.%20Minimum%20Array%20End%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203133.%20Minimum%20Array%20End.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/09%20-%2011%20-%202024%20---%203133.%20Minimum%20Array%20End%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203133.%20Minimum%20Array%20End.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/09%20-%2011%20-%202024%20---%203133.%20Minimum%20Array%20End%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203133.%20Minimum%20Array%20End.js) |

