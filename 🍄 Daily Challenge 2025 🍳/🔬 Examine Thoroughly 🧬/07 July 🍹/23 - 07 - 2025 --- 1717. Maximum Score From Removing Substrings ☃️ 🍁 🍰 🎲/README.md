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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/23%20-%2007%20-%202025%20---%201717.%20Maximum%20Score%20From%20Removing%20Substrings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201717.%20Maximum%20Score%20From%20Removing%20Substrings.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/23%20-%2007%20-%202025%20---%201717.%20Maximum%20Score%20From%20Removing%20Substrings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201717.%20Maximum%20Score%20From%20Removing%20Substrings.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/23%20-%2007%20-%202025%20---%201717.%20Maximum%20Score%20From%20Removing%20Substrings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201717.%20Maximum%20Score%20From%20Removing%20Substrings.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/23%20-%2007%20-%202025%20---%201717.%20Maximum%20Score%20From%20Removing%20Substrings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201717.%20Maximum%20Score%20From%20Removing%20Substrings.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/74879ef7-e9d6-43e5-b6a0-ec8c42d1be78" width = "700px" height="462px" />

</h1>
