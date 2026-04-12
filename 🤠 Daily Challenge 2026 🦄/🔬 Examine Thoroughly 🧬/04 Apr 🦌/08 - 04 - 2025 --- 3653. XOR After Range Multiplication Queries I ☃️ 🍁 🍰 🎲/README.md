# 3653. XOR After Range Multiplication Queries I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/xor-after-range-multiplication-queries-i/?envType=daily-question&envId=2026-04-03"><strong>➥ ☢️ 3653 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given an integer array `nums` of length `n` and a 2D integer array `queries` of size `q`, where `queries[i] = [li, ri, ki, vi]`.
### For each query, you must apply the following operations in order:
### &nbsp;&nbsp;&nbsp;&nbsp;• Set `idx = li`.
### &nbsp;&nbsp;&nbsp;&nbsp;• While `idx <= ri`:
### &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;◦ Update: `nums[idx] = (nums[idx] * vi) % (10^9 + 7)`
### &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;◦ Set `idx += ki`.
### Return the **bitwise XOR** of all elements in `nums` after processing **all queries**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ nums = [1,1,1], queries = [[0,2,1,4]]
  ### 📤 `Output`  ➤ 4
  ### 🔦 `Explanation`  ➤ The single query `[0,2,1,4]` multiplies every element from index `0` through `2` by `4`. Array becomes `[4,4,4]`. XOR of all elements: `4 ^ 4 ^ 4 = 4`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ nums = [2,3,1,5,4], queries = [[1,4,2,3],[0,2,1,2]]
  ### 📤 `Output`  ➤ 31
  ### 🔦 `Explanation` ➤ Query 1 `[1,4,2,3]` multiplies indices `1` and `3` by `3` → `[2,9,1,15,4]`. Query 2 `[0,2,1,2]` multiplies indices `0,1,2` by `2` → `[4,18,2,15,4]`. XOR: `4 ^ 18 ^ 2 ^ 15 ^ 4 = 31`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ nums = [5], queries = [[0,0,1,3],[0,0,1,2]]
  ### 📤 `Output`  ➤ 30
  ### 🔦 `Explanation` ➤ Query 1 multiplies index `0` by `3` → `[15]`. Query 2 multiplies index `0` by `2` → `[30]`. XOR of single element: `30`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= n == nums.length <= 10^3` </br>
🔹 `1 <= nums[i] <= 10^9` </br>
🔹 `1 <= q == queries.length <= 10^3` </br>
🔹 `queries[i] = [li, ri, ki, vi]` </br>
🔹 `0 <= li <= ri < n` </br>
🔹 `1 <= ki <= n` </br>
🔹 `1 <= vi <= 10^5` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Divide and Conquer** </br>
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
