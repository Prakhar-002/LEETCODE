# 2444. Count Subarrays With Fixed Bounds

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-subarrays-with-fixed-bounds/description/?envType=daily-question&envId=2025-04-26"><strong>➥ 🫀 2444 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums`, along with two integers `minK` and `maxK`.

A "fixed-bound" subarray is a contiguous part of the array (`nums`) that satisfies *both* of these conditions:

1. The minimum value within the subarray is equal to `minK`.
2. The maximum value within the subarray is equal to `maxK`.

### Your task is to return the total number of "fixed-bound" subarrays that exist within the input array `nums`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,3,5,2,7,5], minK = 1, maxK = 5

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ The fixed-bound subarrays are [1,3,5] and [1,3,5,2].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,1,1,1], minK = 1, maxK = 1

  ### 📤 `Output`  ➤ 10

  ### 🔦 `Explanation` ➤ Every subarray of nums is a fixed-bound subarray. There are 10 possible subarrays.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1, 2, 3, 4, 5], minK = 2, maxK = 4

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ The array subset as  "minimum bound =2 number range, maximum = `4 number  as all number follow correct rule to form this

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [4,5,6,7] minK=1, maxK=9

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ all other numbers out there to fit under rule "as per array . that returns correct for what the result does show" "as in set numbers" and other result number ""0 as no match or no elements find from it

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 2 <= nums.length <= 10<sup>5</sup> </br>

🔹 1 <= nums[i], minK, maxK <= 10<sup>6</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Queue**  </br>
🔸 **Sliding Window**  </br>
🔸 **Monotonic Queue**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/26%20-%2004%20-%202025%20---%202444.%20Count%20Subarrays%20With%20Fixed%20Bounds%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202444.%20Count%20Subarrays%20With%20Fixed%20Bounds.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/26%20-%2004%20-%202025%20---%202444.%20Count%20Subarrays%20With%20Fixed%20Bounds%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202444.%20Count%20Subarrays%20With%20Fixed%20Bounds.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/26%20-%2004%20-%202025%20---%202444.%20Count%20Subarrays%20With%20Fixed%20Bounds%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202444.%20Count%20Subarrays%20With%20Fixed%20Bounds.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/26%20-%2004%20-%202025%20---%202444.%20Count%20Subarrays%20With%20Fixed%20Bounds%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202444.%20Count%20Subarrays%20With%20Fixed%20Bounds.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/5f241337-921a-49fe-9bfc-703781d68e85" width = "700px" height="462px" />

</h1>
