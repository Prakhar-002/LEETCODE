# 884. Uncommon Words from Two Sentences

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/uncommon-words-from-two-sentences/description/?envType=daily-question&envId=2024-09-17"><strong>➥ ♻️ 884 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A sentence is a string of single-space separated words where each word consists only of lowercase letters.

### A word is uncommon if it appears exactly once in one of the sentences, and does not appear in the other sentence.

### Given two `sentences` `s1` and `s2`, return *a list of all the `uncommon words`. You may return the answer in `any order`*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s1 = "this apple is sweet", s2 = "this apple is sour"

  ### 📤 `Output`  ➤ ["sweet","sour"]

  ### 🔦 `Explanation`  ➤ The word `"sweet"` appears only in `s1`, while the word `"sour"` appears only in `s2`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s1 = "apple apple", s2 = "banana"

  ### 📤 `Output`  ➤ ["banana"]

  ### 🔦 `Explanation` ➤ 


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s1 = "this apple is sweet sweet sweet and good" s2 = "this apple is sour"

  ### 📤 `Output`  ➤ ["and","good","sour"]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= s1.length, s2.length <= 200`** </br>

🔹 **`s1` and `s2` consist of lowercase English letters and spaces.** </br>

🔹 **`s1` and `s2` do not have leading or trailing spaces.** </br>

🔹 **All the words in `s1` and `s2` are separated by a single space.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/17%20-%2009%20-%202024%20---%20884.%20Uncommon%20Words%20from%20Two%20Sentences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20884.%20Uncommon%20Words%20from%20Two%20Sentences.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/17%20-%2009%20-%202024%20---%20884.%20Uncommon%20Words%20from%20Two%20Sentences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20884.%20Uncommon%20Words%20from%20Two%20Sentences.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/17%20-%2009%20-%202024%20---%20884.%20Uncommon%20Words%20from%20Two%20Sentences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20884.%20Uncommon%20Words%20from%20Two%20Sentences.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/17%20-%2009%20-%202024%20---%20884.%20Uncommon%20Words%20from%20Two%20Sentences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20884.%20Uncommon%20Words%20from%20Two%20Sentences.js) |
