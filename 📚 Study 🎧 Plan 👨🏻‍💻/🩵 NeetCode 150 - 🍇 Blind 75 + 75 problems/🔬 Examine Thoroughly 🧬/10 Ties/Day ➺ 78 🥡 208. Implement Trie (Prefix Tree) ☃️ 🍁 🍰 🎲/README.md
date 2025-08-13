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
