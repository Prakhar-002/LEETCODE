# 208. Implement Trie (Prefix Tree)

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ 208 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A trie (pronounced "try") or prefix tree is a tree-like data structure used for efficient storage and retrieval of keys in a set of strings. This structure is commonly used in applications such as autocomplete and spellcheckers.

### Your task is to implement the `Trie` class, which models this data structure:

- `Trie()`: Initializes an empty Trie.
- `void insert(String word)`: Inserts the string `word` into the Trie.
- `boolean search(String word)`: Returns `true` if the string `word` exists in the Trie (meaning it was previously inserted). Returns `false` otherwise.
- `boolean startsWith(String prefix)`: Returns `true` if there is at least one string previously inserted into the Trie that has the given string `prefix` as its prefix. Returns `false` otherwise.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ 
  
```JS
["Trie", "insert", "search", "search", "startsWith", "insert", "search"]
[[], ["apple"], ["apple"], ["app"], ["app"], ["app"], ["app"]]
```

  ### 📤 `Output`  ➤ [null, null, true, false, true, null, true]

  ### 🔦 `Explanation`  ➤ 

```JS

Trie trie = new Trie();
trie.insert("apple");
trie.search("apple");   // return True
trie.search("app");     // return False
trie.startsWith("app"); // return True
trie.insert("app");
trie.search("app");     // return True

```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= word.length, prefix.length <= 2000 </br>

🔹 word and prefix consist only of lowercase English letters. </br>

🔹 At most 3 * 10<sup>4</sup> calls in total will be made to insert, search, and startsWith. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>

🔸 **String**  </br>

🔸 **Design**  </br>

🔸 **Trie**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Ties/Day%20%E2%9E%BA%2078%20%F0%9F%A5%A1%20208.%20Implement%20Trie%20(Prefix%20Tree)%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20208.%20Implement%20Trie%20(Prefix%20Tree).java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Ties/Day%20%E2%9E%BA%2078%20%F0%9F%A5%A1%20208.%20Implement%20Trie%20(Prefix%20Tree)%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20208.%20Implement%20Trie%20(Prefix%20Tree).cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Ties/Day%20%E2%9E%BA%2078%20%F0%9F%A5%A1%20208.%20Implement%20Trie%20(Prefix%20Tree)%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20208.%20Implement%20Trie%20(Prefix%20Tree).py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Ties/Day%20%E2%9E%BA%2078%20%F0%9F%A5%A1%20208.%20Implement%20Trie%20(Prefix%20Tree)%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20208.%20Implement%20Trie%20(Prefix%20Tree).js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/ba34c3df-11ac-42ea-9b4b-774275156898" width = "700px" height="462px" />

</h1>
