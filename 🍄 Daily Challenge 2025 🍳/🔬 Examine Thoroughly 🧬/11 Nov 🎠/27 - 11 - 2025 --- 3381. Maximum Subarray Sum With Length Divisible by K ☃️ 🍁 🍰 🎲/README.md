# 3381. Maximum Subarray Sum With Length Divisible by K

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-subarray-sum-with-length-divisible-by-k/description/?envType=daily-question&envId=2025-11-27"><strong>➥ ☢️ 3381 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array of integers `nums` and an integer `k`.

### Return the maximum sum of a subarray of `nums`, such that the size of the subarray is divisible by `k`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,2], k = 1

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ The subarray [1, 2] with sum 3 has length equal to 2 which is divisible by 1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [-1,-2,-3,-4,-5], k = 4

  ### 📤 `Output`  ➤ -10

  ### 🔦 `Explanation` ➤ The maximum sum subarray is [-1, -2, -3, -4] which has length equal to 4 which is divisible by 4.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [-5,1,2,-3,4], k = 2

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤ The maximum sum subarray is [1, 2, -3, 4] which has length equal to 4 which is divisible by 2.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= k <= nums.length <= 2 * 10<sup>5</sup> </br>
🔹 -10<sup>9</sup> <= nums[i] <= 10<sup>9</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Prefix Sum** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/27%20-%2011%20-%202025%20---%203381.%20Maximum%20Subarray%20Sum%20With%20Length%20Divisible%20by%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203381.%20Maximum%20Subarray%20Sum%20With%20Length%20Divisible%20by.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/27%20-%2011%20-%202025%20---%203381.%20Maximum%20Subarray%20Sum%20With%20Length%20Divisible%20by%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203381.%20Maximum%20Subarray%20Sum%20With%20Length%20Divisible%20by%20K.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/27%20-%2011%20-%202025%20---%203381.%20Maximum%20Subarray%20Sum%20With%20Length%20Divisible%20by%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203381.%20Maximum%20Subarray%20Sum%20With%20Length%20Divisible%20by.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/27%20-%2011%20-%202025%20---%203381.%20Maximum%20Subarray%20Sum%20With%20Length%20Divisible%20by%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203381.%20Maximum%20Subarray%20Sum%20With%20Length%20Divisibl.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/0c030258-580f-4b32-8f4b-327a92a001a7" width = "700px" height="462px" />

</h1>
