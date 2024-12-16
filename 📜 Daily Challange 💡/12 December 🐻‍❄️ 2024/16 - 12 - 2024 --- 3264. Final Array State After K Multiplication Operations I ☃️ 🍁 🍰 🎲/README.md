# 3264. Final Array State After K Multiplication Operations I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i/description/?envType=daily-question&envId=2024-12-16"><strong>➥ ♻️ 3264 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums`, an integer `k`, and an integer `multiplier`.

### You need to perform `k` operations on `nums`. In each operation:

- Find the `minimum` value `x` in `nums`. If there are multiple occurrences of the minimum value, select the one that appears `first`.

- Replace the selected minimum value `x` with `x * multiplier`.

### Return an integer array denoting `the final state` of `nums` after performing all `k` operations.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  nums = [2,1,3,5,6], k = 5, multiplier = 2

  ### 📤 `Output`  ➤ [8,4,6,5,6]

  ### 🔦 `Explanation`  ➤ 

| Operation | Result |
|----------|----------|
| After  operation 1 | [2, 2, 3, 5, 6] |
| After  operation 2 | [4, 2, 3, 5, 6] |
| After  operation 3 | [4, 4, 3, 5, 6] |
| After  operation 4 | [4, 4, 6, 5, 6] |
| After  operation 5 | [8, 4, 6, 5, 6] |


</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,2], k = 3, multiplier = 4

  ### 📤 `Output`  ➤ [16,8]

  ### 🔦 `Explanation` ➤ 

| Operation	| Result|
|-----------|------|
| After operation 1 | [4, 2] |
| After operation 2 | [4, 8] |
| After operation 3 | [16, 8] |

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= nums.length <= 100`** </br>

🔹 **`1 <= nums[i] <= 100`** </br>

🔹 **`1 <= k <= 10`** </br>

🔹 **`1 <= multiplier <= 5`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Math**  </br>
🔸 **Heap (Priority Queue)**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
