# 3307. Find the K-th Character in String Game II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-k-th-character-in-string-game-ii/description/?envType=daily-question&envId=2025-07-04"><strong>➥ 🫀 3307  Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Alice and Bob are playing a game. Alice starts with the initial string `word = "a"`.

### You are given a positive integer `k` and an integer array `operations`, where `operations[i]` represents the type of the i<sup>th</sup> operation that Alice must perform in sequence. The possible operation types are:

- `operations[i] == 0`: Append a copy of the current `word` to itself (i.e., `word = word + word`).
- `operations[i] == 1`: Generate a new string by shifting each character in `word` to its next character in the English alphabet (wrapping 'z' to 'a'), and then append this newly generated string to the original `word`. For example:
    - Performing the operation on "c" generates "cd".
    - Performing the operation on "zb" generates "zbac".

### After Alice performs all the operations in the specified order, you must return the value of the k<sup>th</sup> character in the final `word`.

### Important Note:

- Remember that the character 'z' "wraps around" to 'a' in the second type of operation (shifting).
- The input is constructed such that, after all operations, the final length of `word` will always be at least `k`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ k = 5, operations = [0,0,0]

  ### 📤 `Output`  ➤ "a"

  ### 🔦 `Explanation`  ➤
Initially, word == "a". Alice performs the three operations as follows:

- Appends "a" to "a", word becomes "aa".
- Appends "aa" to "aa", word becomes "aaaa".
- Appends "aaaa" to "aaaa", word becomes "aaaaaaaa".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ k = 10, operations = [0,1,0,1]

  ### 📤 `Output`  ➤ "b"

  ### 🔦 `Explanation` ➤
Initially, word == "a". Alice performs the four operations as follows:

- Appends "a" to "a", word becomes "aa".
- Appends "bb" to "aa", word becomes "aabb".
- Appends "aabb" to "aabb", word becomes "aabbaabb".
- Appends "bbccbbcc" to "aabbaabb", word becomes "aabbaabbbbccbbcc".

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= k <= 10<sup>14</sup> </br>

🔹 1 <= operations.length <= 100 </br>

🔹 operations[i] is either 0 or 1. </br>

🔹 The input is generated such that word has at least k characters after all operations. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>

🔸 **Bit Manipulation**  </br>

🔸 **Recursion**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/04%20-%2007%20-%202025%20---%203307.%20Find%20the%20K-th%20Character%20in%20String%20Game%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203307.%20Find%20the%20K-th%20Character%20in%20String%20Game%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/04%20-%2007%20-%202025%20---%203307.%20Find%20the%20K-th%20Character%20in%20String%20Game%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203307.%20Find%20the%20K-th%20Character%20in%20String%20Game%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/04%20-%2007%20-%202025%20---%203307.%20Find%20the%20K-th%20Character%20in%20String%20Game%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203307.%20Find%20the%20K-th%20Character%20in%20String%20Game%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/04%20-%2007%20-%202025%20---%203307.%20Find%20the%20K-th%20Character%20in%20String%20Game%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203307.%20Find%20the%20K-th%20Character%20in%20String%20Game%20II.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/ca896fb1-809f-4512-bfec-b844b7b42c88" width = "700px" height="462px" />

</h1>
