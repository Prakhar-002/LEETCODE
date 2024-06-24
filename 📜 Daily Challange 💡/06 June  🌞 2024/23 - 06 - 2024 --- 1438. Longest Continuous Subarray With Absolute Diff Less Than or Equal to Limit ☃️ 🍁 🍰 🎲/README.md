# 1438. Longest Continuous Subarray With Absolute Diff Less Than or Equal to Limit

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/description/?envType=daily-question&envId=2024-06-23"><strong>➥ ☢️ 1438 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an array of integers `nums` and an integer limit, return the size of the longest **non-empty** subarray such that the absolute difference between any two elements of this subarray is less than or equal to `limit`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ nums = [8,2,4,7], limit = 4

  ### Output  ➤ 2

  ### Explanation  ➤ All subarrays are: 

      [8] with maximum absolute diff |8-8| = 0 <= 4.
      [8,2] with maximum absolute diff |8-2| = 6 > 4. 
      [8,2,4] with maximum absolute diff |8-2| = 6 > 4.
      [8,2,4,7] with maximum absolute diff |8-2| = 6 > 4.
      [2] with maximum absolute diff |2-2| = 0 <= 4.
      [2,4] with maximum absolute diff |2-4| = 2 <= 4.
      [2,4,7] with maximum absolute diff |2-7| = 5 > 4.
      [4] with maximum absolute diff |4-4| = 0 <= 4.
      [4,7] with maximum absolute diff |4-7| = 3 <= 4.
      [7] with maximum absolute diff |7-7| = 0 <= 4. 
      Therefore, the size of the longest subarray is 2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤  nums = [10,1,2,4,7,2], limit = 5

  ### Output  ➤ 4

  ### Explanation ➤ The subarray [2,4,7,2] is the longest since the maximum absolute diff is |2-7| = 5 <= 5.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤  nums = [4,2,2,2,4,4,2,2], limit = 0

  ### Output  ➤ 3

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= nums.length <= 10^5**
- **1 <= nums[i] <= 10^9**
- **0 <= limit <= 10^9**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Queue**
3. **Sliding Window**
4. **Heap (Priority Queue)**
5. **Ordered Set**
6. **Monotonic Queue**

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/23%20-%2006%20-%202024%20---%201438.%20Longest%20Continuous%20Subarray%20With%20Absolute%20Diff%20Less%20Than%20or%20Equal%20to%20Limit%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA_1438LongestSubArrAbsDiffLessOrEqToLimit.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/23%20-%2006%20-%202024%20---%201438.%20Longest%20Continuous%20Subarray%20With%20Absolute%20Diff%20Less%20Than%20or%20Equal%20to%20Limit%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP_1438LongestSubArrAbsDiffLessOrEqToLimit.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/23%20-%2006%20-%202024%20---%201438.%20Longest%20Continuous%20Subarray%20With%20Absolute%20Diff%20Less%20Than%20or%20Equal%20to%20Limit%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON_1438LongestSubArrAbsDiffLessOrEqToLimit.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/23%20-%2006%20-%202024%20---%201438.%20Longest%20Continuous%20Subarray%20With%20Absolute%20Diff%20Less%20Than%20or%20Equal%20to%20Limit%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT_1438LongestSubArrAbsDiffLessOrEqToLimit.js) |