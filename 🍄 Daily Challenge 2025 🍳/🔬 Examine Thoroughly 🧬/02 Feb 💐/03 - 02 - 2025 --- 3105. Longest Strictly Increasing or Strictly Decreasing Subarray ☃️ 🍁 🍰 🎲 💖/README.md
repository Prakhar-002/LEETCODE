# 3105. Longest Strictly Increasing or Strictly Decreasing Subarray

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/description/?envType=daily-question&envId=2025-02-03"><strong>➥ ♻️ 3105 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array of integers `nums`. Return *the length of the longest subarray of* `nums` *which is either strictly increasing or strictly decreasing*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,4,3,3,2]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ </br> </br> The strictly increasing subarrays of `nums` are `[1]`, `[2]`, `[3]`, `[3]`, `[4]`, and `[1,4]`.</br></br> The strictly decreasing subarrays of nums are `[1]`, `[2]`, `[3]`, `[3]`, `[4]`, `[3,2]`, and `[4,3]`.</br></br> Hence, we return `2`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [3,3,3,3]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤ </br> </br> The strictly increasing subarrays of nums are `[3]`, `[3]`, `[3]`, and `[3]`.</br></br>The strictly decreasing subarrays of nums are `[3]`, `[3]`, `[3]`, and `[3]`.</br></br>Hence, we return `1`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [3,2,1]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ </br> </br> The strictly increasing subarrays of nums are `[3]`, `[2]`, and `[1]`.</br></br> The strictly decreasing subarrays of nums are `[3]`, `[2]`, `[1]`, `[3,2]`, `[2,1]`, and `[3,2,1]`.</br></br> Hence, we return 3.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= nums.length <= 50`** </br>

🔹 **`1 <= nums[i] <= 50`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/03%20-%2002%20-%202025%20---%203105.%20Longest%20Strictly%20Increasing%20or%20Strictly%20Decreasing%20Subarray%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%203105.%20Longest%20Strictly%20Increasing%20or.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/03%20-%2002%20-%202025%20---%203105.%20Longest%20Strictly%20Increasing%20or%20Strictly%20Decreasing%20Subarray%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%203105.%20Longest%20Strictly%20Increasing%20or%20S.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/03%20-%2002%20-%202025%20---%203105.%20Longest%20Strictly%20Increasing%20or%20Strictly%20Decreasing%20Subarray%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%203105.%20Longest%20Strictly%20Increasing%20or.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/03%20-%2002%20-%202025%20---%203105.%20Longest%20Strictly%20Increasing%20or%20Strictly%20Decreasing%20Subarray%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203105.%20Longest%20Strictly%20Increasin.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/03%20-%2002%20-%202025%20---%203105.%20Longest%20Strictly%20Increasing%20or%20Strictly%20Decreasing%20Subarray%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%203105.%20Longest%20Strictly%20Increasing%20or%20Stric.c)  |
