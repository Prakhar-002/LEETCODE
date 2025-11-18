# 3234. Count the Number of Substrings With Dominant Ones

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-the-number-of-substrings-with-dominant-ones/description/?envType=daily-question&envId=2025-11-15"><strong>➥ ☢️ 3234 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a binary string `s`.

### Return the number of substrings with dominant ones.

### A string has dominant ones if the number of ones in the string is greater than or equal to the square of the number of zeros in the string.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "00011"

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ The substrings with dominant ones are shown in the table below.

| i | j | s[i..j] | Number of Zeros | Number of Ones |
|---|---|---------|-----------------|---------------|
| 3 | 3 | 1       | 0               | 1             |
| 4 | 4 | 1       | 0               | 1             |
| 2 | 3 | 01      | 1               | 1             |
| 3 | 4 | 11      | 0               | 2             |
| 2 | 4 | 011     | 1               | 2             |

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "101101"

  ### 📤 `Output`  ➤ 16

  ### 🔦 `Explanation` ➤ The substrings with non-dominant ones are shown in the table below. Since there are 21 substrings total and 5 of them have non-dominant ones, it follows that there are 16 substrings with dominant ones.

| i | j | s[i..j] | Number of Zeros | Number of Ones |
|---|---|---------|-----------------|---------------|
| 1 | 1 | 0       | 1               | 0             |
| 4 | 4 | 0       | 1               | 0             |
| 1 | 4 | 0110    | 2               | 2             |
| 0 | 4 | 10110   | 2               | 3             |
| 1 | 5 | 01101   | 2               | 3             |

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= s.length <= 4 * 104 </br>
🔹 s consists only of characters '0' and '1'. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String** </br>
🔸 **Sliding Window** </br>
🔸 **Enumeration** </br>

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

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
