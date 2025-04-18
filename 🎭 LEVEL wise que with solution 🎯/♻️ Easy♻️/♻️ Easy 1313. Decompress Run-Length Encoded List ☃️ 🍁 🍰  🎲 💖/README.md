# 1313. Decompress Run-Length Encoded List

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/decompress-run-length-encoded-list/description/"><strong>➥ ♻️ 1313 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a list `nums` of integers that represents a list compressed using run-length encoding.

### The compression scheme is such that each *adjacent* pair of elements `[freq, val] = [nums[2*i], nums[2*i+1]]` (where `i >= 0`) represents a sublist containing `freq` elements all with the value `val`. In essence, you are given the frequency (`freq`) and the value (`val`) which tells you how many times to repeat that value.

### Your task is to concatenate all the generated sublists from left to right, thereby creating the decompressed list.  Return this decompressed list as the output.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,2,3,4]

  ### 📤 `Output`  ➤ [2,4,4,4]

  ### 🔦 `Explanation`  ➤
The first pair [1,2] means we have freq = 1 and val = 2 so we generate the array [2].
The second pair [3,4] means we have freq = 3 and val = 4 so we generate [4,4,4].
At the end the concatenation [2] + [4,4,4] is [2,4,4,4].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,1,2,3]

  ### 📤 `Output`  ➤ [1,3,3]

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2, 1, 3, 5]

  ### 📤 `Output`  ➤ [1, 1, 5, 5, 5]

  ### 🔦 `Explanation`  ➤  The process iterates and count frequency where they use the total output count from their pair like:  `1.value = 1 repeat 2` then  5 has `repeat 3 so this array list show them`.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

   ### 📥 `Input`  ➤ nums = [1, 4, 1, 3, 1, 2]

  ### 📤 `Output`  ➤ [4, 3, 2]

  ### 🔦 `Explanation`  ➤ All value append on total as :  This result is `freq * number`, this equal.  If frequency equals 0 this must zero-

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 2 <= nums.length <= 100 </br>
🔹 nums.length % 2 == 0 </br>
🔹 1 <= nums[i] <= 100 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201313.%20Decompress%20Run-Length%20Encoded%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%201313.%20Decompress%20Run-Length%20Encoded%20List.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201313.%20Decompress%20Run-Length%20Encoded%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%201313.%20Decompress%20Run-Length%20Encoded%20List.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201313.%20Decompress%20Run-Length%20Encoded%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%201313.%20Decompress%20Run-Length%20Encoded%20List.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201313.%20Decompress%20Run-Length%20Encoded%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201313.%20Decompress%20Run-Length%20Encoded%20List.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201313.%20Decompress%20Run-Length%20Encoded%20List%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%201313.%20Decompress%20Run-Length%20Encoded%20List.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/9122bf3e-8675-4f86-9e0f-96c82f2f9e6e" width = "700px" height="462px" />

</h1>
