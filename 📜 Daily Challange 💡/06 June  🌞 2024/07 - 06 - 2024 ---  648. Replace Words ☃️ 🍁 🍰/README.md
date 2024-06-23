# 648. Replace Words

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/replace-words/?envType=daily-question&envId=2024-06-23"><strong>➥ ☢️ 648 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### In English, we have a concept called root, which can be followed by some other word to form another longer word - let's call this word **derivative**. For example, when the root `"help"` is followed by the word `"ful"`, we can form a derivative `"helpful"`.

### Given a `dictionary` consisting of many **roots** and a `sentence` consisting of words separated by spaces, replace all the derivatives in the sentence with the `root` forming it. If a derivative can be replaced by more than one `root`, replace it with the `root` that has **the shortest length**.

### Return *the `sentence` after the replacement*.

 
</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ dictionary = ["cat","bat","rat"], sentence = "the cattle was rattled by the battery"

  ### Output  ➤ "the cat was rat by the bat"

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤  dictionary = ["a","b","c"], sentence = "aadsfasf absbs bbab cadsfafs"

  ### Output  ➤ "a a b c"

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= dictionary.length <= 1000**
- **1 <= dictionary[i].length <= 100**
- **dictionary[i] consists of only lower-case letters.**
- **1 <= sentence.length <= 106**
- **sentence consists of only lower-case letters and spaces.**
- **The number of words in sentence is in the range [1, 1000]**
- **The length of each word in sentence is in the range [1, 1000]**
- **Every two consecutive words in sentence will be separated by exactly one space.**
- **sentence does not have leading or trailing spaces.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Hash Table**
3. **String**
4. **Trie**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/07%20-%2006%20-%202024%20---%20%20648.%20Replace%20Words%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0/%F0%9F%8D%81JAVA_648_ReplaceWords.java) |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/07%20-%2006%20-%202024%20---%20%20648.%20Replace%20Words%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0/%F0%9F%8D%B0PYTHON_648_ReplaceWords.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/07%20-%2006%20-%202024%20---%20%20648.%20Replace%20Words%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0/%E2%98%83%EF%B8%8FJAVASCRIPT_648_ReplaceWords.js) |
