# 2707. Extra Characters in a String

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/extra-characters-in-a-string/description/?envType=daily-question&envId=2024-09-23"><strong>➥ ☢️ 2707 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a `0-indexed` string `s` and a dictionary of words `dictionary`. You have to break `s` into one or more `non-overlapping` substrings such that each substring is present in `dictionary`. There may be some `extra characters` in `s` which are not present in any of the substrings.

### Return *the `minimum` number of extra characters left over if you break up `s` optimally*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "leetscode", dictionary = ["leet","code","leetcode"]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ We can break s in two substrings: "leet" from index 0 to 3 and "code" from index 5 to 8. There is only 1 unused character (at index 4), so we return 1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  s = "sayhelloworld", dictionary = ["hello","world"]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤  We can break s in two substrings: "hello" from index 3 to 7 and "world" from index 8 to 12. The characters at indices 0, 1, 2 are not used in any substring and thus are considered as extra characters. Hence, we return 3.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= s.length <= 50`** </br>

🔹 **`1 <= dictionary.length <= 50`** </br>

🔹 **`1 <= dictionary[i].length <= 50`** </br>

🔹 **`dictionary[i]` and `s` consists of only lowercase English letters** </br>

🔹 **`dictionary` contains distinct words** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Trie**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

