# 2845. Count of Interesting Subarrays

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-of-interesting-subarrays/description/?envType=daily-question&envId=2025-04-25"><strong>➥ ☢️ 2845 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `nums`, an integer `modulo`, and an integer `k`. The objective is to count the number of subarrays of `nums` that are deemed "interesting".

### A subarray `nums[l..r]` is considered "interesting" if the following condition holds true:

- Let `cnt` be the number of indices `i` in the range `[l, r]` such that `nums[i] % modulo == k`. Then, `cnt % modulo == k`.

### Remember that a subarray is a contiguous, non-empty sequence of elements within an array. Your task is to return the total count of interesting subarrays.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [3,2,4], modulo = 2, k = 1

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ In this example the interesting subarrays are:

- The subarray nums[0..0] which is [3].

- There is only one index, i = 0, in the range [0, 0] that satisfies nums[i] % modulo == k.

- Hence, cnt = 1 and cnt % modulo == k.

- The subarray nums[0..1] which is [3,2].

- There is only one index, i = 0, in the range [0, 1] that satisfies nums[i] % modulo == k.

- Hence, cnt = 1 and cnt % modulo == k.

- The subarray nums[0..2] which is [3,2,4].

- There is only one index, i = 0, in the range [0, 2] that satisfies nums[i] % modulo == k.

- Hence, cnt = 1 and cnt % modulo == k.

It can be shown that there are no other interesting subarrays. So, the answer is 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [3,1,9,6], modulo = 3, k = 0

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ In this example the interesting subarrays are:

- The subarray nums[0..3] which is [3,1,9,6].

- There are three indices, i = 0, 2, 3, in the range [0, 3] that satisfy nums[i] % modulo == k.

- Hence, cnt = 3 and cnt % modulo == k.

- The subarray nums[1..1] which is [1].

- There is no index, i, in the range [1, 1] that satisfies nums[i] % modulo == k.

- Hence, cnt = 0 and cnt % modulo == k.

It can be shown that there are no other interesting subarrays. So, the answer is 2.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [5, 8, 10], modulo = 4, k = 2

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ In these scenarios all values of module by 4 will euqual to the zero which make array and other all is return "valid"; that can is ""3 is return "" "" result 2 +

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [7, 7, 7, 7] modulo =7 k =0
 
  ### 📤 `Output`  ➤ 10
 

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 10<sup>5</sup> </br>

🔹 1 <= nums[i] <= 10<sup>9</sup> </br>

🔹 1 <= modulo <= 10<sup>9</sup> </br>

🔹 0 <= k < modulo </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/25%20-%2004%20-%202025%20---%202845.%20Count%20of%20Interesting%20Subarrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202845.%20Count%20of%20Interesting%20Subarrays.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/25%20-%2004%20-%202025%20---%202845.%20Count%20of%20Interesting%20Subarrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202845.%20Count%20of%20Interesting%20Subarrays.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/25%20-%2004%20-%202025%20---%202845.%20Count%20of%20Interesting%20Subarrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202845.%20Count%20of%20Interesting%20Subarrays.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/25%20-%2004%20-%202025%20---%202845.%20Count%20of%20Interesting%20Subarrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202845.%20Count%20of%20Interesting%20Subarrays.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/4aed08e2-9061-44ca-84f7-5d19214e7555" width = "700px" height="462px" />

</h1>
