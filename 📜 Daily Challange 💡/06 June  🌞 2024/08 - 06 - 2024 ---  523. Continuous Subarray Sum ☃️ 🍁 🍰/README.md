# 523. Continuous Subarray Sum

</br> 

<h2 align="center"> 

<a href="https://leetcode.com/problems/continuous-subarray-sum/?envType=daily-question&envId=2024-06-23"><strong>➥ ☢️ 523 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an integer array nums and an integer k, return `true` if `nums` has a good subarray or `false` otherwise.

### A **good subarray** is a subarray where:

- its length is **at least two**, and

- the sum of the elements of the subarray is a multiple of `k`.

### **Note** that:

- A **subarray** is a contiguous part of the array.

- An integer `x` is a multiple of `k` if there exists an integer `n` such that `x = n * k`. `0` is **always** a multiple of `k`.


</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ nums = [23,2,4,6,7], k = 6

  ### Output  ➤ true

  ### Explanation  ➤ [2, 4] is a continuous subarray of size 2 whose elements sum up to 6.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ nums = [23,2,6,4,7], k = 6

  ### Output  ➤ true

  ### Explanation ➤[23, 2, 6, 4, 7] is an continuous subarray of size 5 whose elements sum up to 42. 42 is a multiple of 6 because 42 = 7 * 6 and 7 is an integer.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤ nums = [23,2,6,4,7], k = 13

  ### Output  ➤ false

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= nums.length <= 10^5**
- **0 <= nums[i] <= 10^9**
- **0 <= sum(nums[i]) <= 2^31 - 1**
- **1 <= k <= 2^31 - 1**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Hash Table**
3. **Prefix Sum**
4. **Math**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/08%20-%2006%20-%202024%20---%20%20523.%20Continuous%20Subarray%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0/%F0%9F%8D%81JAVA_523ContinuousSubarraySum.java) |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/08%20-%2006%20-%202024%20---%20%20523.%20Continuous%20Subarray%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0/%F0%9F%8D%B0PYTHON_523ContinuousSubarraySum.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/08%20-%2006%20-%202024%20---%20%20523.%20Continuous%20Subarray%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0/%E2%98%83%EF%B8%8FJAVASCRIPT_523ContinuousSubarraySum.js) |
