# 862. Shortest Subarray with Sum at Least K

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/shortest-subarray-with-sum-at-least-k/description/?envType=daily-question&envId=2024-11-17"><strong>➥ 🫀 862 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an integer array `nums` and an integer `k`, return *the length of the shortest non-empty `subarray` of `nums` with a sum of at least `k`*. If there is no such `subarray`, return `-1`.

### A `subarray` is a `contiguous` part of an array.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1], k = 1

  ### 📤 `Output`  ➤ 1

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,2], k = 4

  ### 📤 `Output`  ➤ -1

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2,-1,2], k = 3

  ### 📤 `Output`  ➤ 3

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 10<sup>5</sup>** </br>

🔹 **-10<sup>5</sup> <= nums[i] <= 10<sup>5</sup>** </br>

🔹 **1 <= k <= 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Binary Search**  </br>
🔸 **Queue**  </br>
🔸 **Sliding Window**  </br>
🔸 **Heap (Priority Queue)**  </br>
🔸 **Prefix Sum**  </br>
🔸 **Monotonic Queue**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/17%20-%2011%20-%202024%20---%20862.%20Shortest%20Subarray%20with%20Sum%20at%20Least%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20862.%20Shortest%20Subarray%20with%20Sum%20at%20Least%20K.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/17%20-%2011%20-%202024%20---%20862.%20Shortest%20Subarray%20with%20Sum%20at%20Least%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20862.%20Shortest%20Subarray%20with%20Sum%20at%20Least%20K.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/17%20-%2011%20-%202024%20---%20862.%20Shortest%20Subarray%20with%20Sum%20at%20Least%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20862.%20Shortest%20Subarray%20with%20Sum%20at%20Least%20K.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/17%20-%2011%20-%202024%20---%20862.%20Shortest%20Subarray%20with%20Sum%20at%20Least%20K%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20862.%20Shortest%20Subarray%20with%20Sum%20at%20Least%20K.js) |
