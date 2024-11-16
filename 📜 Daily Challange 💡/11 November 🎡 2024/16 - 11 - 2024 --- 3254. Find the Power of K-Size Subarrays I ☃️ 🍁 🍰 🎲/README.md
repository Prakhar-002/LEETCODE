# 3254. Find the Power of K-Size Subarrays I

</br>

<h2 align="center"> 

<a href="3254. Find the Power of K-Size Subarrays I"><strong>➥ ☢️ 3254 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array of integers nums of length n and a positive integer k.

### The power of an array is defined as:

- Its maximum element if all of its elements are consecutive and sorted in ascending order.

- -1 otherwise.

### You need to find the `power` of all `subArrays` of `nums` of size `k`.

### Return an integer array `results` of size `n - k + 1`, where `results[i]` is the power of `nums[i..(i + k - 1)]`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  nums = [1,2,3,4,3,2,5], k = 3

  ### 📤 `Output`  ➤ [3,4,-1,-1,-1]

  ### 🔦 `Explanation`  ➤There are 5 subarrays of nums of size 3:

- ➺ [1, 2, 3] with the maximum element 3.
- ➺ [2, 3, 4] with the maximum element 4.
- ➺ [3, 4, 3] whose elements are not consecutive.
- ➺ [4, 3, 2] whose elements are not sorted.
- ➺ [3, 2, 5] whose elements are not consecutive.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2,2,2,2,2], k = 4

  ### 📤 `Output`  ➤ [-1,-1]

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [3,2,3,2,3,2], k = 2

  ### 📤 `Output`  ➤ [-1,3,-1,3,-1]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= n == nums.length <= 500`** </br>

🔹 **1 <= nums[i] <= 10<sup>5</sup>** </br>

🔹 **`1 <= k <= n`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Sliding Window**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

