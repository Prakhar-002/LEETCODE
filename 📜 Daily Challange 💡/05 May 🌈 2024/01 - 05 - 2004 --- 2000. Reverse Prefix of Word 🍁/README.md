# 2000. Reverse Prefix of Word

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/reverse-prefix-of-word/description/?envType=daily-question&envId=2024-05-01"><strong>➥ ♻️ 2000 Leetcode Que  Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a 0-indexed string `word` and a character `ch`, `reverse` the segment of `word` that starts at index `0` and ends at the index of the `first occurrence` of `ch (inclusive)`. If the character `ch` does not exist in `word`, do nothing.

- For example, if `word = "abcdefd"` and `ch = "d"`, then you should reverse the segment that starts at `0` and ends at `3` **(inclusive)**. The resulting string will be `"dcbaefd"`.

### Return *the resulting string.*


</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ word = "abcdefd", ch = "d"

  ### Output  ➤ "dcbaefd"

  ### Explanation  ➤ The first occurrence of "d" is at index 3. </br> Reverse the part of word from 0 to 3 (inclusive), the resulting string is "dcbaefd".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤  word = "xyxzxe", ch = "z"

  ### Output  ➤ "zxyxxe"

  ### Explanation ➤ The first and only occurrence of "z" is at index 3. </br> Reverse the part of word from 0 to 3 (inclusive), the resulting string is "zxyxxe".


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤ word = "abcd", ch = "z"

  ### Output  ➤  "abcd"

  ### Explanation  ➤  "z" does not exist in word. </br> You should not do any reverse operation, the resulting string is "abcd".

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= word.length <= 250**
- **`word` consists of lowercase English letters.**
- **`ch` is a lowercase English letter.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Two Pointers**
2. **String**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/01%20-%2005%20-%202004%20---%202000.%20Reverse%20Prefix%20of%20Word%20%F0%9F%8D%81/%F0%9F%8D%81JAVA_2000_ReversePrefixofWord.java) |