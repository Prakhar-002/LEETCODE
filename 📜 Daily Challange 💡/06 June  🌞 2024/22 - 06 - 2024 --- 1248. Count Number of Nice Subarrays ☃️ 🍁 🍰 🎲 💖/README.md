# 1248. Count Number of Nice Subarrays

</br> 

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-number-of-nice-subarrays/?envType=daily-question&envId=2024-06-23"><strong>➥ ☢️ 1248 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an array of integers `nums` and an integer `k`. A continuous subarray is called **nice** if there are k odd numbers on it.

### Return the number of **nice** sub-arrays.
sub-arrays.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ nums = [1,1,2,1,1], k = 3

  ### Output  ➤ 2

  ### Explanation  ➤ The only sub-arrays with 3 odd numbers are [1,1,2,1] and [1,2,1,1].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤  nums = [2,4,6], k = 1

  ### Output  ➤ 0

  ### Explanation ➤  There are no odd numbers in the array.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤  nums = [2,2,2,1,2,2,1,2,2,2], k = 2

  ### Output  ➤ 16

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= nums.length <= 50000**
- **1 <= nums[i] <= 10^5**
- **1 <= k <= nums.length**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Math**
3. **Sliding Window**
4. **Heap Table**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/22%20-%2006%20-%202024%20---%201248.%20Count%20Number%20of%20Nice%20Subarrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA_1248_CountNumberOfNiceSubarrays.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/22%20-%2006%20-%202024%20---%201248.%20Count%20Number%20of%20Nice%20Subarrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP_1248_CountNumberOfNiceSubarrays.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/22%20-%2006%20-%202024%20---%201248.%20Count%20Number%20of%20Nice%20Subarrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_1248_CountNumberOfNiceSubarrays.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/22%20-%2006%20-%202024%20---%201248.%20Count%20Number%20of%20Nice%20Subarrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_1248_CountNumberOfNiceSubarrays.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/22%20-%2006%20-%202024%20---%201248.%20Count%20Number%20of%20Nice%20Subarrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C_1248_CountNumberOfNiceSubarrays.c)  |

