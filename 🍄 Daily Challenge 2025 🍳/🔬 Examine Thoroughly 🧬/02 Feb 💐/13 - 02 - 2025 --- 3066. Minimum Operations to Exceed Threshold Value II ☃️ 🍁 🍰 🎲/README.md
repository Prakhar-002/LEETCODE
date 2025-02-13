# 3066. Minimum Operations to Exceed Threshold Value II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-ii/description/?envType=daily-question&envId=2025-02-13"><strong>➥ ☢️ 3066 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `nums`, and an integer `k`.

### In one operation, you will:

- Take the two smallest integers `x` and `y` in nums.

- Remove `x` and `y` from nums.

- Add `min(x, y) * 2 + max(x, y)` anywhere in the array.

### Note that you can only apply the described operation if `nums` contains at least two elements.

### Return t*he minimum number of operations needed so that all elements of the array are greater than or equal to* `k`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [2,11,10,1,3], k = 10

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ In the first operation, we remove elements 1 and 2, then add 1 * 2 + 2 to nums. nums becomes equal to [4, 11, 10, 3].</br></br> In the second operation, we remove elements 3 and 4, then add 3 * 2 + 4 to nums. nums becomes equal to [10, 11, 10].</br></br> At this stage, all the elements of nums are greater than or equal to 10 so we can stop.</br></br> It can be shown that 2 is the minimum number of operations needed so that all elements of the array are greater than or equal to 10.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,1,2,4,9], k = 20

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤  After one operation, nums becomes equal to [2, 4, 9, 3].</br></br> After two operations, nums becomes equal to [7, 4, 9].</br></br> After three operations, nums becomes equal to [15, 9].</br></br> After four operations, nums becomes equal to [33].</br></br> At this stage, all the elements of nums are greater than 20 so we can stop.</br></br> It can be shown that 4 is the minimum number of operations needed so that all elements of the array are greater than or equal to 20.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **2 <= nums.length <= 2 * 10<sup>5</sup>** </br>

🔹 **1 <= nums[i] <= 10<sup>9</sup>** </br>

🔹 **1 <= k <= 10<sup>9</sup>** </br>

🔹 **The input is generated such that an answer always exists. That is, there exists some sequence of operations after which all elements of the array are greater than or equal to `k`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Heap (Priority Queue)**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/13%20-%2002%20-%202025%20---%203066.%20Minimum%20Operations%20to%20Exceed%20Threshold%20Value%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203066.%20Minimum%20Operations%20to%20Exceed%20Threshold%20Value%20.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/13%20-%2002%20-%202025%20---%203066.%20Minimum%20Operations%20to%20Exceed%20Threshold%20Value%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203066.%20Minimum%20Operations%20to%20Exceed%20Threshold%20Value%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/13%20-%2002%20-%202025%20---%203066.%20Minimum%20Operations%20to%20Exceed%20Threshold%20Value%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203066.%20Minimum%20Operations%20to%20Exceed%20Threshold%20Value%20.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/13%20-%2002%20-%202025%20---%203066.%20Minimum%20Operations%20to%20Exceed%20Threshold%20Value%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203066.%20Minimum%20Operations%20to%20Exceed%20Threshold.js) |
