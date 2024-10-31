# 1671. Minimum Number of Removals to Make Mountain Array

</br>
 
<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-number-of-removals-to-make-mountain-array/description/?envType=daily-question&envId=2024-10-30"><strong>➥ 🫀 1671 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You may recall that an array `arr` is a `mountain array` if and only if:

- `arr.length >= 3`

- There exists some index `i` (0-indexed) with `0 < i < arr.length - 1` such that:

  - `arr[0] < arr[1] < ... < arr[i - 1] < arr[i]`

  - `arr[i] > arr[i + 1] > ... > arr[arr.length - 1]`

### Given an integer array `nums​​​`, return *the `minimum` number of elements to remove to make `nums​​​` a `mountain array`*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,3,1]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ The array itself is a mountain array so we do not need to remove any elements.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  nums = [2,1,1,5,6,2,3,1]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ One solution is to remove the elements at indices 0, 1, and 5, making the array nums = [1,5,6,3,1].

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`3 <= nums.length <= 1000`** </br>

🔹 **1 <= nums[i] <= 10<sup>9</sup>** </br>

🔹 **It is guaranteed that you can make a mountain array out of `nums`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Binary Search**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Greedy**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/30%20-%2010%20-%202024%20---%201671.%20Minimum%20Number%20of%20Removals%20to%20Make%20Mountain%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201671.%20Minimum%20Number%20of%20Removals%20to%20Make%20Mountain%20Array.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/30%20-%2010%20-%202024%20---%201671.%20Minimum%20Number%20of%20Removals%20to%20Make%20Mountain%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201671.%20Minimum%20Number%20of%20Removals%20to%20Make%20Mountain%20Array.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/30%20-%2010%20-%202024%20---%201671.%20Minimum%20Number%20of%20Removals%20to%20Make%20Mountain%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201671.%20Minimum%20Number%20of%20Removals%20to%20Make%20Mountain%20Array.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/30%20-%2010%20-%202024%20---%201671.%20Minimum%20Number%20of%20Removals%20to%20Make%20Mountain%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201671.%20Minimum%20Number%20of%20Removals%20to%20Make%20Mountain%20Array.js) |
