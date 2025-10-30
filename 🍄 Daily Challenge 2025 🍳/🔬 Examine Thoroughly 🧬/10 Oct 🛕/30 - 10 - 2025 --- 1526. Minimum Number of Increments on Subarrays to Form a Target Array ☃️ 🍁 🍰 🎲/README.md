# 1526. Minimum Number of Increments on Subarrays to Form a Target Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-number-of-increments-on-subarrays-to-form-a-target-array/description/?envType=daily-question&envId=2025-10-30"><strong>➥ 🫀 1526 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `target`. You have an integer array `initial` of the same size as `target` with all elements initially zeros.

### In one operation you can choose any subarray from `initial` and increment each value by one.

### Return the minimum number of operations to form a `target` array from `initial`.

### The test cases are generated so that the answer fits in a 32-bit integer.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `target = [1,2,3,2,1]`

  ### 📤 `Output`  ➤ `3`

  ### 🔦 `Explanation`  ➤ ➺

  - We need at least 3 operations to form the target array from the initial array.
    - `[0,0,0,0,0]` increment 1 from index 0 to 4 (inclusive).
    - `[1,1,1,1,1]` increment 1 from index 1 to 3 (inclusive).
    - `[1,2,2,2,1]` increment 1 at index 2.
    - `[1,2,3,2,1]` target array is formed.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `target = [3,1,1,2]`

  ### 📤 `Output`  ➤ `4`

  ### 🔦 `Explanation`  ➤ ➺

  - `[0,0,0,0] -> [1,1,1,1] -> [1,1,1,2] -> [2,1,1,2] -> [3,1,1,2]`

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `target = [3,1,5,4,2]`

  ### 📤 `Output`  ➤ `7`

  ### 🔦 `Explanation`  ➤ ➺

  - `[0,0,0,0,0] -> [1,1,1,1,1] -> [2,1,1,1,1] -> [3,1,1,1,1] -> [3,1,2,2,2] -> [3,1,3,3,2] -> [3,1,4,4,2] -> [3,1,5,4,2]`

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= target.length <= 10^5` </br>
🔹 `1 <= target[i] <= 10^5` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Dynamic Programming** </br>
🔸 **Stack** </br>
🔸 **Greedy** </br>
🔸 **Monotonic Stack** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
