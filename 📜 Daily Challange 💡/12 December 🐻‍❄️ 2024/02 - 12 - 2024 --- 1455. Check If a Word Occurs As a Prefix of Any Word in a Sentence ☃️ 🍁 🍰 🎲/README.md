# 1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/description/?envType=daily-question&envId=2024-12-02"><strong>➥ ♻️ 1455 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a `sentence` that consists of some words separated by a single space, and a `searchWord`, check if `searchWord` is a prefix of any word in `sentence`.

### Return *the index of the word in `sentence` (1-indexed) where `searchWord` is a prefix of this word*. If `searchWord` is a prefix of more than one word, return the index of the first word (`minimum index`). If there is no such word return `-1`.

### A prefix of a string `s` is any leading contiguous substring of `s`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ sentence = "i love eating burger", searchWord = "burg"

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ "burg" is prefix of "burger" which is the 4th word in the sentence.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ sentence = "this problem is an easy problem", searchWord = "pro"

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ "pro" is prefix of "problem" which is the 2nd and the 6th word in the sentence, but we return 2 as it's the minimal index.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ sentence = "i am tired", searchWord = "you"

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation`  ➤ "you" is not a prefix of any word in the sentence.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= sentence.length <= 100`** </br>

🔹 *`1 <= searchWord.length <= 10`** </br>

🔹 **`sentence` consists of lowercase English letters and spaces.** </br>

🔹 **`searchWord` consists of lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Two Pointers**  </br>
🔸 **String**  </br>
🔸 **String Matching**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

