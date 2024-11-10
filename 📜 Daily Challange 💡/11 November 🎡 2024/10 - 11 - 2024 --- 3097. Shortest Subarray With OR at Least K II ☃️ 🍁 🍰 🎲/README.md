# 3097. Shortest Subarray With OR at Least K II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/shortest-subarray-with-or-at-least-k-ii/description/?envType=daily-question&envId=2024-11-10"><strong>➥ ☢️ 3097 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array `nums` of `non-negative` integers and an integer `k`.

### An array is called `special` if the bitwise `OR` of all of its elements is at least `k`.

### Return *the length of the shortest special non-empty subarray of `nums`, or return `-1` if no special subarray exists*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,2,3], k = 2

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ The subarray `[3]` has `OR` value of 3. Hence, we return `1`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  nums = [2,1,8], k = 10

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ The subarray `[2,1,8]` has `OR` value of `11`. Hence, we return `3`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,2], k = 0

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ The subarray `[1]` has `OR` value of `1`. Hence, we return `1`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 2 * 10<sup>5</sup>** </br>

🔹 **0 <= nums[i] <= 10<sup>9</sup>** </br>

🔹 **0 <= k <= 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Bit Manipulation**  </br>
🔸 **Sliding Window**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/10%20-%2011%20-%202024%20---%203097.%20Shortest%20Subarray%20With%20OR%20at%20Least%20K%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203097.%20Shortest%20Subarray%20With%20OR%20at%20Least%20K%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/10%20-%2011%20-%202024%20---%203097.%20Shortest%20Subarray%20With%20OR%20at%20Least%20K%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203097.%20Shortest%20Subarray%20With%20OR%20at%20Least%20K%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/10%20-%2011%20-%202024%20---%203097.%20Shortest%20Subarray%20With%20OR%20at%20Least%20K%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203097.%20Shortest%20Subarray%20With%20OR%20at%20Least%20K%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/10%20-%2011%20-%202024%20---%203097.%20Shortest%20Subarray%20With%20OR%20at%20Least%20K%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203097.%20Shortest%20Subarray%20With%20OR%20at%20Least%20K%20II.js) |
