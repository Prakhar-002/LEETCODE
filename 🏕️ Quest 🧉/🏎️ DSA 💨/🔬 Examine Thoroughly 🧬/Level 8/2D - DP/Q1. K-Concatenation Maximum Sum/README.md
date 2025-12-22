# Q1. K-Concatenation Maximum Sum

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/k-concatenation-maximum-sum/description/?envType=problem-list-v2&envId=dsa-strategy-summit-2d-dynamic-programming"><strong>➥ ☢️ Q1 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an integer array `arr` and an integer `k`, modify the array by repeating it `k` times. 

### For example, if `arr = [1, 2]` and `k = 3` then the modified array will be `[1, 2, 1, 2, 1, 2]`. 

### Return the **maximum sub-array sum** in the modified array. Note that the length of the sub-array can be `0` and its sum in that case is `0`. 

### As the answer can be very large, return the answer modulo `10^9 + 7`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤ `arr = [1,2], k = 3`

### 📤 `Output`  ➤ `9`

### 🔦 `Explanation`  ➤ The best sub-array is the entire modified array `[1,2,1,2,1,2]` with sum `9`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `arr = [1,-2,1], k = 5`

### 📤 `Output`  ➤ `2`

### 🔦 `Explanation` ➤ The maximum sub-array sum achievable in the repeated array is `2`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `arr = [-1,-2], k = 7`

### 📤 `Output`  ➤ `0`

### 🔦 `Explanation` ➤ All elements are negative, so the optimal choice is the empty sub-array with sum `0`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= arr.length <= 10^5` </br>
🔹 `1 <= k <= 10^5` </br>
🔹 `-10^4 <= arr[i] <= 10^4` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Dynamic Programming** </br>

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
