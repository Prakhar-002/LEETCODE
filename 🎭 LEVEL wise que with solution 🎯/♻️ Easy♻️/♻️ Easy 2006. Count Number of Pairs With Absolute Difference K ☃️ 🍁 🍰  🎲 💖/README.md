# 2006. Count Number of Pairs With Absolute Difference K

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/description/"><strong>➥ ♻️ 2006 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array of integers, `nums`, and an integer `k`.  Your goal is to find the number of pairs `(i, j)` such that:

1. `i < j` (the index `i` is less than index `j`).
2. `|nums[i] - nums[j]| == k` (the absolute difference between the elements at indices `i` and `j` is equal to `k`).

The value of `|x|` is defined as:

- `x` if `x >= 0`.
- `-x` if `x < 0`.

Your task is to return the number of pairs in `nums` that satisfy these conditions.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,2,2,1], k = 1

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤
The pairs with an absolute difference of 1 are:

- [1,2,2,1] (indices 0, 1)
- [1,2,2,1] (indices 0, 3)
- [1,2,2,1] (indices 1, 2)
- [1,2,2,1] (indices 2, 3)

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,3], k = 3

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤
There are no pairs with an absolute difference of 3.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [3,2,1,5,4], k = 2

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤
The pairs with an absolute difference of 2 are:

- [3,2,1,5,4] (indices 0, 2)
- [3,2,1,5,4] (indices 1, 3)
- [3,2,1,5,4] (indices 2, 4)

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 200 </br>

🔹 1 <= nums[i] <= 100 </br>

🔹 1 <= k <= 99 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Hash Table**  </br>

🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202006.%20Count%20Number%20of%20Pairs%20With%20Absolute%20Difference%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%202006.%20Count%20Number%20of%20Pairs%20With%20Absolute%20Difference%20K.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202006.%20Count%20Number%20of%20Pairs%20With%20Absolute%20Difference%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%202006.%20Count%20Number%20of%20Pairs%20With%20Absolute%20Difference%20K.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202006.%20Count%20Number%20of%20Pairs%20With%20Absolute%20Difference%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%202006.%20Count%20Number%20of%20Pairs%20With%20Absolute%20Difference%20K.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202006.%20Count%20Number%20of%20Pairs%20With%20Absolute%20Difference%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202006.%20Count%20Number%20of%20Pairs%20With%20Absolute%20Difference%20K.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202006.%20Count%20Number%20of%20Pairs%20With%20Absolute%20Difference%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%202006.%20Count%20Number%20of%20Pairs%20With%20Absolute%20Difference%20K.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/f7074582-52ee-43b6-858b-1df5dff889d3" width = "700px" height="462px" />

</h1>
