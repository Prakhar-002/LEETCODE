# 3065. Minimum Operations to Exceed Threshold Value I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-i/description/"><strong>➥ ♻️ 3065 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `nums`, and an integer k.

### In one operation, you can remove one occurrence of the smallest element of `nums`.

### Return *the minimum number of operations needed so that all elements of the array are greater than or equal to* `k`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [2,11,10,1,3], k = 10

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ After one operation, nums becomes equal to [2, 11, 10, 3].</br> </br> After two operations, nums becomes equal to [11, 10, 3].</br> </br> After three operations, nums becomes equal to [11, 10].</br> </br> At this stage, all the elements of nums are greater than or equal to 10 so we can stop.</br> </br> It can be shown that 3 is the minimum number of operations needed so that all elements of the array are greater than or equal to 10.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,1,2,4,9], k = 1

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ All elements of the array are greater than or equal to 1 so we do not need to apply any operations on nums.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,1,2,4,9], k = 9

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ only a single element of nums is greater than or equal to 9 so we need to apply the operations 4 times on nums.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= nums.length <= 50`** </br>

🔹 **1 <= nums[i] <= 10<sup>9</sup>** </br>

🔹 **1 <= k <= 10<sup>9</sup>** </br>

🔹 **The input is generated such that there is at least one index `i` such that `nums[i] >= k`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
