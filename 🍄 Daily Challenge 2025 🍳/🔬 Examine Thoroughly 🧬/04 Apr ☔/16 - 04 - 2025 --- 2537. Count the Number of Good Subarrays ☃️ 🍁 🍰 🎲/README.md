# 2537. Count the Number of Good Subarrays

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-the-number-of-good-subarrays/description/?envType=daily-question&envId=2025-04-16"><strong>➥ ☢️ 2537 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums` and an integer `k`. Your task is to determine the number of "good" subarrays within `nums`.

### A subarray, denoted as `arr`, is considered "good" if it contains at least `k` pairs of indices `(i, j)` such that `i < j` and `arr[i] == arr[j]`.

### Recall that a subarray is a contiguous (connected) non-empty sequence of elements extracted from within an array.

### Return the total number of good subarrays found within the input array.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,1,1,1,1], k = 10

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ The only good subarray is the array nums itself.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [3,1,4,3,2,2,4], k = 2

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤ There are 4 different good subarrays:

- [3,1,4,3,2,2] that has 2 pairs.

- [3,1,4,3,2,2,4] that has 3 pairs.

- [1,4,3,2,2,4] that has 2 pairs.

- [4,3,2,2,4] that has 2 pairs.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1, 2, 3, 1, 2, 3], k = 1

  ### 📤 `Output`  ➤ 15

  ### 🔦 `Explanation`  ➤: The number pairs would follow as total value of those are following: . and so on iteration count by value and equal value has pairs then answe count with `15`

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [5, 5, 5, 5], k = 5
  
  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ All elements become "5", with pairs to becomes  5-5, . and has '4' pairs only one value, we return one. and  it requires minimum five value and its subset pair result from one possible case so that will fit from this rule

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 10<sup>5</sup> </br>
🔹 1 <= nums[i], k <= 10<sup>9</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Sliding Window**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/16%20-%2004%20-%202025%20---%202537.%20Count%20the%20Number%20of%20Good%20Subarrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202537.%20Count%20the%20Number%20of%20Good%20Subarrays.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/16%20-%2004%20-%202025%20---%202537.%20Count%20the%20Number%20of%20Good%20Subarrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202537.%20Count%20the%20Number%20of%20Good%20Subarrays.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/16%20-%2004%20-%202025%20---%202537.%20Count%20the%20Number%20of%20Good%20Subarrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202537.%20Count%20the%20Number%20of%20Good%20Subarrays.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/16%20-%2004%20-%202025%20---%202537.%20Count%20the%20Number%20of%20Good%20Subarrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202537.%20Count%20the%20Number%20of%20Good%20Subarrays.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/cea0fae3-7dd1-4834-8776-271ef90e6373" width = "700px" height="462px" />

</h1>
