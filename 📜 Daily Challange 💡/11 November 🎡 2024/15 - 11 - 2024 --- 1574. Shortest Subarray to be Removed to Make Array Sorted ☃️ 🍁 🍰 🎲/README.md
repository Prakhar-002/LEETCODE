# 1574. Shortest Subarray to be Removed to Make Array Sorted

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/shortest-subarray-to-be-removed-to-make-array-sorted/description/?envType=daily-question&envId=2024-11-15"><strong>➥ ☢️ 1574 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an integer array `arr`, remove a subarray (can be empty) from `arr` such that the remaining elements in `arr` are `non-decreasing`.

### Return *the length of the shortest subarray to remove*.

### A `subarray` is a contiguous subsequence of the array.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  arr = [1,2,3,10,4,2,3,5]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ ➺ The shortest subarray we can remove is [10,4,2] of length 3. The remaining elements after that will be [1,2,3,3,5] which are sorted.</br> Another correct solution is to remove the subarray [3,10,4].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ arr = [5,4,3,2,1]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤ Since the array is strictly decreasing, we can only keep a single element. Therefore we need to remove a subarray of length 4, either [5,4,3,2] or [4,3,2,1].

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ arr = [1,2,3]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤  The array is already non-decreasing. We do not need to remove any elements.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= arr.length <= 10<sup>5</sup>** </br>

🔹 **0 <= arr[i] <= 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Two Pointers**  </br>
🔸 **Binary Search**  </br>
🔸 **Stack**  </br>
🔸 **Monotonic Stack**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/15%20-%2011%20-%202024%20---%201574.%20Shortest%20Subarray%20to%20be%20Removed%20to%20Make%20Array%20Sorted%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201574.%20Shortest%20Subarray%20to%20be%20Removed%20to%20Make%20Array%20Sorted.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/15%20-%2011%20-%202024%20---%201574.%20Shortest%20Subarray%20to%20be%20Removed%20to%20Make%20Array%20Sorted%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201574.%20Shortest%20Subarray%20to%20be%20Removed%20to%20Make%20Array%20Sorted.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/15%20-%2011%20-%202024%20---%201574.%20Shortest%20Subarray%20to%20be%20Removed%20to%20Make%20Array%20Sorted%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201574.%20Shortest%20Subarray%20to%20be%20Removed%20to%20Make%20Array%20Sorted.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/15%20-%2011%20-%202024%20---%201574.%20Shortest%20Subarray%20to%20be%20Removed%20to%20Make%20Array%20Sorted%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201574.%20Shortest%20Subarray%20to%20be%20Removed%20to%20Make%20Array%20Sorted.js) |
