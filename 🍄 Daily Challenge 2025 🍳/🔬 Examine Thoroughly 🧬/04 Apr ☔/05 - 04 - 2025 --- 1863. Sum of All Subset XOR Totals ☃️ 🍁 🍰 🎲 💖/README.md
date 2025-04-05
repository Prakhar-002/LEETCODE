# 1863. Sum of All Subset XOR Totals

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/sum-of-all-subset-xor-totals/?envType=daily-question&envId=2025-04-05"><strong>➥ ♻️ 1863 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### The *XOR total* of an array is defined as the bitwise XOR of all its elements. If the array is empty, the XOR total is 0.

For example, the XOR total of the array [2,5,6] is 2 XOR 5 XOR 6 = 1.

You are given an array `nums`. Your task is to return the sum of all XOR totals for every possible subset of `nums`.

Note that subsets containing the same elements should be counted multiple times if they occur multiple times within the process of generating all subsets.

An array `a` is a subset of an array `b` if `a` can be obtained from `b` by deleting some (possibly zero) elements of `b`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,3]

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation`  ➤
The 4 subsets of [1,3] are:

- The empty subset has an XOR total of 0.
- [1] has an XOR total of 1.
- [3] has an XOR total of 3.
- [1,3] has an XOR total of 1 XOR 3 = 2.
0 + 1 + 3 + 2 = 6

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [5,1,6]

  ### 📤 `Output`  ➤ 28

  ### 🔦 `Explanation` ➤
The 8 subsets of [5,1,6] are:

- The empty subset has an XOR total of 0.
- [5] has an XOR total of 5.
- [1] has an XOR total of 1.
- [6] has an XOR total of 6.
- [5,1] has an XOR total of 5 XOR 1 = 4.
- [5,6] has an XOR total of 5 XOR 6 = 3.
- [1,6] has an XOR total of 1 XOR 6 = 7.
- [5,1,6] has an XOR total of 5 XOR 1 XOR 6 = 2.
0 + 5 + 1 + 6 + 4 + 3 + 7 + 2 = 28

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [3,4,5,6,7,8]

  ### 📤 `Output`  ➤ 480

  ### 🔦 `Explanation`  ➤ The sum of all XOR totals for every subset is 480.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

   ### 📥 `Input`  ➤ nums = [1, 2, 3, 4]
   ### 📤 `Output`  ➤ 30

   ### 🔦 `Explanation`  ➤ The possible value occur subset is like empty+ nums,single/pair value based calculation using formula which makes it equal to result.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= nums.length <= 12` </br>
🔹 `1 <= nums[i] <= 20` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Math**  </br>
🔸 **Backtracking**  </br>
🔸 **Bit Manipulation**  </br>
🔸 **Combinatorics**  </br>
🔸 **Enumeration**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/05%20-%2004%20-%202025%20---%201863.%20Sum%20of%20All%20Subset%20XOR%20Totals%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%201863.%20Sum%20of%20All%20Subset%20XOR%20Totals.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/05%20-%2004%20-%202025%20---%201863.%20Sum%20of%20All%20Subset%20XOR%20Totals%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%201863.%20Sum%20of%20All%20Subset%20XOR%20Totals.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/05%20-%2004%20-%202025%20---%201863.%20Sum%20of%20All%20Subset%20XOR%20Totals%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%201863.%20Sum%20of%20All%20Subset%20XOR%20Totals.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/05%20-%2004%20-%202025%20---%201863.%20Sum%20of%20All%20Subset%20XOR%20Totals%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201863.%20Sum%20of%20All%20Subset%20XOR%20Totals.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/05%20-%2004%20-%202025%20---%201863.%20Sum%20of%20All%20Subset%20XOR%20Totals%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%201863.%20Sum%20of%20All%20Subset%20XOR%20Totals.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/25b9fd54-0ba4-4964-abf0-48b34896e794" width = "700px" height="462px" />

</h1>
