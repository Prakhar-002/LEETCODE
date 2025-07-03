# 3304. Find the K-th Character in String Game I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-k-th-character-in-string-game-i/description/?envType=daily-question&envId=2025-07-03"><strong>➥ ♻️ 3304 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Alice and Bob are engaged in a game. Alice starts with the initial string `word = "a"`.

### You are given a positive integer `k`. Bob repeatedly asks Alice to perform the following operation:

1. Create a new string by shifting each character in `word` to its next character in the English alphabet (wrapping 'z' to 'a').
2. Append the newly generated string to the end of the current `word`.

### For example:

- Applying the operation to "c" produces "cd".
- Applying the operation to "zb" produces "zbac".

### The game continues until `word` has at least `k` characters. Your task is to determine and return the value of the k<sup>th</sup> character in `word` (remember that the index `k` is 1-based).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ k = 5

  ### 📤 `Output`  ➤ "b"

  ### 🔦 `Explanation`  ➤
Initially, word = "a". We need to do the operation three times:

- Generated string is "b", word becomes "ab".
- Generated string is "bc", word becomes "abbc".
- Generated string is "bccd", word becomes "abbcbccd".

The 5th character is "b".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ k = 10

  ### 📤 `Output`  ➤ "c"

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= k <= 500 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>

🔸 **Bit Manipulation**  </br>

🔸 **Recursion**  </br>

🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/03%20-%2007%20-%202025%20---%203304.%20Find%20the%20K-th%20Character%20in%20String%20Game%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203304.%20Find%20the%20K-th%20Character%20in%20String%20Game%20I.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/03%20-%2007%20-%202025%20---%203304.%20Find%20the%20K-th%20Character%20in%20String%20Game%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203304.%20Find%20the%20K-th%20Character%20in%20String%20Game%20I.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/03%20-%2007%20-%202025%20---%203304.%20Find%20the%20K-th%20Character%20in%20String%20Game%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203304.%20Find%20the%20K-th%20Character%20in%20String%20Game%20I.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/03%20-%2007%20-%202025%20---%203304.%20Find%20the%20K-th%20Character%20in%20String%20Game%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203304.%20Find%20the%20K-th%20Character%20in%20String%20Game%20I.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/8fe4c20b-ff82-4121-af8c-920af500a8ec" width = "700px" height="462px" />

</h1>
