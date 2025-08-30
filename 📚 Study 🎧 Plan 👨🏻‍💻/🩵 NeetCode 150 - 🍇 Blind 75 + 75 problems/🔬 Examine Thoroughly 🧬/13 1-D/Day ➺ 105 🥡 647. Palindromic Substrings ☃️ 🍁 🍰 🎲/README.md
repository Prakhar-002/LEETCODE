# 647. Palindromic Substrings

</br>

<h2 align="center">

<a href="https://leetcode.com/problems/palindromic-substrings/description/"><strong>➥ ☢️ 647 Leetcode Medium ☢️ </strong></a>

</h2>

</br>

# Description 📜 ˋ°•\*⁀➷

### Given a string `s`, return the number of palindromic substrings in it. 

### A string is a palindrome when it reads the same backward as forward. 

### A substring is a contiguous sequence of characters within the string.

</br>

# Example 💡 1️⃣ ˋ°•\*⁀➷

### 📥 `Input` ➤ `s = "abc"`

### 📤 `Output` ➤ 3

### 🔦 `Explanation` ➤ ➺ Three palindromic strings: "a", "b", "c".

</br>

# Example 💡 2️⃣ ˋ°•\*⁀➷

### 📥 `Input` ➤ `s = "aaa"`

### 📤 `Output` ➤ 6

### 🔦 `Explanation` ➤ Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".

</br>

# Example 💡 3️⃣ ˋ°•\*⁀➷

### 📥 `Input` ➤ `s = "aba"`

### 📤 `Output` ➤ 4

### 🔦 `Explanation` ➤ The palindromic substrings are: "a", "b", "a", "aba".

</br>

# Constraints 🔒 ˋ°•\*⁀➷

🔹 `1 <= s.length <= 1000` </br>

🔹 `s` consists of lowercase English letters. </br>

</br>

# Topics 📋 ˋ°•\*⁀➷

🔸 **Two Pointers** </br>
🔸 **String** </br>
🔸 **Dynamic Programming** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/13%201-D/Day%20%E2%9E%BA%20105%20%F0%9F%A5%A1%20647.%20Palindromic%20Substrings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20647.%20Palindromic%20Substrings.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/13%201-D/Day%20%E2%9E%BA%20105%20%F0%9F%A5%A1%20647.%20Palindromic%20Substrings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20647.%20Palindromic%20Substrings.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/13%201-D/Day%20%E2%9E%BA%20105%20%F0%9F%A5%A1%20647.%20Palindromic%20Substrings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20647.%20Palindromic%20Substrings.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/13%201-D/Day%20%E2%9E%BA%20105%20%F0%9F%A5%A1%20647.%20Palindromic%20Substrings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20647.%20Palindromic%20Substrings.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/c410231b-fcb7-44f7-a655-3df17aae8df4" width = "700px" height="462px" />

</h1>
