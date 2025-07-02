# 3333. Find the Original Typed String II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-original-typed-string-ii/?envType=daily-question&envId=2025-07-02"><strong>➥ 🫀 3333 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Alice is attempting to type a specific string on her computer, but due to her clumsiness, she might press a key for too long, causing characters to be typed multiple times.

You are given a string `word` representing the final output that Alice sees on her screen. You are also provided with a positive integer `k`.

Your task is to calculate and return the total number of possible *original* strings that Alice *might* have been trying to type, under the condition that the original string had a length of *at least* `k`.

Since the answer can potentially be quite large, return the result modulo 10<sup>9</sup> + 7 (1000000007).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ word = "aabbccdd", k = 7

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ The possible strings are: "aabbccdd", "aabbccd", "aabbcdd", "aabccdd", and "abbccdd".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ word = "aabbccdd", k = 8

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤ The only possible string is "aabbccdd".

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ word = "aaabbb", k = 3

  ### 📤 `Output`  ➤ 8

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= word.length <= 5 * 10<sup>5</sup> </br>

🔹 word consists only of lowercase English letters. </br>

🔹 1 <= k <= 2000 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String** </br>

🔸 **Dynamic Programming** </br>

🔸 **Prefix Sum** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/02%20-%2007%20-%202025%20---%203333.%20Find%20the%20Original%20Typed%20String%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203333.%20Find%20the%20Original%20Typed%20String%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/02%20-%2007%20-%202025%20---%203333.%20Find%20the%20Original%20Typed%20String%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203333.%20Find%20the%20Original%20Typed%20String%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/02%20-%2007%20-%202025%20---%203333.%20Find%20the%20Original%20Typed%20String%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203333.%20Find%20the%20Original%20Typed%20String%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/02%20-%2007%20-%202025%20---%203333.%20Find%20the%20Original%20Typed%20String%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203333.%20Find%20the%20Original%20Typed%20String%20II.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/f9121648-589e-44f5-9349-cfd083008778" width = "700px" height="462px" />

</h1>
