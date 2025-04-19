# 2563. Count the Number of Fair Pairs

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-the-number-of-fair-pairs/description/?envType=daily-question&envId=2025-04-19"><strong>➥ ☢️ 2563 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `nums` of length `n`, along with two integers `lower` and `upper`. The objective is to count the number of "fair" pairs within the array.

### A pair of indices `(i, j)` is considered "fair" if it satisfies the following conditions:

1. `0 <= i < j < n` (i and j are valid indices within `nums` and i is less than j).
2. `lower <= nums[i] + nums[j] <= upper` (The sum of the elements at indices i and j falls within the inclusive range `[lower, upper]`).

### Your task is to return the number of fair pairs found in the input array.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [0,1,7,4,4,5], lower = 3, upper = 6

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation`  ➤ There are 6 fair pairs: (0,3), (0,4), (0,5), (1,3), (1,4), and (1,5).

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,7,9,2,5], lower = 11, upper = 11

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤ There is a single fair pair: (2,3).

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2, 3, 4, 5, 6], lower = 5, upper = 8

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤  Here the "The "Fair Array with in result form where `[pairs are following from array and final answer 1-to 3 range has [fair array].
</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [10, 20, 30, 40, 50] lower = 40 upper = 80
  
  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation`  ➤  6 = numbers from all itertio pair where [4..5 pair number which from 6 itmes;

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 10<sup>5</sup> </br>
🔹 nums.length == n </br>
🔹 -10<sup>9</sup> <= nums[i] <= 10<sup>9</sup> </br>
🔹 -10<sup>9</sup> <= lower <= upper <= 10<sup>9</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Two Pointers**  </br>
🔸 **Binary Search**  </br>
🔸 **Sorting**  </br>

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

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
