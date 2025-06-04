# 3403. Find the Lexicographically Largest String From the Box I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-lexicographically-largest-string-from-the-box-i/description/?envType=daily-question&envId=2025-06-04"><strong>➥ ☢️ 3403 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `word` and an integer `numFriends`.

Alice is hosting a game for her `numFriends` friends. The game consists of multiple rounds. In each round:

- `word` is split into `numFriends` non-empty strings. Importantly, no two rounds can have the *exact* same split of `word`.
- All the split strings are placed into a box.

Your goal is to determine the lexicographically largest string that appears in the box after all possible rounds (splits) have been completed.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ word = "dbca", numFriends = 2

  ### 📤 `Output`  ➤ "dbc"

  ### 🔦 `Explanation`  ➤ All possible splits are:

- "d" and "bca".
- "db" and "ca".
- "dbc" and "a".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ word = "gggg", numFriends = 4

  ### 📤 `Output`  ➤ "g"

  ### 🔦 `Explanation` ➤ The only possible split is: "g", "g", "g", and "g".

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= word.length <= 5 * 10<sup>3</sup> </br>

🔹 word consists only of lowercase English letters. </br>

🔹 1 <= numFriends <= word.length </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Two Pointers** </br>

🔸 **String** </br>

🔸 **Enumeration** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/04%20-%2006%20-%202025%20---%203403.%20Find%20the%20Lexicographically%20Largest%20String%20From%20the%20Box%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203403.%20Find%20the%20Lexicographically%20Largest.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/04%20-%2006%20-%202025%20---%203403.%20Find%20the%20Lexicographically%20Largest%20String%20From%20the%20Box%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203403.%20Find%20the%20Lexicographically%20Largest%20S.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/04%20-%2006%20-%202025%20---%203403.%20Find%20the%20Lexicographically%20Largest%20String%20From%20the%20Box%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203403.%20Find%20the%20Lexicographically%20Largest.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/04%20-%2006%20-%202025%20---%203403.%20Find%20the%20Lexicographically%20Largest%20String%20From%20the%20Box%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203403.%20Find%20the%20Lexicographically%20Lar.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/23d0d68e-1c6d-4d54-990a-88cf0fa94cde" width = "700px" height="462px" />

</h1>
