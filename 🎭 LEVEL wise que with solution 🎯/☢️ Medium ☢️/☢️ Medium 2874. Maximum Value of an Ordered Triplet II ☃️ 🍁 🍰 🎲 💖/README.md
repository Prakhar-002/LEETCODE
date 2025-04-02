# 2874. Maximum Value of an Ordered Triplet II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-value-of-an-ordered-triplet-ii/description/"><strong>➥ ☢️ 2874 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

You are given a 0-indexed integer array `nums`.  Your task is to find the maximum value that can be obtained from all possible triplets of indices (i, j, k) such that `i < j < k`.

The value of a triplet of indices `(i, j, k)` is calculated as `(nums[i] - nums[j]) * nums[k]`.

If all possible triplets have a negative value, the function should return 0.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [12,6,1,2,7]

  ### 📤 `Output`  ➤ 77

  ### 🔦 `Explanation`  ➤ The value of the triplet (0, 2, 4) is (nums[0] - nums[2]) * nums[4] = (12 - 1) * 7 = 77.</br> It can be shown that there are no ordered triplets of indices with a value greater than 77.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,10,3,4,19]

  ### 📤 `Output`  ➤ 133

  ### 🔦 `Explanation` ➤ The value of the triplet (1, 2, 4) is (nums[1] - nums[2]) * nums[4] = (10 - 3) * 19 = 133.</br> It can be shown that there are no ordered triplets of indices with a value greater than 133.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,2,3]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ The only ordered triplet of indices (0, 1, 2) has a negative value of (nums[0] - nums[1]) * nums[2] = (1 - 2) * 3 = -3. Hence, the answer would be 0.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

   ### 📥 `Input`  ➤ nums = [5, 4, 3, 2]

   ### 📤 `Output`  ➤ 0

   ### 🔦 `Explanation`  ➤ Using numbers in the example: (5-4) * 3 = 3; (5-3) * 2 = 4; (4-3) * 2 = 2; Using the max value gives a value of zero, that fulfills criteria*

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 3 <= nums.length <= 10<sup>5</sup> </br>

🔹 1 <= nums[i] <= 10<sup>6</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

</br>

# 🌯 Similar 🍲 Questions 🍜 `Solution` 🍱 ˋ°•*⁀➷

### ♻️ [2873. Maximum Value of an Ordered Triplet I](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/02%20-%2004%20-%202025%20---%202873.%20Maximum%20Value%20of%20an%20Ordered%20Triplet%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96) </br>

</br>


# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202874.%20Maximum%20Value%20of%20an%20Ordered%20Triplet%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%202874.%20Maximum%20Value%20of%20an%20Ordered%20Triplet%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202874.%20Maximum%20Value%20of%20an%20Ordered%20Triplet%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%202874.%20Maximum%20Value%20of%20an%20Ordered%20Triplet%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202874.%20Maximum%20Value%20of%20an%20Ordered%20Triplet%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%202874.%20Maximum%20Value%20of%20an%20Ordered%20Triplet%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202874.%20Maximum%20Value%20of%20an%20Ordered%20Triplet%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202874.%20Maximum%20Value%20of%20an%20Ordered%20Triplet%20II.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%202874.%20Maximum%20Value%20of%20an%20Ordered%20Triplet%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%202874.%20Maximum%20Value%20of%20an%20Ordered%20Triplet%20II.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/13398f7f-fdd0-46e0-9c7a-a7224e943ada" width = "700px" height="462px" />

</h1>
