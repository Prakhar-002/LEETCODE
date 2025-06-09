# 3170. Lexicographically Minimum String After Removing Stars

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/lexicographically-minimum-string-after-removing-stars/description/?envType=daily-question&envId=2025-06-07"><strong>➥ ☢️ 3170 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `s`. This string may contain any number of '*' characters. The objective is to remove *all* '*' characters from the string.

The removal process is as follows: While there exists a '*' in the string `s`, perform the following operation:

1. Delete the *leftmost* '*' character.
2.  Delete the *smallest* non-'*' character that is to the *left* of the deleted '*'. If multiple characters satify this condition (i.e., there are several smallest characters to the left), you can choose to delete any one of them.

### Your goal is to return the lexicographically smallest string that results after completely removing all '*' characters from the original string.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "aaba*"

  ### 📤 `Output`  ➤ "aab"

  ### 🔦 `Explanation`  ➤
We should delete one of the 'a' characters with '*'. If we choose s[3], s becomes the lexicographically smallest.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "abc"

  ### 📤 `Output`  ➤ "abc"

  ### 🔦 `Explanation` ➤ There is no '*' in the string.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= s.length <= 10<sup>5</sup> </br>

🔹 s consists only of lowercase English letters and '*'. </br>

🔹 The input is generated such that it is possible to delete all '*' characters. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table** </br>
🔸 **String** </br>
🔸 **Stack** </br>
🔸 **Greedy** </br>
🔸 **Heap (Priority Queue)** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/07%20-%2006%20-%202025%20---%203170.%20Lexicographically%20Minimum%20String%20After%20Removing%20Stars%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203170.%20Lexicographically%20Minimum%20String%20Afte.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/07%20-%2006%20-%202025%20---%203170.%20Lexicographically%20Minimum%20String%20After%20Removing%20Stars%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203170.%20Lexicographically%20Minimum%20String%20After%20.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/07%20-%2006%20-%202025%20---%203170.%20Lexicographically%20Minimum%20String%20After%20Removing%20Stars%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203170.%20Lexicographically%20Minimum%20String%20Afte.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/07%20-%2006%20-%202025%20---%203170.%20Lexicographically%20Minimum%20String%20After%20Removing%20Stars%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203170.%20Lexicographically%20Minimum%20String%20.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/d30dc9de-409b-4fc2-a9af-318ec6055ad5" width = "700px" height="462px" />

</h1>
