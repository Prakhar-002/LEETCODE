# 898. Bitwise ORs of Subarrays

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/bitwise-ors-of-subarrays/description/?envType=daily-question&envId=2025-07-31"><strong>➥ ☢️ 898 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `arr`. Your task is to determine the number of *distinct* bitwise OR results that can be obtained from all non-empty subarrays of `arr`.

### Here's what you need to know:

- The bitwise OR of a subarray is the result of applying the bitwise OR operation to every integer within the subarray. If the subarray has only one integer, its bitwise OR is simply that integer itself.
- A subarray is defined as a contiguous (connected) non-empty sequence of elements taken from within the original array.

### Return the number of distinct bitwise OR values among all possible subarrays.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ arr = [0]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ There is only one possible result: 0.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ arr = [1,1,2]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ The possible subarrays are [1], [1], [2], [1, 1], [1, 2], [1, 1, 2].
These yield the results 1, 1, 2, 1, 3, 3.
There are 3 unique values, so the answer is 3.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ arr = [1,2,4]

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation` ➤ The possible results are 1, 2, 3, 4, 6, and 7.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= arr.length <= 5 * 10<sup>4</sup> </br>

🔹 0 <= arr[i] <= 10<sup>9</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Dynamic Programming**  </br>

🔸 **Bit Manipulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/31%20-%2007%20-%202025%20---%20898.%20Bitwise%20ORs%20of%20Subarrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20898.%20Bitwise%20ORs%20of%20Subarrays.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/31%20-%2007%20-%202025%20---%20898.%20Bitwise%20ORs%20of%20Subarrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20898.%20Bitwise%20ORs%20of%20Subarrays.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/31%20-%2007%20-%202025%20---%20898.%20Bitwise%20ORs%20of%20Subarrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20898.%20Bitwise%20ORs%20of%20Subarrays.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/31%20-%2007%20-%202025%20---%20898.%20Bitwise%20ORs%20of%20Subarrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20898.%20Bitwise%20ORs%20of%20Subarrays.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/cf60b5fa-7c96-429a-af2e-e03c446a4ed6" width = "700px" height="462px" />

</h1>
