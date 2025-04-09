# 3375. Minimum Operations to Make Array Values Equal to K

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-operations-to-make-array-values-equal-to-k/description/?envType=daily-question&envId=2025-04-09"><strong>➥ ♻️ 3375 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums` and an integer `k`.  An integer `h` is considered *valid* if all values in the array that are strictly greater than `h` are identical (equal to the same value).

### For example, if `nums = [10, 8, 10, 8]`, a valid integer is `h = 9` because all `nums[i] > 9` are equal to 10. However, `h = 5` is *not* a valid integer because the values greater than 5 are 10 and 8, which are not equal.

### You are allowed to perform the following operation on `nums` repeatedly:

1. Select an integer `h` that is valid for the current values in `nums`.

2. For each index `i` where `nums[i] > h`, set `nums[i]` to `h` (i.e., `nums[i] = h`).

### Your goal is to return the *minimum* number of operations required to make every element in `nums` equal to `k`.  If it is impossible to make all elements equal to `k`, return -1.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [5,2,5,4,5], k = 2

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ The operations can be performed in order using valid integers 4 and then 2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2,1,2], k = 2

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation` ➤ It is impossible to make all the values equal to 2.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [9,7,5,3], k = 1

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ The operations can be performed using valid integers in the order 7, 5, 3, and 1.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [4, 5, 6, 7, 1, 1, 2, 2] k = 2
   
  ### 📤 `Output`  ➤ -1
   
  ### 🔦 `Explanation`  ➤ Value never became same during any operation due to condition to compare . that mean operation impossible for 2nd Example;

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= nums.length <= 100` </br>
🔹 `1 <= nums[i] <= 100` </br>
🔹 `1 <= k <= 100` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/09%20-%2004%20-%202025%20---%203375.%20Minimum%20Operations%20to%20Make%20Array%20Values%20Equal%20to%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203375.%20Minimum%20Operations%20to%20Make%20Array%20Values%20Equ.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/09%20-%2004%20-%202025%20---%203375.%20Minimum%20Operations%20to%20Make%20Array%20Values%20Equal%20to%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203375.%20Minimum%20Operations%20to%20Make%20Array%20Values%20Equal.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/09%20-%2004%20-%202025%20---%203375.%20Minimum%20Operations%20to%20Make%20Array%20Values%20Equal%20to%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203375.%20Minimum%20Operations%20to%20Make%20Array%20Values%20Equ.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/09%20-%2004%20-%202025%20---%203375.%20Minimum%20Operations%20to%20Make%20Array%20Values%20Equal%20to%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203375.%20Minimum%20Operations%20to%20Make%20Array%20Values.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/2d21f4d0-1f3e-43a4-afc7-0c6c067b0967" width = "700px" height="462px" />

</h1>
