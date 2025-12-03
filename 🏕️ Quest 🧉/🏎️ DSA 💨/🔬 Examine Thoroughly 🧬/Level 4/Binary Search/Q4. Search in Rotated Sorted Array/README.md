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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Binary%20Search/Day%20%E2%9E%BA%2032%20%F0%9F%A5%A1%2033.%20Search%20in%20Rotated%20Sorted%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%2033.%20Search%20in%20Rotated%20Sorted.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Binary%20Search/Day%20%E2%9E%BA%2032%20%F0%9F%A5%A1%2033.%20Search%20in%20Rotated%20Sorted%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%2033.%20Search%20in%20Rotated%20Sorted%20A.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Binary%20Search/Day%20%E2%9E%BA%2032%20%F0%9F%A5%A1%2033.%20Search%20in%20Rotated%20Sorted%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%2033.%20Search%20in%20Rotated%20Sorted.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Binary%20Search/Day%20%E2%9E%BA%2032%20%F0%9F%A5%A1%2033.%20Search%20in%20Rotated%20Sorted%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%2033.%20Search%20in%20Rotated%20So.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/87f91fe4-6aae-4292-b7aa-891edabda4e2" width = "700px" height="462px" />

</h1>
