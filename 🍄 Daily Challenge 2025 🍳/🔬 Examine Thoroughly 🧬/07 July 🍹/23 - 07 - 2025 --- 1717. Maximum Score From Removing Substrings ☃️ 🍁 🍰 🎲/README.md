# 1717. Maximum Score From Removing Substrings

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-score-from-removing-substrings/description/?envType=daily-question&envId=2025-07-23"><strong>➥ ☢️ 1717 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `s` and two integers `x` and `y`. You can perform two types of operations any number of times.

- Remove substring `"ab"` and gain `x` points.

  - For example, when removing `"ab"` from `"cabxbae"` it becomes `"cxbae"`.

- Remove substring `"ba"` and gain `y` points.

  - For example, when removing `"ba"` from `"cabxbae"` it becomes `"cabxe"`.

### Return *the maximum points you can gain after applying the above operations on `s`*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 Input  ➤ s = "cdbcbbaaabab", x = 4, y = 5

  ### 📤 Output  ➤ 19

  ### 🔦 Explanation  ➤ 

    ⭐ ➺ Remove the "ba" underlined in "cdbcbbaaabab". Now, 
          s = "cdbcbbaaab" and 5 points are added to the score.
    
    ⭐ ➺ Remove the "ab" underlined in "cdbcbbaaab". Now, 
          s = "cdbcbbaa" and 4 points are added to the score.
    
    ⭐ ➺ Remove the "ba" underlined in "cdbcbbaa". Now, 
          s = "cdbcba" and 5 points are added to the score.
    
    ⭐ ➺ Remove the "ba" underlined in "cdbcba". Now, 
          s = "cdbc" and 5 points are added to the score.

    Total score = 5 + 4 + 5 + 5 = 19.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ s = "aabbaaxybbaabb", x = 5, y = 4

  ### 📤 Output  ➤ 20

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= s.length <= 10<sup>5</sup>** </br>
🔹 **1 <= x, y <= 10<sup>4</sup>** </br>
🔹 **`s` consists of lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>
🔸 **Stack**  </br>
🔸 **Greedy**  </br>

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
