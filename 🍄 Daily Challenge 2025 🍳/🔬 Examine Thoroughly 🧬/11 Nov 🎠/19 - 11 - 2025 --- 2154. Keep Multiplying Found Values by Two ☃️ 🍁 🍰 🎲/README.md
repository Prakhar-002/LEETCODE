# 2154. Keep Multiplying Found Values by Two

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/keep-multiplying-found-values-by-two/description/?envType=daily-question&envId=2025-11-19"><strong>➥ ♻️ 2154 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array of integers `nums`. You are also given an integer `original` which is the first number that needs to be searched for in `nums`.

### You then do the following steps:

1. If `original` is found in `nums`, multiply it by two (i.e., set `original = 2 * original`).

2. Otherwise, stop the process.

3. **Repeat** this process with the new number as long as you keep finding the number.

### Return the final value of `original`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [5,3,6,1,12], original = 3

  ### 📤 `Output`  ➤ 24

  ### 🔦 `Explanation`  ➤ 
  ### - 3 is found in nums. 3 is multiplied by 2 to obtain 6.
  ### - 6 is found in nums. 6 is multiplied by 2 to obtain 12.
  ### - 12 is found in nums. 12 is multiplied by 2 to obtain 24.
  ### - 24 is not found in nums. Thus, 24 is returned.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2,7,9], original = 4

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤
  ### - 4 is not found in nums. Thus, 4 is returned.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 1000 </br>
🔹 1 <= nums[i], original <= 1000 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Sorting** </br>
🔸 **Simulation** </br>

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

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
