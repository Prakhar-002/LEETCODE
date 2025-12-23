# Q3. Word Break

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/word-break/description/?envType=problem-list-v2&envId=dsa-strategy-summit-2d-dynamic-programming"><strong>➥ ☢️ Q3 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a string `s` and a dictionary of strings `wordDict`, return `true` if `s` can be segmented into a space-separated sequence of one or more dictionary words. 

### The same word in the dictionary may be **reused multiple times** in the segmentation.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤ `s = "leetcode", wordDict = ["leet","code"]`

### 📤 `Output`  ➤ `true`

### 🔦 `Explanation`  ➤ `"leetcode"` can be segmented as `"leet code"`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `s = "applepenapple", wordDict = ["apple","pen"]`

### 📤 `Output`  ➤ `true`

### 🔦 `Explanation` ➤ `"applepenapple"` can be segmented as `"apple pen apple"`. Dictionary words can be reused.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `s = "catsandog", wordDict = ["cats","dog","sand","and","cat"]`

### 📤 `Output`  ➤ `false`

### 🔦 `Explanation` ➤ No segmentation of `"catsandog"` can use only dictionary words.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= s.length <= 300` </br>
🔹 `1 <= wordDict.length <= 1000` </br>
🔹 `1 <= wordDict[i].length <= 20` </br>
🔹 `s` and `wordDict[i]` consist only of lowercase English letters. </br>
🔹 All strings in `wordDict` are **unique**. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **String** </br>
🔸 **Dynamic Programming** </br>
🔸 **Trie** </br>
🔸 **Memoization** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/2D%20-%20DP/Q3.%20Word%20Break/%F0%9F%8D%81JAVA%20-%20Word%20Break.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/2D%20-%20DP/Q3.%20Word%20Break/%F0%9F%8E%B2CPP%20-%20Word%20Break.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/2D%20-%20DP/Q3.%20Word%20Break/%F0%9F%8D%B0PYTHON%20-%20Word%20Break.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/2D%20-%20DP/Q3.%20Word%20Break/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Word%20Break.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/961bc15a-0873-4496-9be0-98aa7e7b967a" width = "700px" height="462px" />

</h1>
