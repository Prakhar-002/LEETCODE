# 1760. Minimum Limit of Balls in a Bag

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-limit-of-balls-in-a-bag/description/?envType=daily-question&envId=2024-12-07"><strong>➥ ☢️ 1760 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums` where the i<sup>th</sup> bag contains `nums[i]` balls. You are also given an integer `maxOperations`.

### You can perform the following operation at most `maxOperations` times:

- Take any bag of balls and divide it into two new bags with a positive number of balls.
  - For example, a bag of `5` balls can become two new bags of `1` and `4` balls, or two new bags of `2` and `3` balls.

### Your penalty is the `maximum` number of balls in a bag. You want to `minimize` your penalty after the operations.

### Return *the minimum possible penalty after performing the operations*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [9], maxOperations = 2

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ 

    ➺ Divide the bag with 9 balls into two bags of sizes 6 and 3. [9] ➺> [6,3].
    ➺ Divide the bag with 6 balls into two bags of sizes 3 and 3. [6,3] -> [3,3,3].
    The bag with the most number of balls has 3 balls, so your penalty is 3 and you should return 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2,4,8,2], maxOperations = 4

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ 

➺ Divide the bag with 8 balls into two bags of sizes 4 and 4. [2,4,<u>**8**</u>,2] -> [2,4,4,4,2].
➺ Divide the bag with 4 balls into two bags of sizes 2 and 2. [2,<u>**4**</u>,4,4,2] -> [2,2,2,4,4,2].
➺ Divide the bag with 4 balls into two bags of sizes 2 and 2. [2,2,2,<u>**4**</u>,4,2] -> [2,2,2,2,2,4,2].
➺ Divide the bag with 4 balls into two bags of sizes 2 and 2. [2,2,2,2,2,<u>**4**</u>,2] -> [2,2,2,2,2,2,2,2].
The bag with the most number of balls has 2 balls, so your penalty is 2, and you should return 2.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [146,788,775,772,792,68,143,376,375,877,516,595,82,56,704,160,403,713,504,431,922,158,60,192,14,788,67,332,26] maxOperations = 80

  ### 📤 `Output`  ➤ 129

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 10<sup>5</sup>** </br>

🔹 **1 <= maxOperations, nums[i] <= 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Binary Search**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
