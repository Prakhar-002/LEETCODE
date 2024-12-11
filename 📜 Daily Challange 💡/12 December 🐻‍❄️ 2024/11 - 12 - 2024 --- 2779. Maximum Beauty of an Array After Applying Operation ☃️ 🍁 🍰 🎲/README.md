# 2779. Maximum Beauty of an Array After Applying Operation

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-beauty-of-an-array-after-applying-operation/description/?envType=daily-question&envId=2024-12-11"><strong>➥ ☢️ 2779 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed array nums and a non-negative integer k.

### In one operation, you can do the following:

- Choose an index `i` that hasn't been chosen before from the range `[0, nums.length - 1]`.

- Replace `nums[i]` with any integer from the range `[nums[i] - k, nums[i] + k]`.

### The `beauty` of the array is the length of the longest subsequence consisting of equal elements.

### Return *the maximum possible beauty of the array nums after applying the operation any number of times*.

### `Note` that you can apply the operation to each index `only once`.

### A `subsequence` of an array is a new array generated from the original array by deleting some elements (possibly none) without changing the order of the remaining elements.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [4,6,1,2], k = 2

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ ➺
In this example, we apply the following operations:
➺ Choose index 1, replace it with 4 (from range [4,8]), nums = [4,4,1,2].

➺ Choose index 3, replace it with 4 (from range [0,4]), nums = [4,4,1,4].

After the applied operations, the beauty of the array nums is 3 (subsequence consisting of indices 0, 1, and 3).

It can be proven that 3 is the maximum possible length we can achieve.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,1,1,1], k = 10

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤  In this example we don't have to apply any operations.</br> The beauty of the array nums is 4 (whole array).

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 10<sup>5</sup>** </br>

🔹 **0 <= nums[i], k <= 10<sup>5</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Binary Search**  </br>
🔸 **Sliding Window**  </br>
🔸 **Sorting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/11%20-%2012%20-%202024%20---%202779.%20Maximum%20Beauty%20of%20an%20Array%20After%20Applying%20Operation%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202779.%20Maximum%20Beauty%20of%20an%20Array%20After%20Applying%20Operation.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/11%20-%2012%20-%202024%20---%202779.%20Maximum%20Beauty%20of%20an%20Array%20After%20Applying%20Operation%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202779.%20Maximum%20Beauty%20of%20an%20Array%20After%20Applying%20Operation.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/11%20-%2012%20-%202024%20---%202779.%20Maximum%20Beauty%20of%20an%20Array%20After%20Applying%20Operation%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202779.%20Maximum%20Beauty%20of%20an%20Array%20After%20Applying%20Operation.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/11%20-%2012%20-%202024%20---%202779.%20Maximum%20Beauty%20of%20an%20Array%20After%20Applying%20Operation%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202779.%20Maximum%20Beauty%20of%20an%20Array%20After%20Applying%20Operation.js) |
