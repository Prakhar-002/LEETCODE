# 269. Alien Dictionary

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/alien-dictionary/"><strong>➥ 🫀 269 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a list of non-empty strings, `words`, from a dictionary in a foreign language. This language uses the Latin alphabet, but the order of the letters is unknown and different from the standard English alphabet. The `words` list is sorted lexicographically according to the rules of this foreign language.

### Your task is to derive the order of the letters in this new language, based on the given lexicographically sorted `words`. If the given order is invalid (i.e., it contains a cycle), return an empty string. If there are multiple valid orderings, return any one of them.

### Note: A string `a` is lexicographically smaller than string `b` if:

1. The first letter where they differ is smaller in `a` than in `b`.
2. `a` is a prefix of `b`, and `a.length < b.length`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ words = ["z","o"]

  ### 📤 `Output`  ➤ "zo"

  ### 🔦 `Explanation`  ➤ From "z" and "o", we know 'z' < 'o', so return "zo".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ words = ["hrn","hrf","er","enn","rfnn"]

  ### 📤 `Output`  ➤ "hernf"

  ### 🔦 `Explanation` ➤

- From "hrn" and "hrf", we know 'n' < 'f'
- From "hrf" and "er", we know 'h' < 'e'
- From "er" and "enn", we know 'r' < 'n'
- From "enn" and "rfnn" we know 'e'<'r'
So one possible solution is "hernf"

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 The input words will contain characters only from lowercase 'a' to 'z'. </br>
🔹 1 <= words.length <= 100 </br>
🔹 1 <= words[i].length <= 100 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **String** </br>
🔸 **Graph** </br>
🔸 **Topological Sort** </br>
🔸 **Breadth-First Search** </br>
🔸 **Depth-First Search** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2098%20%F0%9F%A5%A1%20269.%20Alien%20Dictionary%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20269.%20Alien%20Dictionary.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2098%20%F0%9F%A5%A1%20269.%20Alien%20Dictionary%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20269.%20Alien%20Dictionary.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2098%20%F0%9F%A5%A1%20269.%20Alien%20Dictionary%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20269.%20Alien%20Dictionary.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2098%20%F0%9F%A5%A1%20269.%20Alien%20Dictionary%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20269.%20Alien%20Dictionary.js) |

</br>
