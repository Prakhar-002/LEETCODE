# 212. Word Search II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/word-search-ii/description/"><strong>➥ ☢️ 212 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a `m x n` board of characters and a list of strings called `words`. Your objective is to find *all* of the words from the `words` list that can be formed by traversing the board.

### Construction Rule:

- Each word must be built from letters that are sequentially adjacent in the board (horizontally or vertically).
- You *cannot* reuse the same letter cell more than once within a single word.

### Return all the words present on the board, in any order.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/1c6e0cb4-8de5-4c93-8403-27fb7bf3e9ba" width="" height=""/>

  ### 📥 `Input`  ➤ board = [["o","a","a","n"],["e","t","a","e"],["i","h","k","r"],["i","f","l","v"]], words = ["oath","pea","eat","rain"]

  ### 📤 `Output`  ➤ ["eat","oath"]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/c267e122-ac6f-4b7b-9065-dd321bd3ae5b" width="" height=""/>

  ### 📥 `Input` ➤ board = [["a","b"],["c","d"]], words = ["abcb"]

  ### 📤 `Output`  ➤ []

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 m == board.length </br>

🔹 n == board[i].length </br>

🔹 1 <= m, n <= 12 </br>

🔹 board[i][j] is a lowercase English letter. </br>

🔹 1 <= words.length <= 3 * 10<sup>4</sup> </br>

🔹 1 <= words[i].length <= 10 </br>

🔹 words[i] consists of lowercase English letters. </br>

🔹 All the strings of words are unique. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **String**  </br>

🔸 **Backtracking**  </br>

🔸 **Trie**  </br>

🔸 **Matrix**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Ties/Day%20%E2%9E%BA%2080%20%F0%9F%A5%A1%20212.%20Word%20Search%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20212.%20Word%20Search%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Ties/Day%20%E2%9E%BA%2080%20%F0%9F%A5%A1%20212.%20Word%20Search%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20212.%20Word%20Search%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Ties/Day%20%E2%9E%BA%2080%20%F0%9F%A5%A1%20212.%20Word%20Search%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20212.%20Word%20Search%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Ties/Day%20%E2%9E%BA%2080%20%F0%9F%A5%A1%20212.%20Word%20Search%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20212.%20Word%20Search%20II.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/e559d684-7374-47a9-83f7-4cf966b97717" width = "700px" height="462px" />

</h1>
