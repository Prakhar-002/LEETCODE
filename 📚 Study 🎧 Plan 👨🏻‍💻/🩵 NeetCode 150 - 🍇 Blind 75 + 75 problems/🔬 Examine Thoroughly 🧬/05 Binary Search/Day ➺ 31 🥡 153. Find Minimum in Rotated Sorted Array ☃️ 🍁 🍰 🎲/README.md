# 153. Find Minimum in Rotated Sorted Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/"><strong>➥ ☢️ 153 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Imagine an array `nums` of length `n` that is sorted in ascending order. This array has been rotated a number of times between 1 and `n` (inclusive).

### For instance, the array `[0,1,2,4,5,6,7]` could become:

- `[4,5,6,7,0,1,2]` after 4 rotations.
- `[0,1,2,4,5,6,7]` after 7 rotations (essentially, no change as it completes a full cycle).

### Remember that a rotation by one position involves moving the last element to the beginning: `[a[0], a[1], ..., a[n-1]]` becomes `[a[n-1], a[0], a[1], ..., a[n-2]]`.

### Your task is, given a sorted array `nums` that has been rotated, with *unique* elements, to find and return the *minimum* element within the array.

### Crucially, your solution *must* have a time complexity of O(log n).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [3,4,5,1,2]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ The original array was [1,2,3,4,5] rotated 3 times.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [4,5,6,7,0,1,2]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ The original array was [0,1,2,4,5,6,7] and it was rotated 4 times.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [11,13,15,17]

  ### 📤 `Output`  ➤ 11

  ### 🔦 `Explanation` ➤ The original array was [11,13,15,17] and it was rotated 4 times.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 n == nums.length </br>

🔹 1 <= n <= 5000 </br>

🔹 -5000 <= nums[i] <= 5000 </br>

🔹 All the integers of nums are unique. </br>

🔹 nums is sorted and rotated between 1 and n times. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Binary Search**  </br>

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

<img src ="https://github.com/user-attachments/assets/dded10e7-f017-4f40-8097-1e6c89f22aac" width = "700px" height="462px" />

</h1>
