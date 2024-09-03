# 1945. Sum of Digits of String After Convert

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/sum-of-digits-of-string-after-convert/description/?envType=daily-question&envId=2024-09-03"><strong>➥ ♻️ 1945 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `s` consisting of lowercase English letters, and an integer `k`.

### First, `convert` `s` into an integer by replacing each letter with its position in the alphabet (i.e., replace `'a'` with `1`, `'b'` with `2`, ..., `'z'` with `26`). Then, `transform` the integer by replacing it with the `sum of its digits`. Repeat the `transform` operation `k` `times` in total.

### For example, if `s = "zbax"` and `k = 2`, then the resulting integer would be `8` by the following operations:

- **Convert** ➺ `"zbax" ➝ "(26)(2)(1)(24)" ➝ "262124" ➝ 262124`

- **Transform #1** ➺ `262124 ➝ 2 + 6 + 2 + 1 + 2 + 4 ➝ 17`

- **Transform #2** ➺ `17 ➝ 1 + 7 ➝ 8`

### Return *the resulting integer after performing the operations described above*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "iiii", k = 1

  ### 📤 `Output`  ➤ 36

  ### 🔦 `Explanation`  ➤ The operations are as follows:
    
    ➺ Convert: "iiii" ➝ "(9)(9)(9)(9)" ➝ "9999" ➝ 9999
    
    ➺ Transform #1: 9999 ➝ 9 + 9 + 9 + 9 ➝ 36
    
    Thus the resulting integer is 36.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "leetcode", k = 2

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation` ➤ The operations are as follows:

    ➺ Convert: "leetcode" ➝ "(12)(5)(5)(20)(3)(15)(4)(5)"
          ➝ "12552031545" ➝ 12552031545

    ➺ Transform #1: 12552031545 ➝ 1 + 2 + 5 + 5 + 2 + 0 + 
          3 + 1 + 5 + 4 + 5 ➝ 33

    ➺ Transform #2: 33 ➝ 3 + 3 ➝ 6

    Thus the resulting integer is 6.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "zbax", k = 2

  ### 📤 `Output`  ➤ 8

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= s.length <= 100`** </br>

🔹 **`1 <= k <= 10`** </br>

🔹 **`s` consists of lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/03%20-%2009%20-%202024%20---%201945.%20Sum%20of%20Digits%20of%20String%20After%20Convert%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-1945-SumOfDigitsOfStringAfterConvert.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/03%20-%2009%20-%202024%20---%201945.%20Sum%20of%20Digits%20of%20String%20After%20Convert%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-1945-SumOfDigitsOfStringAfterConvert.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/03%20-%2009%20-%202024%20---%201945.%20Sum%20of%20Digits%20of%20String%20After%20Convert%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-1945-SumOfDigitsOfStringAfterConvert.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/03%20-%2009%20-%202024%20---%201945.%20Sum%20of%20Digits%20of%20String%20After%20Convert%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-1945-SumOfDigitsOfStringAfterConvert.js) |
