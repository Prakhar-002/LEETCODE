# 3487. Maximum Unique Subarray Sum After Deletion

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-unique-subarray-sum-after-deletion/description/?envType=daily-question&envId=2025-07-25"><strong>➥ ♻️ 3487 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums`.

### The following steps are allowed:

1. You can delete any number of elements from `nums` (without making the array empty).
2. After deleting, you must select a *subarray* (contiguous section) from the remaining elements.

### The subarray you select must satisfy this condition:

- All elements within the subarray must be unique (no repeated values).

### Your task is to return the *maximum possible sum* of any such unique-element subarray that you can create.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,2,3,4,5]

  ### 📤 `Output`  ➤ 15

  ### 🔦 `Explanation`  ➤ Select the entire array without deleting any element to obtain the maximum sum of 1 + 2 + 3 + 4 + 5 = 15.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,1,0,1,1]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ Delete the element nums[0] == 1, nums[1] == 1, nums[2] == 0, and nums[3] == 1. Select the entire array [1] to obtain the maximum sum of 1.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,2,-1,-2,1,0,-1]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ Delete the elements nums[2] == -1 and nums[3] == -2, and select the subarray [2, 1] from [1, 2, 1, 0, -1] to obtain the maximum sum of 3.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 100 </br>

🔹 -100 <= nums[i] <= 100 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Hash Table**  </br>

🔸 **Greedy**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/25%20-%2007%20-%202025%20---%203487.%20Maximum%20Unique%20Subarray%20Sum%20After%20Deletion%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203487.%20Maximum%20Unique%20Subarray%20Sum%20After%20Deletion.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/25%20-%2007%20-%202025%20---%203487.%20Maximum%20Unique%20Subarray%20Sum%20After%20Deletion%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203487.%20Maximum%20Unique%20Subarray%20Sum%20After%20Deletion.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/25%20-%2007%20-%202025%20---%203487.%20Maximum%20Unique%20Subarray%20Sum%20After%20Deletion%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203487.%20Maximum%20Unique%20Subarray%20Sum%20After%20Deletion.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/25%20-%2007%20-%202025%20---%203487.%20Maximum%20Unique%20Subarray%20Sum%20After%20Deletion%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203487.%20Maximum%20Unique%20Subarray%20Sum%20After%20Deletion.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/6a2d2ea9-5a23-44f6-bc39-0b0eede513b6" width = "700px" height="462px" />

</h1>
