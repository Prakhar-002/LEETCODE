# 2996. Smallest Missing Integer Greater Than Sequential Prefix Sum

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/description/?envType=daily-question&envId=2026-08-11"><strong>➥ ♻️ 2996 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given a 0-indexed array of integers `nums`.
### A prefix `nums[0..i]` is **sequential** if, for all `1 <= j <= i`, `nums[j] = nums[j - 1] + 1`. In particular, the prefix consisting only of `nums[0]` is sequential.
### Return the **smallest integer** `x` missing from `nums` such that `x` is **greater than or equal to** the sum of the **longest sequential prefix**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ nums = [1,2,3,2,5]
  ### 📤 `Output`  ➤ 6
  ### 🔦 `Explanation`  ➤ The longest sequential prefix is `[1,2,3]` with a sum of `6`. `6` is not in the array, so `6` is the answer.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ nums = [3,4,5,1,12,14,13]
  ### 📤 `Output`  ➤ 15
  ### 🔦 `Explanation` ➤ The longest sequential prefix is `[3,4,5]` with a sum of `12`. Since `12`, `13`, and `14` are all in the array, the smallest missing value ≥ `12` is `15`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ nums = [5,1,2]
  ### 📤 `Output`  ➤ 5
  ### 🔦 `Explanation` ➤ The longest sequential prefix is `[5]` with a sum of `5`. `5` is in the array, so we check `6` — not in array? Wait, `5` itself: checking from `5` upward, `5` is in `nums`, so next is `6`. But `6` is not in `nums`, so answer is `6`. Actually prefix sum is `5` and `5` is present → answer is `6`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= nums.length <= 50` </br>
🔹 `1 <= nums[i] <= 50` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Sorting** </br>

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
