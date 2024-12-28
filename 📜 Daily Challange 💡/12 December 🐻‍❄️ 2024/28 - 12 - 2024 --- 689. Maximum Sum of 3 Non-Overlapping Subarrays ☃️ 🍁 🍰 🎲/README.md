# 689. Maximum Sum of 3 Non-Overlapping Subarrays

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-sum-of-3-non-overlapping-subarrays/description/?envType=daily-question&envId=2024-12-28"><strong>➥ ☢️ 689 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an integer array `nums` and an integer `k`, find three non-overlapping subarrays of length `k` with maximum sum and return them.

### Return the result as a list of indices representing the starting position of each interval (0-indexed). If there are multiple answers, return the lexicographically smallest one.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  nums = [1,2,1,2,6,7,5,1], k = 2

  ### 📤 `Output`  ➤ [0,3,5]

  ### 🔦 `Explanation`  ➤ Subarrays [1, 2], [2, 6], [7, 5] correspond to the starting indices [0, 3, 5].</br> We could have also taken [2, 1], but an answer of [1, 3, 5] would be lexicographically larger.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,2,1,2,1,2,1,2,1], k = 2

  ### 📤 `Output`  ➤ [0,2,4]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 2 * 104** </br>

🔹 **1 <= nums[i] < 216** </br>

🔹 **`1 <= k <= floor(nums.length / 3)`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Dynamic Programming**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/28%20-%2012%20-%202024%20---%20689.%20Maximum%20Sum%20of%203%20Non-Overlapping%20Subarrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20689.%20Maximum%20Sum%20of%203%20Non-Overlapping%20Subarrays.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/28%20-%2012%20-%202024%20---%20689.%20Maximum%20Sum%20of%203%20Non-Overlapping%20Subarrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20689.%20Maximum%20Sum%20of%203%20Non-Overlapping%20Subarrays.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/28%20-%2012%20-%202024%20---%20689.%20Maximum%20Sum%20of%203%20Non-Overlapping%20Subarrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20689.%20Maximum%20Sum%20of%203%20Non-Overlapping%20Subarrays.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/28%20-%2012%20-%202024%20---%20689.%20Maximum%20Sum%20of%203%20Non-Overlapping%20Subarrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20689.%20Maximum%20Sum%20of%203%20Non-Overlapping%20Subarrays.js) |
