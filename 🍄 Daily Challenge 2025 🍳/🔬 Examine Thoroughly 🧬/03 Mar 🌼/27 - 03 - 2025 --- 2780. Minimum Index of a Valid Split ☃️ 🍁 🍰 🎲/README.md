# 2780. Minimum Index of a Valid Split

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-index-of-a-valid-split/description/?envType=daily-question&envId=2025-03-27"><strong>➥ ☢️ 2780 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

An element `x` of an **integer array** `arr` of length `m` is **dominant** if **more than half** the elements of `arr` have a value of `x`.

You are given a **0-indexed integer array** `nums` of length `n` with **one dominant element**.

### 🔹 Task:

- You can split `nums` at an **index** `i` into two arrays:
  - `nums[0, ..., i]`
  - `nums[i + 1, ..., n - 1]`

- A **split is valid** if:
  1️⃣ `0 <= i < n - 1`  
  2️⃣ Both **left** and **right** subarrays have the **same dominant element** as `nums`.

- Return the **minimum index** of a valid split.  
- If **no valid split exists**, return `-1`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,2,2,2]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ We can split the array at index 2 to obtain arrays [1,2,2] and [2]. 

- In array [1,2,2], element 2 is dominant since it occurs twice in the array and 2 * 2 > 3. 

- In array [2], element 2 is dominant since it occurs once in the array and 1 * 2 > 1.

- Both [1,2,2] and [2] have the same dominant element as nums, so this is a valid split. 

- It can be shown that index 2 is the minimum index of a valid split. 

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2,1,3,1,1,1,7,1,2,1]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤ We can split the array at index 4 to obtain arrays [2,1,3,1,1] and [1,7,1,2,1].

- In array [2,1,3,1,1], element 1 is dominant since it occurs thrice in the array and 3 * 2 > 5.

- In array [1,7,1,2,1], element 1 is dominant since it occurs thrice in the array and 3 * 2 > 5.

- Both [2,1,3,1,1] and [1,7,1,2,1] have the same dominant element as nums, so this is a valid split.

- It can be shown that index 4 is the minimum index of a valid split.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [3,3,3,3,7,2,2]

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation`  ➤ It can be shown that there is no valid split.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1, 1, 1, 2, 2]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ Dominant value is `1`.

-  Splitting at index 0: `[1]` (dominant = 1), `[1, 1, 2, 2]` (no dominant element). Not Valid.

-  Splitting at index 1: `[1, 1]` (dominant = 1), `[1, 2, 2]` (no dominant element). Not Valid.

-  Splitting at index 2: `[1, 1, 1]` (dominant = 1), `[2, 2]` (dominant = 2). Not Valid because 1 != 2

- If the Input: nums = [2, 2, 1, 1, 1] at index splitting as 1 index . it going as -1 cause No Dominant on Right-sided array

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 10<sup>5</sup> </br>
🔹 1 <= nums[i] <= 10<sup>9</sup> </br>
🔹 nums has exactly one dominant element. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
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
