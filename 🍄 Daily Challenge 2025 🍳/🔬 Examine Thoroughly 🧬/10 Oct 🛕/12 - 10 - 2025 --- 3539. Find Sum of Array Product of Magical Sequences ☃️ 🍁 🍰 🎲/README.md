# 3539. Find Sum of Array Product of Magical Sequences

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-sum-of-array-product-of-magical-sequences/description/?envType=daily-question&envId=2025-10-12"><strong>➥ ☢️ 3539 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two integers, `m` and `k`, and an integer array `nums`.

### A sequence of integers `seq` is called magical if:

- `seq` has a size of `m`.
- `0 <= seq[i] < nums.length`
- The binary representation of 2<sup>seq[0]</sup> + 2<sup>seq[1]</sup> + ... + 2<sup>seq[m - 1]</sup> has `k` set bits.

### The array product of this sequence is defined as `prod(seq) = (nums[seq[0]] * nums[seq[1]] * ... * nums[seq[m - 1]])`.

### Return the sum of the array products for all valid magical sequences.

### Since the answer may be large, return it modulo 10<sup>9</sup> + 7.

### A set bit refers to a bit in the binary representation of a number that has a value of 1.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `m = 5, k = 5, nums = [1,10,100,10000,1000000]`

  ### 📤 `Output`  ➤ `991600007`

  ### 🔦 `Explanation`  ➤ ➺

  - All permutations of `[0, 1, 2, 3, 4]` are magical sequences, each with an array product of 10<sup>13</sup>.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `m = 2, k = 2, nums = [5,4,3,2,1]`

  ### 📤 `Output`  ➤ `170`

  ### 🔦 `Explanation`  ➤ ➺

  - The magical sequences are `[0, 1]`, `[0, 2]`, `[0, 3]`, `[0, 4]`, `[1, 0]`, `[1, 2]`, `[1, 3]`, `[1, 4]`, `[2, 0]`, `[2, 1]`, `[2, 3]`, `[2, 4]`, `[3, 0]`, `[3, 1]`, `[3, 2]`, `[3, 4]`, `[4, 0]`, `[4, 1]`, `[4, 2]`, and `[4, 3]`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `m = 1, k = 1, nums = [28]`

  ### 📤 `Output`  ➤ `28`

  ### 🔦 `Explanation`  ➤ ➺

  - The only magical sequence is `[0]`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= k <= m <= 30` </br>
🔹 `1 <= nums.length <= 50` </br>
🔹 `1 <= nums[i] <= 10^8` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Math** </br>
🔸 **Dynamic Programming** </br>
🔸 **Bit Manipulation** </br>
🔸 **Combinatorics** </br>
🔸 **Bitmask** </br>

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
