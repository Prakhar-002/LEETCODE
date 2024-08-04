# 1508. Range Sum of Sorted Subarray Sums

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/description/?envType=daily-question&envId=2024-08-04"><strong>➥ ☢️ 1508 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given the array `nums` consisting of `n` positive integers. You computed the sum of all non-empty continuous subarrays from the array and then sorted them in non-decreasing order, creating a new array of </br>
 `n * (n + 1) / 2` numbers.

### Return *the sum of the numbers from index `left` to index `right` `(indexed from 1)`*, inclusive, in the new array. Since the answer can be a huge number return it `modulo` 10<sup>9</sup> + 7.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  nums = [1,2,3,4], n = 4, left = 1, right = 5

  ### 📤 `Output`  ➤ 13 

  ### 🔦 `Explanation`  ➤ All subarray sums are 1, 3, 6, 10, 2, 5, 9, 3, 7, 4. After sorting them in non-decreasing order we have the new array [1, 2, 3, 3, 4, 5, 6, 7, 9, 10]. The sum of the numbers from index le = 1 to ri = 5 is 1 + 2 + 3 + 3 + 4 = 13. 

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,2,3,4], n = 4, left = 3, right = 4

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation` ➤ The given array is the same as example 1. We have the new array [1, 2, 3, 3, 4, 5, 6, 7, 9, 10]. The sum of the numbers from index le = 3 to ri = 4 is 3 + 3 = 6.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  nums = [1,2,3,4], n = 4, left = 1, right = 10

  ### 📤 `Output`  ➤ 50

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == nums.length`** </br>

🔹 **`1 <= nums.length <= 1000`** </br>

🔹 **`1 <= nums[i] <= 100`** </br>

🔹 **`1 <= left <= right <= n * (n + 1) / 2`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Two Pointers**  </br>
🔸 **Binary Search**  </br>
🔸 **Sorting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/04%20-%2008%20-%202024%20---%201508.%20Range%20Sum%20of%20Sorted%20Subarray%20Sums%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-1508-RangeSumOfSortedSubarraySums.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/04%20-%2008%20-%202024%20---%201508.%20Range%20Sum%20of%20Sorted%20Subarray%20Sums%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-1508-RangeSumOfSortedSubarraySums.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/04%20-%2008%20-%202024%20---%201508.%20Range%20Sum%20of%20Sorted%20Subarray%20Sums%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-1508-RangeSumOfSortedSubarraySums.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/04%20-%2008%20-%202024%20---%201508.%20Range%20Sum%20of%20Sorted%20Subarray%20Sums%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-1508-RangeSumOfSortedSubarraySums.js) |

