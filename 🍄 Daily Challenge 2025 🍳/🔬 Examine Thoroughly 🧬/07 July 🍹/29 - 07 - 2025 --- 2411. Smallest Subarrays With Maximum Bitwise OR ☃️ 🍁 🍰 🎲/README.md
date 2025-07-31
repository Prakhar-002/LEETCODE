# 2411. Smallest Subarrays With Maximum Bitwise OR

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/smallest-subarrays-with-maximum-bitwise-or/description/?envType=daily-question&envId=2025-07-30"><strong>➥ ☢️ 2411 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `nums` of length `n` consisting of non-negative integers.

### For each index `i` from 0 to `n - 1`, you must find the size of the *minimum* sized non-empty subarray of `nums` that starts at `i` (inclusive) and achieves the *maximum possible bitwise OR*.

### More formally: Let `Bij` represent the bitwise OR of the subarray `nums[i...j]` (from index `i` to index `j`, inclusive). For each starting index `i`, you need to determine the smallest subarray `nums[i...j]` whose bitwise OR is equal to the *maximum* possible bitwise OR achievable from that starting index (i.e., equal to `max(Bik)` where `i <= k <= n - 1`).

### Your function should return an integer array `answer` of size `n`, where `answer[i]` is the length of the minimum-sized subarray starting at index `i` with the maximum bitwise OR value.

### Remember that:

- The bitwise OR of an array is calculated by performing the bitwise OR operation on all the numbers within it (0-indexed).
- A subarray is a contiguous, non-empty sequence of elements within an array.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,0,2,1,3]

  ### 📤 `Output`  ➤ [3,3,2,2,1]

  ### 🔦 `Explanation`  ➤
The maximum possible bitwise OR starting at any index is 3.

- Starting at index 0, the shortest subarray that yields it is [1,0,2] (1 OR 0 OR 2 = 3).
- Starting at index 1, the shortest subarray that yields the maximum bitwise OR is [0,2,1] (0 OR 2 OR 1 = 3).
- Starting at index 2, the shortest subarray that yields the maximum bitwise OR is [2,1] (2 OR 1 = 3).
- Starting at index 3, the shortest subarray that yields the maximum bitwise OR is [1,3] (1 OR 3 = 3).
- Starting at index 4, the shortest subarray that yields the maximum bitwise OR is [3] (which is just 3).

Therefore, we return [3,3,2,2,1].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,2]

  ### 📤 `Output`  ➤ [2,1]

  ### 🔦 `Explanation` ➤ Starting at index 0, the shortest subarray that yields the maximum bitwise OR is of length 2 (1 OR 2 = 3).
Starting at index 1, the shortest subarray that yields the maximum bitwise OR is of length 1 (which is just 2).
Therefore, we return [2,1].

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 n == nums.length </br>

🔹 1 <= n <= 10<sup>5</sup> </br>

🔹 0 <= nums[i] <= 10<sup>9</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Binary Search**  </br>

🔸 **Bit Manipulation**  </br>

🔸 **Sliding Window**  </br>

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

<img src ="https://github.com/user-attachments/assets/2799b042-41f7-47f3-b9b6-1e39f8d2cf94" width = "700px" height="462px" />

</h1>
