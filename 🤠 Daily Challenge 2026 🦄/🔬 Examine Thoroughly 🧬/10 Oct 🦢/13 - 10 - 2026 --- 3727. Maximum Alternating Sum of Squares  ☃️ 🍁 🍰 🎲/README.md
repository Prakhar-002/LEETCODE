# 3727. Maximum Alternating Sum of Squares

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-alternating-sum-of-squares/description/?envType=daily-question&envId=2026-10-13"><strong>➥ ☢️ 3727 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums`. You may rearrange the elements in any order.

### The alternating score of an array `arr` is defined as:
- `score = arr[0]^2 - arr[1]^2 + arr[2]^2 - arr[3]^2 + ...`

### Return an integer denoting the maximum possible alternating score of `nums` after rearranging its elements.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`   ➤ `nums = [1,2,3]`

  ### 📤 `Output`  ➤ `12`

  ### 🔦 `Explanation`  ➤ ➺ A possible rearrangement for `nums` is `[2,1,3]`, which gives the maximum alternating score among all possible rearrangements. The alternating score is calculated as: `2^2 - 1^2 + 3^2 = 4 - 1 + 9 = 12`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums = [1,-1,2,-2,3,-3]`

  ### 📤 `Output`  ➤ `16`

  ### 🔦 `Explanation` ➤ ➺ A possible rearrangement for `nums` is `[-3,-1,-2,1,3,2]`, which gives the maximum alternating score among all possible rearrangements. The alternating score is calculated as: `(-3)^2 - (-1)^2 + (-2)^2 - 1^2 + 3^2 - 2^2 = 9 - 1 + 4 - 1 + 9 - 4 = 16`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums = [5]`

  ### 📤 `Output`  ➤ `25`

  ### 🔦 `Explanation`  ➤ ➺ With only one element, the score is simply `5^2 = 25`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= nums.length <= 10^5`** </br>

🔹 **`-4 * 10^4 <= nums[i] <= 4 * 10^4`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Greedy** </br>
🔸 **Sorting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
