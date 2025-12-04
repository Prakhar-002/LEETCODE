# Q3. Magical String

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/magical-string/description/?envType=problem-list-v2&envId=dsa-recursion-maze-two-pointers"><strong>➥ ☢️ Q3 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A magical string `s` consists of only '1' and '2' and obeys the following rules:

### The string `s` is magical because concatenating the number of contiguous occurrences of characters '1' and '2' generates the string `s` itself.

### The first few elements of `s` is `s = "1221121221221121122……"`. If we group the consecutive 1's and 2's in `s`, it will be `"1 22 11 2 1 22 1 22 11 2 11 22 ......"` and the occurrences of 1's or 2's in each group are `"1 2 2 1 1 2 1 2 2 1 2 2 ......"`. You can see that the occurrence sequence is `s` itself.

### Given an integer `n`, return the number of 1's in the first `n` number in the magical string `s`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 6

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ The first 6 elements of magical string s is "122112" and it contains three 1's, so return 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 1

  ### 📤 `Output`  ➤ 1

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= n <= 10<sup>5</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Two Pointers** </br>
🔸 **String** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Two%20Pointers/Q3.%20Magical%20String/%F0%9F%8D%81JAVA%20-%20Magical%20String.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Two%20Pointers/Q3.%20Magical%20String/%F0%9F%8E%B2CPP%20-%20Magical%20String.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Two%20Pointers/Q3.%20Magical%20String/%F0%9F%8D%B0PYTHON%20-%20Magical%20String.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Two%20Pointers/Q3.%20Magical%20String/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Magical%20String.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/ec0ba867-6f56-42ee-84a7-ed495ab6a67b" width = "700px" height="462px" />

</h1>
