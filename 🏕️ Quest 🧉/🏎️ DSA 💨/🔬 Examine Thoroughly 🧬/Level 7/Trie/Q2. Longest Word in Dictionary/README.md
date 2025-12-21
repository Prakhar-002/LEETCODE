# Q2. Longest Word in Dictionary

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/longest-word-in-dictionary/description/?envType=problem-list-v2&envId=dsa-tree-shaped-deep-forest-trie"><strong>➥ ☢️ Q2 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an array of strings `words` representing an English Dictionary, return the **longest word** in `words` that can be built **one character at a time** by other words in `words`. 

### If there is more than one possible answer, return the longest word with the **smallest lexicographical order**. If there is no answer, return the empty string. 

### Note that the word must be built **from left to right**, with each additional character added to the **end** of a previous word.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤ `words = ["w","wo","wor","worl","world"]`

### 📤 `Output`  ➤ `"world"`

### 🔦 `Explanation`  ➤ The word `"world"` can be built one character at a time by `"w"`, `"wo"`, `"wor"`, and `"worl"`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `words = ["a","banana","app","appl","ap","apply","apple"]`

### 📤 `Output`  ➤ `"apple"`

### 🔦 `Explanation` ➤ Both `"apply"` and `"apple"` can be built from other words in the dictionary, but `"apple"` is lexicographically smaller.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= words.length <= 1000` </br>
🔹 `1 <= words[i].length <= 30` </br>
🔹 `words[i]` consists of lowercase English letters. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **String** </br>
🔸 **Trie** </br>
🔸 **Sorting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%207/Trie/Q2.%20Longest%20Word%20in%20Dictionary/%F0%9F%8D%81JAVA%20-%20Longest%20Word%20in%20Dictionary.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%207/Trie/Q2.%20Longest%20Word%20in%20Dictionary/%F0%9F%8E%B2CPP%20-%20Longest%20Word%20in%20Dictionary.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%207/Trie/Q2.%20Longest%20Word%20in%20Dictionary/%F0%9F%8D%B0PYTHON%20-%20Longest%20Word%20in%20Dictionary.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%207/Trie/Q2.%20Longest%20Word%20in%20Dictionary/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Longest%20Word%20in%20Dictionary.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/3b9266ae-49dc-4e84-bcab-592ea6463122" width = "700px" height="462px" />

</h1>
