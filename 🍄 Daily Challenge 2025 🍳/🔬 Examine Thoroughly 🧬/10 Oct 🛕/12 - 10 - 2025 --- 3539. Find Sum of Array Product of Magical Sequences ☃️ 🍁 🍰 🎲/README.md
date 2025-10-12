# 3539. Find Sum of Array Product of Magical Sequences

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-sum-of-array-product-of-magical-sequences/description/?envType=daily-question&envId=2025-10-12"><strong>➥ 🫀 3539 Leetcode Hard 🫀 </strong></a>
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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/12%20-%2010%20-%202025%20---%203539.%20Find%20Sum%20of%20Array%20Product%20of%20Magical%20Sequences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203539.%20Find%20Sum%20of%20Array%20Product%20of%20Magical%20Sequences.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/12%20-%2010%20-%202025%20---%203539.%20Find%20Sum%20of%20Array%20Product%20of%20Magical%20Sequences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203539.%20Find%20Sum%20of%20Array%20Product%20of%20Magical%20Sequences.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/12%20-%2010%20-%202025%20---%203539.%20Find%20Sum%20of%20Array%20Product%20of%20Magical%20Sequences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203539.%20Find%20Sum%20of%20Array%20Product%20of%20Magical%20Sequences.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/12%20-%2010%20-%202025%20---%203539.%20Find%20Sum%20of%20Array%20Product%20of%20Magical%20Sequences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203539.%20Find%20Sum%20of%20Array%20Product%20of%20Magical%20Seque.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/f9b58822-4657-48b9-b222-fe43c6cc0446" width = "700px" height="462px" />

</h1>
