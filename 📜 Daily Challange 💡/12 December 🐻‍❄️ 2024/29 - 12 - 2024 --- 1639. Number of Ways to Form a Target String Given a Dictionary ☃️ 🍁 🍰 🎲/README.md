# 1639. Number of Ways to Form a Target String Given a Dictionary

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/number-of-ways-to-form-a-target-string-given-a-dictionary/description/?envType=daily-question&envId=2024-12-29"><strong>➥ ☢️ 1639 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a list of strings of the same length `words` and a string `target`.

### Your task is to form `target` using the given `words` under the following `rules`:

- `target` should be formed from left to right.

- To form the i<sup>th</sup> character (0-indexed) of `target`, you can choose the k<sup>th</sup> character of the j<sup>th</sup> string in words if `target[i] = words[j][k]`.

- Once you use the k<sup>th</sup> character of the j<sup>th</sup> string of words, you can no longer use the x<sup>th</sup> character of any string in `words` where `x <= k`. In other words, all characters to the left of or at index `k` become unusuable for every string.

- Repeat the process until you form the string `target`.

### Notice that you can use multiple characters from the same string in `words` provided the conditions above are met.

### Return the number of ways to form target from words. Since the answer may be too large, return it modulo 109 + 7.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ words = ["acca","bbbb","caca"], target = "aba"

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation`  ➤ There are 6 ways to form target.

#### "aba" ➺ index 0 ("<ins>a</ins>cca"), index 1 ("b<ins>b</ins>bb"), index 3 ("cac<ins>a</ins>")

#### "aba" ➺ index 0 ("<ins>a</ins>cca"), index 2 ("bb<ins>b</ins>b"), index 3 ("cac<ins>a</ins>")

#### "aba" ➺ index 0 ("<ins>a</ins>cca"), index 1 ("b<ins>b</ins>bb"), index 3 ("acc<ins>a</ins>")

#### "aba" ➺ index 0 ("<ins>a</ins>cca"), index 2 ("bb<ins>b</ins>b"), index 3 ("acc<ins>a</ins>")

#### "aba" ➺ index 1 ("c<ins>a</ins>ca"), index 2 ("bb<ins>b</ins>b"), index 3 ("acc<ins>a</ins>")

#### "aba" ➺ index 1 ("c<ins>a</ins>ca"), index 2 ("bb<ins>b</ins>b"), index 3 ("cac<ins>a</ins>")

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ words = ["abba","baab"], target = "bab"

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤ There are 4 ways to form target.

#### "bab" ➺ index 0 ("<ins>b</ins>aab"), index 1 ("b<ins>a</ins>ab"), index 2 ("ab<ins>b</ins>a")

#### "bab" ➺ index 0 ("<ins>b</ins>aab"), index 1 ("b<ins>a</ins>ab"), index 3 ("baa<ins>b</ins>")

#### "bab" ➺ index 0 ("<ins>b</ins>aab"), index 2 ("ba<ins>a</ins>b"), index 3 ("baa<ins>b</ins>")

#### "bab" ➺ index 1 ("a<ins>b</ins>ba"), index 2 ("ba<ins>a</ins>b"), index 3 ("baa<ins>b</ins>")

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= words.length <= 1000`** </br>

🔹 **`1 <= words[i].length <= 1000`** </br>

🔹 **All strings in `words` have the same length.** </br>

🔹 **`1 <= target.length <= 1000`** </br>

🔹 **`words[i]` and `target` contain only lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **String**  </br>
🔸 **Dynamic Programming**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/29%20-%2012%20-%202024%20---%201639.%20Number%20of%20Ways%20to%20Form%20a%20Target%20String%20Given%20a%20Dictionary%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201639.%20Number%20of%20Ways%20to%20Form%20a%20Target%20String%20Given%20a%20Dicti.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/29%20-%2012%20-%202024%20---%201639.%20Number%20of%20Ways%20to%20Form%20a%20Target%20String%20Given%20a%20Dictionary%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201639.%20Number%20of%20Ways%20to%20Form%20a%20Target%20String%20Given%20a%20Diction.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/29%20-%2012%20-%202024%20---%201639.%20Number%20of%20Ways%20to%20Form%20a%20Target%20String%20Given%20a%20Dictionary%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201639.%20Number%20of%20Ways%20to%20Form%20a%20Target%20String%20Given%20a%20Dicti.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/29%20-%2012%20-%202024%20---%201639.%20Number%20of%20Ways%20to%20Form%20a%20Target%20String%20Given%20a%20Dictionary%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201639.%20Number%20of%20Ways%20to%20Form%20a%20Target%20String%20Given%20a%20D.js) |
