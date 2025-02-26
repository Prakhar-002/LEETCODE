# 1749. Maximum Absolute Sum of Any Subarray

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray/description/?envType=daily-question&envId=2025-02-26"><strong>➥ ☢️ 1749 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array  . The absolute sum of a subarray [nums<sub>l</sub> + nums<sub>l+1</sub> + ... + nums<sub>r-1</sub> + nums<sub>r</sub>] is abs(nums<sub>l</sub> + nums<sub>l+1</sub> + ... + nums<sub>r-1</sub> + nums<sub>r</sub>).

### Return *the maximum absolute sum of any (possibly empty) subarray of* `nums`.

### Note that `abs(x)` is defined as follows:

- If `x` is a negative integer, then `abs(xd) = -x`.

- If `x` is a non-negative integer, then `abs(x) = x`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,-3,2,3,-4]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤  The subarray [2,3] has absolute sum = abs(2+3) = abs(5) = 5.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  nums = [2,-5,1,-4,3,-2]

  ### 📤 `Output`  ➤ 8

  ### 🔦 `Explanation` ➤ The subarray [-5,1,-4] has absolute sum = abs(-5+1-4) = abs(-8) = 8.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 105<sup>5</sup>** </br>

🔹 **-10<sup>4</sup> <= nums[i] <= 104<sup>4</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Dynamic Programming**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/26%20-%2002%20-%202025%20---%201749.%20Maximum%20Absolute%20Sum%20of%20Any%20Subarray%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201749.%20Maximum%20Absolute%20Sum%20of%20Any%20Subarray.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/26%20-%2002%20-%202025%20---%201749.%20Maximum%20Absolute%20Sum%20of%20Any%20Subarray%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201749.%20Maximum%20Absolute%20Sum%20of%20Any%20Subarray.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/26%20-%2002%20-%202025%20---%201749.%20Maximum%20Absolute%20Sum%20of%20Any%20Subarray%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201749.%20Maximum%20Absolute%20Sum%20of%20Any%20Subarray.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/26%20-%2002%20-%202025%20---%201749.%20Maximum%20Absolute%20Sum%20of%20Any%20Subarray%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201749.%20Maximum%20Absolute%20Sum%20of%20Any%20Subarray.js) |
