# 916. Word Subsets

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/word-subsets/description/?envType=daily-question&envId=2025-01-10"><strong>➥ ☢️ 916 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two string arrays words1 and words2.

### A string b is a subset of string a if every letter in b occurs in a including multiplicity.

- For example, `"wrr"` is a subset of `"warrior"` but is not a subset of `"world"`.

### A string `a` from `words1` is universal if for every string `b` in `words2`, `b` is a subset of `a`.

### Return an array of all the `universal` strings in `words1`. You may return the answer in `any order`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  words1 = ["amazon","apple","facebook","google","leetcode"], words2 = ["e","o"]

  ### 📤 `Output`  ➤ ["facebook","google","leetcode"]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ words1 = ["amazon","apple","facebook","google","leetcode"], words2 = ["l","e"]

  ### 📤 `Output`  ➤ ["apple","google","leetcode"]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= words1.length, words2.length <= 10<sup>4</sup>** </br>

🔹 **`1 <= words1[i].length, words2[i].length <= 10`** </br>

🔹 **`words1[i]` and `words2[i]` consist only of lowercase English letters.** </br>

🔹 **All the strings of `words1` are unique.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **String**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/10%20-%2001%20-%202025%20---%20%20916.%20Word%20Subsets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20916.%20Word%20Subsets.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/10%20-%2001%20-%202025%20---%20%20916.%20Word%20Subsets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20916.%20Word%20Subsets.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/10%20-%2001%20-%202025%20---%20%20916.%20Word%20Subsets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20916.%20Word%20Subsets.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/10%20-%2001%20-%202025%20---%20%20916.%20Word%20Subsets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20916.%20Word%20Subsets.js) |
