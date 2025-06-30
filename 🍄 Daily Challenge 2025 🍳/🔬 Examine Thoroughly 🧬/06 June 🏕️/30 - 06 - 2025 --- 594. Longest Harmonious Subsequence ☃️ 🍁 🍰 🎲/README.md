# 594. Longest Harmonious Subsequence

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/longest-harmonious-subsequence/description/?envType=daily-question&envId=2025-06-30"><strong>➥ ♻️ 594 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A harmonious array is defined as an array where the difference between its maximum value and its minimum value is exactly 1.

### You are given an integer array `nums`. The task is to return the length of its longest harmonious subsequence among all possible subsequences.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,3,2,2,5,2,3,7]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ The longest harmonious subsequence is [3,2,2,2,3].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,2,3,4]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ The longest harmonious subsequences are [1,2], [2,3], and [3,4], all of which have a length of 2.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,1,1,1]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ No harmonic subsequence exists.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 2 * 10<sup>4</sup> </br>

🔹 -10<sup>9</sup> <= nums[i] <= 10<sup>9</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Hash Table**  </br>

🔸 **Sliding Window**  </br>

🔸 **Sorting**  </br>

🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/30%20-%2006%20-%202025%20---%20594.%20Longest%20Harmonious%20Subsequence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20594.%20Longest%20Harmonious%20Subsequence.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/30%20-%2006%20-%202025%20---%20594.%20Longest%20Harmonious%20Subsequence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20594.%20Longest%20Harmonious%20Subsequence.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/30%20-%2006%20-%202025%20---%20594.%20Longest%20Harmonious%20Subsequence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20594.%20Longest%20Harmonious%20Subsequence.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/30%20-%2006%20-%202025%20---%20594.%20Longest%20Harmonious%20Subsequence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20594.%20Longest%20Harmonious%20Subsequence.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/e4f9604a-8773-49df-b704-f3ddacb7652d" width = "700px" height="462px" />

</h1>
