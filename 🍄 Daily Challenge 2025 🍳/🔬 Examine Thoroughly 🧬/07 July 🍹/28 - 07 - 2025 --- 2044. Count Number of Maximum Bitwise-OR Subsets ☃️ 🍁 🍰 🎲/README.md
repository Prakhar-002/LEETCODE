# 2044. Count Number of Maximum Bitwise-OR Subsets

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-number-of-maximum-bitwise-or-subsets/description/?envType=daily-question&envId=2025-07-28"><strong>➥ ☢️ 2044 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums`.

### The problem asks you to find:

1. The maximum possible bitwise OR of *any* subset of `nums`.
2. The number of *distinct, non-empty* subsets of `nums` that achieve this maximum bitwise OR.

### Recall that:

- A subset `a` of an array `b` can be formed by deleting some (possibly zero) elements from `b`, without changing the order of the remaining elements.
- Two subsets are distinct if the indices of the chosen elements differ.
- The bitwise OR of an array `a` (0-indexed) is `a[0] OR a[1] OR ... OR a[a.length - 1]`.

### Return the number of different non-empty subsets that achieve the maximum bitwise OR value.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [3,1]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤
The maximum possible bitwise OR of a subset is 3. There are 2 subsets with a bitwise OR of 3:

- [3]
- [3,1]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2,2,2]

  ### 📤 `Output`  ➤ 7

  ### 🔦 `Explanation` ➤
All non-empty subsets of [2,2,2] have a bitwise OR of 2. There are 2<sup>3</sup> - 1 = 7 total subsets.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [3,2,1,5]

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation` ➤ The maximum possible bitwise OR of a subset is 7. There are 6 subsets with a bitwise OR of 7:

- [3,5]
- [3,1,5]
- [3,2,5]
- [3,2,1,5]
- [2,5]
- [2,1,5]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 16 </br>

🔹 1 <= nums[i] <= 10<sup>5</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Backtracking**  </br>

🔸 **Bit Manipulation**  </br>

🔸 **Enumeration**  </br>

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
