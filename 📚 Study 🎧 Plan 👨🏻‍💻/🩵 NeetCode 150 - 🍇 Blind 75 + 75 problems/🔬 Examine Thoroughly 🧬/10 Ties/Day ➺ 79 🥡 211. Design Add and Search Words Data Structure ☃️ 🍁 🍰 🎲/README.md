# 211. Design Add and Search Words Data Structure

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/design-add-and-search-words-data-structure/description/"><strong>➥ ☢️ 211 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Your task is to design a data structure that efficiently supports adding new words and determining whether a given string matches any previously added word.

### You are required to implement the `WordDictionary` class, including the following methods:

- `WordDictionary()`: Initializes the `WordDictionary` object.
- `void addWord(String word)`: Adds the given `word` to the data structure. It is guaranteed that this word can be matched by future searches.
- `bool search(String word)`: Returns `true` if there is *any* string already present in the data structure that matches the input `word`. Otherwise, it returns `false`. The `word` you search for can contain the special character '.' (dot), where a '.' can match *any* single lowercase English letter.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ 

  ```JS
  ["WordDictionary","addWord","addWord","addWord","search","search","search","search"]

  [[],["bad"],["dad"],["mad"],["pad"],["bad"],[".ad"],["b.."]]
  ```

  ### 📤 `Output`  ➤ [null,null,null,null,false,true,true,true]

  ### 🔦 `Explanation`  ➤ 

```JS

WordDictionary wordDictionary = new WordDictionary();
wordDictionary.addWord("bad");
wordDictionary.addWord("dad");
wordDictionary.addWord("mad");
wordDictionary.search("pad"); // return False
wordDictionary.search("bad"); // return True
wordDictionary.search(".ad"); // return True
wordDictionary.search("b.."); // return True

```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= word.length <= 25 </br>

🔹 word in `addWord` consists of lowercase English letters. </br>

🔹 word in `search` consists of '.' or lowercase English letters. </br>

🔹 There will be at most 2 dots in `word` for `search` queries. </br>

🔹 At most 10<sup>4</sup> calls will be made to `addWord` and `search`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>

🔸 **Depth-First Search**  </br>

🔸 **Design**  </br>

🔸 **Trie**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Ties/Day%20%E2%9E%BA%2079%20%F0%9F%A5%A1%20211.%20Design%20Add%20and%20Search%20Words%20Data%20Structure%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20211.%20Design%20Add%20and%20Sear.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Ties/Day%20%E2%9E%BA%2079%20%F0%9F%A5%A1%20211.%20Design%20Add%20and%20Search%20Words%20Data%20Structure%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20211.%20Design%20Add%20and%20Search.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Ties/Day%20%E2%9E%BA%2079%20%F0%9F%A5%A1%20211.%20Design%20Add%20and%20Search%20Words%20Data%20Structure%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20211.%20Design%20Add%20and%20Sear.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Ties/Day%20%E2%9E%BA%2079%20%F0%9F%A5%A1%20211.%20Design%20Add%20and%20Search%20Words%20Data%20Structure%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20211.%20Design%20Add%20and%20.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/96fa92ee-475e-4856-9f56-6cd9d6861a0c" width = "700px" height="462px" />

</h1>
