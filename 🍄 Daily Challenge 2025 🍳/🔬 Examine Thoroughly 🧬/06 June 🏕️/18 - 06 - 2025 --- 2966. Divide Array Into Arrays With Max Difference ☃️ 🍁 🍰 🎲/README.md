# 2966. Divide Array Into Arrays With Max Difference

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/divide-array-into-arrays-with-max-difference/description/?envType=daily-question&envId=2025-06-18"><strong>➥ ☢️ 2966 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums` of size `n`, where `n` is a multiple of 3, and a positive integer `k`.

### Your task is to divide the array `nums` into `n / 3` subarrays, each of size 3, satisfying the following condition:

- The absolute difference between any two elements within the same subarray must be less than or equal to `k`. In other words, for each subarray `[x, y, z]`, it must be true that `|x - y| <= k`, `|x - z| <= k`, and `|y - z| <= k`.

### Your function should return a 2D array containing these subarrays. If it is impossible to satisfy the conditions and create a valid division, return an empty array. If there are multiple possible answers, you may return any one of them.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,3,4,8,7,9,3,5,1], k = 2

  ### 📤 `Output`  ➤ [[1,1,3],[3,4,5],[7,8,9]]

  ### 🔦 `Explanation`  ➤
The difference between any two elements in each array is less than or equal to 2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2,4,2,2,5,2], k = 2

  ### 📤 `Output`  ➤ []

  ### 🔦 `Explanation` ➤
Different ways to divide nums into 2 arrays of size 3 are:

- [[2,2,2],[2,4,5]] (and its permutations)
- [[2,2,4],[2,2,5]] (and its permutations)

Because there are four 2s there will be an array with the elements 2 and 5 no matter how we divide it. since 5 - 2 = 3 > k, the condition is not satisfied and so there is no valid division.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [4,2,9,8,2,12,7,12,10,5,8,5,5,7,9,2,5,11], k = 14

  ### 📤 `Output`  ➤ [[2,2,12],[4,8,5],[5,9,7],[7,8,5],[5,9,10],[11,12,2]]

  ### 🔦 `Explanation`  ➤ The set of number make to for all is 15 and they are "

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **n == nums.length** </br>

🔹 **1 <= n <= 10<sup>5</sup>** </br>

🔹 **n is a multiple of 3** </br>

🔹 **1 <= nums[i] <= 10<sup>5</sup>** </br>

🔹 **1 <= k <= 10<sup>5</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Greedy**  </br>
🔸 **Sorting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/18%20-%2006%20-%202025%20---%202966.%20Divide%20Array%20Into%20Arrays%20With%20Max%20Difference%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202966.%20Divide%20Array%20Into%20Arrays%20With%20Max%20Difference.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/18%20-%2006%20-%202025%20---%202966.%20Divide%20Array%20Into%20Arrays%20With%20Max%20Difference%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202966.%20Divide%20Array%20Into%20Arrays%20With%20Max%20Difference.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/18%20-%2006%20-%202025%20---%202966.%20Divide%20Array%20Into%20Arrays%20With%20Max%20Difference%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202966.%20Divide%20Array%20Into%20Arrays%20With%20Max%20Difference.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/18%20-%2006%20-%202025%20---%202966.%20Divide%20Array%20Into%20Arrays%20With%20Max%20Difference%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202966.%20Divide%20Array%20Into%20Arrays%20With%20Max%20Differen.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/15d613f1-9696-4f5a-a427-c05e9b67cb64" width = "700px" height="462px" />

</h1>
