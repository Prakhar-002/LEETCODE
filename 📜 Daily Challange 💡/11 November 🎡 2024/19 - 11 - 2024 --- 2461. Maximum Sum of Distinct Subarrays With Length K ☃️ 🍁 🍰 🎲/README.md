# 2461. Maximum Sum of Distinct Subarrays With Length K

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/description/?envType=daily-question&envId=2024-11-19"><strong>➥ ☢️ 2461 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array nums and an integer k. Find the maximum subarray sum of all the subarrays of nums that meet the following conditions:

- The length of the subarray is `k`, and

- All the elements of the subarray are distinct.

### Return *the maximum subarray sum of all the subarrays that meet the conditions*. If no subarray meets the conditions, return `0`.

### A *subarray is a contiguous non-empty sequence of elements within an array*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,5,4,2,9,9,9], k = 3

  ### 📤 `Output`  ➤ 15

  ### 🔦 `Explanation`  ➤ The subarrays of nums with length 3 are:

➺ [1,5,4] which meets the requirements and has a sum of 10.

➺ [5,4,2] which meets the requirements and has a sum of 11.

➺ [4,2,9] which meets the requirements and has a sum of 15.

➺ [2,9,9] which does not meet the requirements because the element 9 is repeated.

➺ [9,9,9] which does not meet the requirements because the element 9 is repeated.

We return 15 because it is the maximum subarray sum of all the subarrays that meet the conditions

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [4,4,4], k = 3

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤  The subarrays of nums with length 3 are:
➺ [4,4,4] which does not meet the requirements because the element 4 is repeated.

We return 0 because no subarrays meet the conditions.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= k <= nums.length <= 10<sup>5</sup>** </br>

🔹 **1 <= nums[i] <= 10<sup>5</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Sliding Window**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/19%20-%2011%20-%202024%20---%202461.%20Maximum%20Sum%20of%20Distinct%20Subarrays%20With%20Length%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202461.%20Maximum%20Sum%20of%20Distinct%20Subarrays%20With%20Length%20K.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/19%20-%2011%20-%202024%20---%202461.%20Maximum%20Sum%20of%20Distinct%20Subarrays%20With%20Length%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202461.%20Maximum%20Sum%20of%20Distinct%20Subarrays%20With%20Length%20K.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/19%20-%2011%20-%202024%20---%202461.%20Maximum%20Sum%20of%20Distinct%20Subarrays%20With%20Length%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202461.%20Maximum%20Sum%20of%20Distinct%20Subarrays%20With%20Length%20K.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/19%20-%2011%20-%202024%20---%202461.%20Maximum%20Sum%20of%20Distinct%20Subarrays%20With%20Length%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202461.%20Maximum%20Sum%20of%20Distinct%20Subarrays%20With%20Length%20K.js) |


