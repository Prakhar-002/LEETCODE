# 2145. Count the Hidden Sequences

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-the-hidden-sequences/description/?envType=daily-question&envId=2025-04-21"><strong>➥ ☢️ 2145 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are provided with a 0-indexed integer array called `differences` of length `n`. This array `differences` provides information about the differences between consecutive integers of a "hidden" sequence that has a length of `(n + 1)`. Formally, if we call the hidden sequence `hidden`, we know that `differences[i] = hidden[i + 1] - hidden[i]`.

### You are also given two integers: `lower` and `upper`. These describe the inclusive range of values, [`lower`, `upper`], that each element in the `hidden` sequence *must* fall within.

### For example:  Given `differences = [1, -3, 4]`, `lower = 1`, and `upper = 6`, this describes a hidden sequence of length 4 whose elements are each between 1 and 6 (inclusive).  Some possible `hidden` sequences are `[3, 4, 1, 5]` and `[4, 5, 2, 6]`. However, the sequences `[5, 6, 3, 7]` (contains an element > 6) and `[1, 2, 3, 4]` (incorrect differences) are invalid.

### Your task: Given the `differences` array, along with the `lower` and `upper` bounds, return the number of possible `hidden` sequences. If no such sequence is possible, return 0.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ differences = [1,-3,4], lower = 1, upper = 6

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ The possible hidden sequences are:

- [3, 4, 1, 5]
- [4, 5, 2, 6]

Thus, we return 2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ differences = [3,-4,5,1,-2], lower = -4, upper = 5

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤ The possible hidden sequences are:

- [-3, 0, -4, 1, 2, 0]

- [-2, 1, -3, 2, 3, 1]

- [-1, 2, -2, 3, 4, 2]

- [0, 3, -1, 4, 5, 3]

Thus, we return 4.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ differences = [4,-7,2], lower = 3, upper = 6

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ There are no possible hidden sequences. Thus, we return 0.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

   ### 📥 `Input`  ➤ differences = [2,3,-1], lower = 1, upper = 5
  
  ### 📤 `Output`  ➤1

  ### 🔦 `Explanation`  ➤ Value of form difference range for lower to high return to a value number that possible and has same element;  which make as return number `4` to has result valid return is with equal or 24 between condition 15 . in return,

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 n == differences.length </br>
🔹 1 <= n <= 10<sup>5</sup> </br>
🔹 -10<sup>5</sup> <= differences[i] <= 10<sup>5</sup> </br>
🔹 -10<sup>5</sup> <= lower <= upper <= 10<sup>5</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/21%20-%2004%20-%202025%20---%202145.%20Count%20the%20Hidden%20Sequences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%202145.%20Count%20the%20Hidden%20Sequences.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/21%20-%2004%20-%202025%20---%202145.%20Count%20the%20Hidden%20Sequences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%202145.%20Count%20the%20Hidden%20Sequences.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/21%20-%2004%20-%202025%20---%202145.%20Count%20the%20Hidden%20Sequences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%202145.%20Count%20the%20Hidden%20Sequences.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/21%20-%2004%20-%202025%20---%202145.%20Count%20the%20Hidden%20Sequences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202145.%20Count%20the%20Hidden%20Sequences.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/21%20-%2004%20-%202025%20---%202145.%20Count%20the%20Hidden%20Sequences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%202145.%20Count%20the%20Hidden%20Sequences.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/22c8b14d-2868-443a-a941-ee83ad87fbc2" width = "700px" height="462px" />

</h1>
