# 2416. Sum of Prefix Scores of Strings

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/sum-of-prefix-scores-of-strings/description/?envType=daily-question&envId=2024-09-25"><strong>➥ 🫀 2416 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array `words` of size `n` consisting of `non-empty` strings.

### We define the `score` of a string `word` as the `number` of strings `words[i]` such that word is a `prefix` of `words[i]`.

- For example, if `words = ["a", "ab", "abc", "cab"]`, then the score of `"ab"` is `2`, since `"ab"` is a prefix of both `"ab"` and `"abc"`.

### Return *an array `answer` of size `n` where `answer[i]` is the sum of scores of every `non-empty` prefix of `words[i]`*.

### Note that a string is considered as a prefix of itself.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ words = ["abc","ab","bc","b"]

  ### 📤 `Output`  ➤ [5,4,3,2]

  ### 🔦 `Explanation`  ➤ The answer for each string is the following ➺

    ➺ "abc" has 3 prefixes: "a", "ab", and "abc".
    ➺ There are 2 strings with the prefix "a", 
       2 strings with the prefix "ab", 
       and 1 string with the prefix "abc".
    The total is answer[0] = 2 + 2 + 1 = 5.

    ➺ "ab" has 2 prefixes: "a" and "ab".
    ➺ There are 2 strings with the prefix "a", 
       and 2 strings with the prefix "ab".
    The total is answer[1] = 2 + 2 = 4.

    ➺ "bc" has 2 prefixes: "b" and "bc".
    ➺ There are 2 strings with the prefix "b", 
       and 1 string with the prefix "bc".
    The total is answer[2] = 2 + 1 = 3.

    ➺ "b" has 1 prefix: "b".
    ➺ There are 2 strings with the prefix "b".
    The total is answer[3] = 2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ words = ["abcd"]

  ### 📤 `Output`  ➤ [4]

  ### 🔦 `Explanation` ➤ 

    "abcd" has 4 prefixes: "a", "ab", "abc", and "abcd".
    Each prefix has a score of one, so the total is answer[0] = 1 + 1 + 1 + 1 = 4.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ ["abcde","abc","ab","bc","b", "a"]

  ### 📤 `Output`  ➤ [11,9,7,3,2,4]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= words.length <= 1000`** </br>

🔹 **`1 <= words[i].length <= 1000`** </br>

🔹 **`words[i]` consists of lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **String**  </br>
🔸 **Trie**  </br>
🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/25%20-%2009%20-%202024%20---%202416.%20Sum%20of%20Prefix%20Scores%20of%20Strings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202416.%20Sum%20of%20Prefix%20Scores%20of%20Strings.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/25%20-%2009%20-%202024%20---%202416.%20Sum%20of%20Prefix%20Scores%20of%20Strings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202416.%20Sum%20of%20Prefix%20Scores%20of%20Strings.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/25%20-%2009%20-%202024%20---%202416.%20Sum%20of%20Prefix%20Scores%20of%20Strings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202416.%20Sum%20of%20Prefix%20Scores%20of%20Strings.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/25%20-%2009%20-%202024%20---%202416.%20Sum%20of%20Prefix%20Scores%20of%20Strings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202416.%20Sum%20of%20Prefix%20Scores%20of%20Strings.js) |
