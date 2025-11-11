# 474. Ones and Zeroes

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/ones-and-zeroes/description/?envType=daily-question&envId=2025-11-11"><strong>➥ ☢️ 474 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array of binary strings `strs` and two integers `m` and `n`.

### Return the size of the largest subset of `strs` such that there are at most `m` 0's and `n` 1's in the subset.

### A set `x` is a subset of a set `y` if all elements of `x` are also elements of `y`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `strs = ["10","0001","111001","1","0"], m = 5, n = 3`

  ### 📤 `Output`  ➤ `4`

  ### 🔦 `Explanation`  ➤ ➺

  - The largest subset with at most 5 0's and 3 1's is `{"10", "0001", "1", "0"}`, so the answer is 4.
  - Other valid but smaller subsets include `{"0001", "1"}` and `{"10", "1", "0"}`.
  - `{"111001"}` is an invalid subset because it contains 4 1's, greater than the maximum of 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `strs = ["10","0","1"], m = 1, n = 1`

  ### 📤 `Output`  ➤ `2`

  ### 🔦 `Explanation`  ➤ ➺

  - The largest subset is `{"0", "1"}`, so the answer is 2.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= strs.length <= 600` </br>
🔹 `1 <= strs[i].length <= 100` </br>
🔹 `strs[i]` consists only of digits '0' and '1'. </br>
🔹 `1 <= m, n <= 100` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **String** </br>
🔸 **Dynamic Programming** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/11%20-%2011%20-%202025%20---%20474.%20Ones%20and%20Zeroes%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20474.%20Ones%20and%20Zeroes.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/11%20-%2011%20-%202025%20---%20474.%20Ones%20and%20Zeroes%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20474.%20Ones%20and%20Zeroes.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/11%20-%2011%20-%202025%20---%20474.%20Ones%20and%20Zeroes%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20474.%20Ones%20and%20Zeroes.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/11%20-%2011%20-%202025%20---%20474.%20Ones%20and%20Zeroes%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20474.%20Ones%20and%20Zeroes.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/05b45c5b-fd57-42c9-af0b-561552437a51" width = "700px" height="462px" />

</h1>
