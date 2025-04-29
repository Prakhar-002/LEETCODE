# 2962. Count Subarrays Where Max Element Appears at Least K Times

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/description/?envType=daily-question&envId=2025-04-29"><strong>➥ ☢️ 2962 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums` and a positive integer `k`.  The objective is to find the number of subarrays of `nums` where the *maximum* element of the original `nums` array appears at least `k` times within that subarray.

### Remember: A subarray is a contiguous (connected) sequence of elements within an array.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,3,2,3,3], k = 2

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation`  ➤ The subarrays that contain the element 3 at least 2 times are: [1,3,2,3], [1,3,2,3,3], [3,2,3], [3,2,3,3], [2,3,3] and [3,3].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,4,2,1], k = 3

  ### 📤 `Output`  ➤ 0

  c No subarray contains the element 4 at least 3 times.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [5, 5, 2, 5, 5, 1], k = 3

  ### 📤 `Output`  ➤ 5

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [8, 8, 8, 8, 1, 1], k = 2
  
  ### 📤 `Output`  ➤ 12


# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 10<sup>5</sup> </br>

🔹 1 <= nums[i] <= 10<sup>6</sup> </br>

🔹 1 <= k <= 10<sup>5</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Sliding Window**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/29%20-%2004%20-%202025%20---%202962.%20Count%20Subarrays%20Where%20Max%20Element%20Appears%20at%20Least%20K%20Times%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202962.%20Count%20Subarrays%20Where%20Max%20Element%20A.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/29%20-%2004%20-%202025%20---%202962.%20Count%20Subarrays%20Where%20Max%20Element%20Appears%20at%20Least%20K%20Times%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202962.%20Count%20Subarrays%20Where%20Max%20Element%20App.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/29%20-%2004%20-%202025%20---%202962.%20Count%20Subarrays%20Where%20Max%20Element%20Appears%20at%20Least%20K%20Times%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202962.%20Count%20Subarrays%20Where%20Max%20Element%20A.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/29%20-%2004%20-%202025%20---%202962.%20Count%20Subarrays%20Where%20Max%20Element%20Appears%20at%20Least%20K%20Times%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202962.%20Count%20Subarrays%20Where%20Max%20Eleme.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/351a372a-5578-472e-a296-7faa29fab331" width = "700px" height="462px" />

</h1>
