# 127. Word Ladder

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/word-ladder/description/"><strong>➥ 🫀 127 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A transformation sequence from `beginWord` to `endWord` using a dictionary `wordList` is a sequence of words `beginWord -> s1 -> s2 -> ... -> sk` that follows these rules:

1. **One-Letter Difference:** Each adjacent pair of words in the sequence must differ by exactly one letter.
2. **Dictionary Words:** Every word `si` (where `1 <= i <= k`) must be present in the `wordList`. Note that the `beginWord` itself does not need to be in `wordList`.
3. **Target Word:** The final word `sk` must be equal to the `endWord`.

### Given the `beginWord`, `endWord`, and `wordList`, your task is to find the *number* of words in the *shortest* such transformation sequence from `beginWord` to `endWord`. If no such sequence exists, return 0.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log","cog"]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ One shortest transformation sequence is "hit" -> "hot" -> "dot" -> "dog" -> "cog", which is 5 words long.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log"]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ The endWord "cog" is not in wordList, therefore there is no valid transformation sequence.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= beginWord.length <= 10 </br>

🔹 endWord.length == beginWord.length </br>

🔹 1 <= wordList.length <= 5000 </br>

🔹 wordList[i].length == beginWord.length </br>

🔹 beginWord, endWord, and wordList[i] consist of lowercase English letters. </br>

🔹 beginWord != endWord </br>

🔹 All the words in wordList are unique. </br>

</br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Breadth-First Search**  </br>

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

<img src ="https://github.com/user-attachments/assets/0462ecb0-854c-4cee-8abd-629efc739e8e" width = "700px" height="462px" />

</h1>
