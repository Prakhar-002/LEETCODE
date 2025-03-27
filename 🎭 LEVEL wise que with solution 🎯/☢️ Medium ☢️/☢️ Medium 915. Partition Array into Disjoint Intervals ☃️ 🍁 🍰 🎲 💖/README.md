# 915. Partition Array into Disjoint Intervals

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/partition-array-into-disjoint-intervals/description/"><strong>➥ ☢️ 915 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an integer array `nums`, you need to divide it into two contiguous subarrays called `left` and `right` such that:

- 1️⃣ Every element in `left` is **less than or equal** to every element in `right`.  

- 2️⃣ Both `left` and `right` are **non-empty**.  

- 3️⃣ `left` has the **smallest possible size** while satisfying the above conditions.  

Your goal is to return the **length** (number of elements) of the `left` subarray after this partitioning.  
You are **guaranteed** that at least **one valid partitioning** exists for the given input.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [5,0,3,8,6]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ left = [5,0,3], right = [8,6]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,1,1,0,6,12]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤ left = [1,1,1,0], right = [6,12]

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2, 2, 1, 3, 4, 5]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ left = [2, 2, 1], right = [3, 4, 5]. <br/> The element in the left must less then element in right side. Therefore '3' value makes sense 
</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [4, 3, 2, 1, 5, 6, 7]

  ### 📤 `Output`  ➤ 4

   ### 🔦 `Explanation`  ➤  The reason for using [4, 3, 2, 1]. it less then number in rightSide 5 6 7 Therefore it returns smallest Possible left side length which can happens . 

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 2 <= nums.length <= 10<sup>5</sup> </br>\
🔹 0 <= nums[i] <= 10<sup>6</sup> </br>
🔹 There is at least one valid answer for the given input. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20915.%20Partition%20Array%20into%20Disjoint%20Intervals%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%20915.%20Partition%20Array%20into%20Disjoint%20Intervals.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20915.%20Partition%20Array%20into%20Disjoint%20Intervals%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%20915.%20Partition%20Array%20into%20Disjoint%20Intervals.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20915.%20Partition%20Array%20into%20Disjoint%20Intervals%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%20915.%20Partition%20Array%20into%20Disjoint%20Intervals.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20915.%20Partition%20Array%20into%20Disjoint%20Intervals%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20915.%20Partition%20Array%20into%20Disjoint%20Intervals.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20915.%20Partition%20Array%20into%20Disjoint%20Intervals%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%20915.%20Partition%20Array%20into%20Disjoint%20Intervals.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/efd23797-99c5-4135-8c1c-da93f341b545" width = "700px" height="462px" />

</h1>
