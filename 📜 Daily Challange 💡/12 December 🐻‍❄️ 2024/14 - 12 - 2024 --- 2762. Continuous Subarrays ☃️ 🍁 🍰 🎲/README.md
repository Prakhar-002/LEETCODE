# 2762. Continuous Subarrays

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ 2762 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array nums. A subarray of nums is called continuous if:

- Let `i, i + 1, ..., j` be the indices in the subarray. Then, for each pair of indices i <= i<sub></sub>, i<sub></sub> <= j, 0 <= |nums[i<sub></sub>] - nums[i<sub></sub>]| <= 2.

### Return *the total number of continuous subarrays*.

### A subarray is a contiguous non-empty sequence of elements within an array.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [5,4,2,4]

  ### 📤 `Output`  ➤ 8

  ### 🔦 `Explanation`  ➤ 

➺ Continuous subarray of size 1: [5], [4], [2], [4].

➺ Continuous subarray of size 2: [5,4], [4,2], [2,4].

➺ Continuous subarray of size 3: [4,2,4].

There are no subarrys of size 4.
Total continuous subarrays = 4 + 3 + 1 = 8.
It can be shown that there are no more continuous subarrays.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,2,3]

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation` ➤ 

➺ Continuous subarray of size 1: [1], [2], [3].

➺ Continuous subarray of size 2: [1,2], [2,3].

➺ Continuous subarray of size 3: [1,2,3].

Total continuous subarrays = 3 + 2 + 1 = 6.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 10<sup>5</sup>** </br>

🔹 **1 <= nums[i] <= 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Sliding Window**  </br>
🔸 **Queue**  </br>
🔸 **Heap (Priority Queue)**  </br>
🔸 **Two Pointers**  </br>
🔸 **Monotonic Queue**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |


