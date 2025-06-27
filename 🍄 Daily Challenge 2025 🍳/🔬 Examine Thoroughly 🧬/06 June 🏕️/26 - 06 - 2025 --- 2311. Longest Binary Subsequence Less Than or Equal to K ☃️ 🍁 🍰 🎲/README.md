# 2311. Longest Binary Subsequence Less Than or Equal to K

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/longest-binary-subsequence-less-than-or-equal-to-k/description/?envType=daily-question&envId=2025-06-26"><strong>➥ ☢️ 2311 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a binary string `s` and a positive integer `k`.

### The problem requires you to find the length of the longest subsequence of `s` that represents a binary number less than or equal to `k`.

### Important notes:

- The subsequence is allowed to contain leading zeroes.
- The empty string is considered to be equal to 0.
- A subsequence is formed by deleting zero or more characters from the original string, without changing the order of the remaining characters.

### Return the length of this longest subsequence.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "1001010", k = 5

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ The longest subsequence of s that makes up a binary number less than or equal to 5 is "00010", as this number is equal to 2 in decimal.
Note that "00100" and "00101" are also possible, which are equal to 4 and 5 in decimal, respectively.
The length of this subsequence is 5, so 5 is returned.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "00101001", k = 1

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation` ➤ "000001" is the longest subsequence of s that makes up a binary number less than or equal to 1, as this number is equal to 1 in decimal.
The length of this subsequence is 6, so 6 is returned.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= s.length <= 1000 </br>

🔹 s[i] is either '0' or '1'. </br>

🔹 1 <= k <= 10<sup>9</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String** </br>

🔸 **Dynamic Programming** </br>

🔸 **Greedy** </br>

🔸 **Memoization** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/25%20-%2006%20-%202025%20---%202040.%20Kth%20Smallest%20Product%20of%20Two%20Sorted%20Arrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202040.%20Kth%20Smallest%20Product%20of%20Two%20Sorted%20Arrays.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/07e9180c-58bf-4b98-b971-18fb122043c5" width = "700px" height="462px" />

</h1>
