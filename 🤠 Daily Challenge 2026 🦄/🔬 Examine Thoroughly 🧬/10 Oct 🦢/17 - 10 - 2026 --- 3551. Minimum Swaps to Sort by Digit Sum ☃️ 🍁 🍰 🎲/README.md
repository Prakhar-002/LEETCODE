# 3551. Minimum Swaps to Sort by Digit Sum

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-swaps-to-sort-by-digit-sum/description/?envType=daily-question&envId=2026-10-17"><strong>➥ ☢️ 3551 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array `nums` of distinct positive integers. You need to sort the array in increasing order based on the sum of the digits of each number. If two numbers have the same digit sum, the smaller number appears first in the sorted order.

### Return the minimum number of swaps required to rearrange `nums` into this sorted order.

### A swap is defined as exchanging the values at two distinct positions in the array.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`   ➤ `nums = [37,100]`

  ### 📤 `Output`  ➤ `1`

  ### 🔦 `Explanation`  ➤ ➺ Compute the digit sum for each integer: `[3 + 7 = 10, 1 + 0 + 0 = 1]` → `[10, 1]`. Sort the integers based on digit sum: `[100, 37]`. Swap 37 with 100 to obtain the sorted order. Thus, the minimum number of swaps required to rearrange `nums` is 1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums = [22,14,33,7]`

  ### 📤 `Output`  ➤ `0`

  ### 🔦 `Explanation` ➤ ➺ Compute the digit sum for each integer: `[2 + 2 = 4, 1 + 4 = 5, 3 + 3 = 6, 7 = 7]` → `[4, 5, 6, 7]`. Sort the integers based on digit sum: `[22, 14, 33, 7]`. The array is already sorted. Thus, the minimum number of swaps required to rearrange `nums` is 0.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums = [18,43,34,16]`

  ### 📤 `Output`  ➤ `2`

  ### 🔦 `Explanation`  ➤ ➺ Compute the digit sum for each integer: `[1 + 8 = 9, 4 + 3 = 7, 3 + 4 = 7, 1 + 6 = 7]` → `[9, 7, 7, 7]`. Sort the integers based on digit sum: `[16, 34, 43, 18]`. Swap 18 with 16, and swap 43 with 34 to obtain the sorted order. Thus, the minimum number of swaps required to rearrange `nums` is 2.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= nums.length <= 10^5`** </br>

🔹 **`1 <= nums[i] <= 10^9`** </br>

🔹 **`nums` consists of distinct positive integers.** </br>

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
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
