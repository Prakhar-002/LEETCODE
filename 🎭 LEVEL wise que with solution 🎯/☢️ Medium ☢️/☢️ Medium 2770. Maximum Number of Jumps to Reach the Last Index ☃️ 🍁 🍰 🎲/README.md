# 2770. Maximum Number of Jumps to Reach the Last Index

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-number-of-jumps-to-reach-the-last-index/description/?envType=daily-question&envId=2026-05-11"><strong>➥ ☢️ 2770 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given a 0-indexed array `nums` of `n` integers and an integer `target`.
### You are initially positioned at **index** `0`. In one step, you can jump from index `i` to any index `j` such that:
### &nbsp;&nbsp;&nbsp;&nbsp;• `0 <= i < j < n`
### &nbsp;&nbsp;&nbsp;&nbsp;• `-target <= nums[j] - nums[i] <= target`
### Return the **maximum number of jumps** you can make to reach index `n - 1`.
### If there is **no way** to reach index `n - 1`, return `-1`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ nums = [1,3,6,4,1,2], target = 2
  ### 📤 `Output`  ➤ 3
  ### 🔦 `Explanation`  ➤ Optimal sequence: index `0 → 1 → 3 → 5`. It can be proven there is no jumping sequence with more than `3` jumps from index `0` to `n-1`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ nums = [1,3,6,4,1,2], target = 3
  ### 📤 `Output`  ➤ 5
  ### 🔦 `Explanation` ➤ Optimal sequence: index `0 → 1 → 2 → 3 → 4 → 5`. Every consecutive pair satisfies the target constraint, giving `5` jumps.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ nums = [1,3,6,4,1,2], target = 0
  ### 📤 `Output`  ➤ -1
  ### 🔦 `Explanation` ➤ With `target = 0`, we can only jump to indices where `nums[j] == nums[i]`. No such valid path exists from index `0` to `n-1`, so return `-1`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `2 <= nums.length == n <= 1000` </br>
🔹 `-10^9 <= nums[i] <= 10^9` </br>
🔹 `0 <= target <= 2 * 10^9` </br>

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

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
