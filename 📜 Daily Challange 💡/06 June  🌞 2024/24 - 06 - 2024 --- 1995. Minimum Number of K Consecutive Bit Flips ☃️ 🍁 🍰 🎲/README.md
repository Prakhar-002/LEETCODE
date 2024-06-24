# 995. Minimum Number of K Consecutive Bit Flips

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-number-of-k-consecutive-bit-flips/description/?envType=daily-question&envId=2024-06-24"><strong>➥ 🫀 995 Leetcode Que Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a binary array `nums` and an integer `k`.

### A `k-bit flip` is choosing a `subarray` of length `k` from `nums` and simultaneously changing every `0` in the subarray to `1`, and every `1` in the subarray to `0`.

### Return *the minimum number of `k-bit flips` required so that there is no `0` in the array. If it is not possible, return `-1`*.

### A `subarray` is a `contiguous` part of an array.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ nums = [0,1,0], k = 1

  ### Output  ➤ 2

  ### Explanation  ➤ Flip nums[0], then flip nums[2].


</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ nums = [1,1,0], k = 2

  ### Output  ➤ -1

  ### Explanation ➤ No matter how we flip subarrays of size 2, we cannot make the array become [1,1,1].


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤ nums = [0,0,0,1,0,1,1,0], k = 3

  ### Output  ➤ 3

  ### Explanation ➤ 

      Flip nums[0],nums[1],nums[2]: nums becomes [1,1,1,1,0,1,1,0]
      Flip nums[4],nums[5],nums[6]: nums becomes [1,1,1,1,1,0,0,0]
      Flip nums[5],nums[6],nums[7]: nums becomes [1,1,1,1,1,1,1,1]

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= nums.length <= 10^5**
- **1 <= k <= nums.length**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Queue**
3. **Sliding Window**
4. **Bit Manipulation**
5. **Prefix Sum**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |

