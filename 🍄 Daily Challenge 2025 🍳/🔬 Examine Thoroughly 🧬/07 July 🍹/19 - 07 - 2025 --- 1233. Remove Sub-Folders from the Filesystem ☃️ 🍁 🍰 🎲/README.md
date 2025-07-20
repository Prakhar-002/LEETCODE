# 1233. Remove Sub-Folders from the Filesystem

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/remove-sub-folders-from-the-filesystem/description/?envType=daily-question&envId=2025-07-20"><strong>➥ ☢️ 1233 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a list of folders `folder`, return *the folders after removing all `sub-folders` in those folders*. You may return the answer in `any order`.

### If a `folder[i]` is located within another `folder[j]`, it is called a `sub-folder` of it. A sub-folder of `folder[j]` must start with `folder[j]`, followed by a `"/"`. For example, `"/a/b"` is a sub-folder of `"/a"`, but `"/b"` is not a sub-folder of `"/a/b/c"`.

### The format of a path is one or more concatenated strings of the form: `'/'` followed by one or more lowercase English letters.

- For example, `"/leetcode"` and `"/leetcode/problems"` are valid paths while an empty string and `"/"` are not.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ folder = ["/a","/a/b","/c/d","/c/d/e","/c/f"]

  ### 📤 `Output`  ➤ ["/a","/c/d","/c/f"]

  ### 🔦 `Explanation`  ➤ ➺Folders "/a/b" is a subfolder of "/a" and "/c/d/e" is inside of folder "/c/d" in our filesystem.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ folder = ["/a","/a/b/c","/a/b/d"]

  ### 📤 `Output`  ➤ ["/a"]

  ### 🔦 `Explanation` ➤  Folders "/a/b/c" and "/a/b/d" will be removed because they are subfolders of "/a".

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ folder = ["/a/b/c","/a/b/ca","/a/b/d"]

  ### 📤 `Output`  ➤ ["/a/b/c","/a/b/ca","/a/b/d"]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= folder.length <= 4 * 10<sup>4</sup>** </br>

🔹 **`2 <= folder[i].length <= 100`** </br>

🔹 **`folder[i]` contains only lowercase letters and `'/'`.** </br>

🔹 **`folder[i]` always starts with the character `'/'`.** </br>

🔹 **Each folder name is `unique`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **String**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Trie**  </br>

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

<img src ="" width = "700px" height="462px" />

</h1>
