# 1813. Sentence Similarity III

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/sentence-similarity-iii/description/?envType=daily-question&envId=2024-10-06"><strong>➥ ☢️ 1813 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two strings `sentence1` and `sentence2`, each representing a `sentence` composed of words. A sentence is a list of words that are separated by a `single` space with no leading or trailing spaces. Each word consists of only uppercase and lowercase English characters.

### Two sentences `s1` and `s2` are considered `similar` if it is possible to insert an arbitrary sentence (possibly empty) inside one of these sentences such that the two sentences become equal. `Note` that the inserted sentence must be separated from existing words by spaces.

For example,

- `s1 = "Hello Jane"` and `s2 = "Hello my name is Jane"` can be made equal by inserting `"my name is"` between `"Hello"` and `"Jane"` in `s1`.

- `s1 = "Frog cool"` and `s2 = "Frogs are cool"` are `not` similar, since although there is a sentence `"s are"` inserted into `s1`, it is not separated from `"Frog"` by a space.

### Given two sentences `sentence1` and `sentence2`, return `true` if `sentence1` and `sentence2` are `similar`. Otherwise, return `false`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  sentence1 = "My name is Haley", sentence2 = "My Haley"

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ `sentence2` can be turned to `sentence1` by inserting "name is" between "My" and "Haley".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  sentence1 = "of", sentence2 = "A lot of words"

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation` ➤ No single sentence can be inserted inside one of the sentences to make it equal to the other.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ sentence1 = "Eating right now", sentence2 = "Eating"

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ sentence2 can be turned to sentence1 by inserting "right now" at the end of the sentence.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= sentence1.length, sentence2.length <= 100`** </br>

🔹 **`sentence1` and `sentence2` consist of lowercase and uppercase English letters and spaces.** </br>

🔹 **The words in `sentence1` and `sentence2` are separated by a single space.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Two Pointers**  </br>
🔸 **String**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

