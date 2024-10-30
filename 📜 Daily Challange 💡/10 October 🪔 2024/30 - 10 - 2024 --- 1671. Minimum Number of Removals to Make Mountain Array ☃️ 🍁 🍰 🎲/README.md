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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
