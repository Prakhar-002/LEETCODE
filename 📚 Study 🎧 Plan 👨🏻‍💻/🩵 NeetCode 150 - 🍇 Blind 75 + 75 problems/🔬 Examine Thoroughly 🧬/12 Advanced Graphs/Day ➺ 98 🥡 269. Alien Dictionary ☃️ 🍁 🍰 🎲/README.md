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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
