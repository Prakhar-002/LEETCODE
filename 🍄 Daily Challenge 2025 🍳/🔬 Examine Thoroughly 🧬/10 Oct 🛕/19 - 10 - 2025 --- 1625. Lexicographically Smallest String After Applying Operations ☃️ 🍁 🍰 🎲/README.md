# 1625. Lexicographically Smallest String After Applying Operations

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/lexicographically-smallest-string-after-applying-operations/description/?envType=daily-question&envId=2025-10-19"><strong>➥ ☢️ 1625 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `s` of even length consisting of digits from 0 to 9, and two integers `a` and `b`.

### You can apply either of the following two operations any number of times and in any order on `s`:

- Add `a` to all odd indices of `s` (0-indexed). Digits post 9 are cycled back to 0. For example, if `s = "3456"` and `a = 5`, `s` becomes "3951".
- Rotate `s` to the right by `b` positions. For example, if `s = "3456"` and `b = 1`, `s` becomes "6345".

### Return the lexicographically smallest string you can obtain by applying the above operations any number of times on `s`.

### A string `a` is lexicographically smaller than a string `b` (of the same length) if in the first position where `a` and `b` differ, string `a` has a letter that appears earlier in the alphabet than the corresponding letter in `b`. For example, "0158" is lexicographically smaller than "0190" because the first position they differ is at the third letter, and '5' comes before '9'.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `s = "5525", a = 9, b = 2`

  ### 📤 `Output`  ➤ `"2050"`

  ### 🔦 `Explanation`  ➤ ➺

  - We can apply the following operations:
    - Start:  "5525"
    - Rotate: "2555"
    - Add:    "2454"
    - Add:    "2353"
    - Rotate: "5323"
    - Add:    "5222"
    - Add:    "5121"
    - Rotate: "2151"
    - Add:    "2050"
  - There is no way to obtain a string that is lexicographically smaller than "2050".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `s = "74", a = 5, b = 1`

  ### 📤 `Output`  ➤ `"24"`

  ### 🔦 `Explanation`  ➤ ➺

  - We can apply the following operations:
    - Start:  "74"
    - Rotate: "47"
    - Add:    "42"
    - Rotate: "24"
  - There is no way to obtain a string that is lexicographically smaller than "24".

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `s = "0011", a = 4, b = 2`

  ### 📤 `Output`  ➤ `"0011"`

  ### 🔦 `Explanation`  ➤ ➺

  - There are no sequence of operations that will give us a lexicographically smaller string than "0011".

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `2 <= s.length <= 100` </br>
🔹 `s.length` is even. </br>
🔹 `s` consists of digits from 0 to 9 only. </br>
🔹 `1 <= a <= 9` </br>
🔹 `1 <= b <= s.length - 1` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String** </br>
🔸 **Depth-First Search** </br>
🔸 **Breadth-First Search** </br>
🔸 **Enumeration** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
