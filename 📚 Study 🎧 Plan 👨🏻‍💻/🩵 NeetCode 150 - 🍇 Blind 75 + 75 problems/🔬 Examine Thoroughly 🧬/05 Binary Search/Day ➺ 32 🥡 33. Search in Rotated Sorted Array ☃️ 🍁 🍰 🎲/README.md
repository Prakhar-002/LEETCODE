# 33. Search in Rotated Sorted Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/search-in-rotated-sorted-array/description/"><strong>➥ ☢️ 33 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums` that is sorted in ascending order and contains distinct values.

### Before being passed to your function, `nums` may have been rotated at an unknown pivot index `k` (where 1 <= k < nums.length). This rotation transforms the array as follows:

`[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]` (0-indexed).

### For instance, `[0,1,2,4,5,6,7]` rotated at pivot index 3 becomes `[4,5,6,7,0,1,2]`.

### Given the potentially rotated array `nums` and an integer `target`, your objective is to return the index of the `target` within `nums` if it exists, or -1 if it is not present.

### The key requirement: you must implement an algorithm that achieves a runtime complexity of O(log n).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [4,5,6,7,0,1,2], target = 0

  ### 📤 `Output`  ➤ 4

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [4,5,6,7,0,1,2], target = 3

  ### 📤 `Output`  ➤ -1

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1], target = 0

  ### 📤 `Output`  ➤ -1

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 5000 </br>

🔹 -10<sup>4</sup> <= nums[i] <= 10<sup>4</sup> </br>

🔹 All values of nums are unique. </br>

🔹 nums is an ascending array that is possibly rotated. </br>

🔹 -10<sup>4</sup> <= target <= 10<sup>4</sup> </br>

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

<img src ="https://github.com/user-attachments/assets/87f91fe4-6aae-4292-b7aa-891edabda4e2" width = "700px" height="462px" />

</h1>
