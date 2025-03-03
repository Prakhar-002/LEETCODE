# 2161. Partition Array According to Given Pivot

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/partition-array-according-to-given-pivot/description/?envType=daily-question&envId=2025-03-03"><strong>➥ ☢️ 2161 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a `0-indexed` integer array `nums` and an integer `pivot`. Rearrange `nums` such that the following conditions are satisfied:


- Every element less than `pivot` appears before every element greater than `pivot`.

- Every element equal to `pivot` appears in between the elements less than and greater than `pivot`.

- The relative order of the elements less than `pivot` and the elements greater than `pivot` is maintained.

    - More formally, consider every `p_i`, `p_j` where `p_i` is the new position of the i<sup>th</sup> element and `p_j` is the new position of the jth element. If `i < j` and both elements are smaller (or larger) than `pivot`, then `p_i` < `p_j`.

### Return `nums` after the rearrangement.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  nums = [9,12,5,10,14,3,10], pivot = 10

  ### 📤 `Output`  ➤ [9,5,3,10,10,12,14]

  ### 🔦 `Explanation`  ➤ The elements 9, 5, and 3 are less than the pivot so they are on the left side of the array.</br></br>The elements 12 and 14 are greater than the pivot so they are on the right side of the array.</br></br>The relative ordering of the elements less than and greater than pivot is also maintained. [9, 5, 3] and [12, 14] are the respective orderings.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [-3,4,3,2], pivot = 2

  ### 📤 `Output`  ➤ [-3,2,4,3]

  ### 🔦 `Explanation` ➤ The element -3 is less than the pivot so it is on the left side of the array.</br></br>The elements 4 and 3 are greater than the pivot so they are on the right side of the array.</br></br>The relative ordering of the elements less than and greater than pivot is also maintained. [-3] and [4, 3] are the respective orderings.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 10<sup>5</sup>** </br>

🔹 **-10<sup>6</sup> <= nums[i] <= 10<sup>6</sup>** </br>

🔹 **`pivot` equals to an element of `nums`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Two Pointers**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/03%20-%2003%20-%202025%20---%202161.%20Partition%20Array%20According%20to%20Given%20Pivot%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%202161.%20Partition%20Array%20According%20to%20Given%20Pivot.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/03%20-%2003%20-%202025%20---%202161.%20Partition%20Array%20According%20to%20Given%20Pivot%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%202161.%20Partition%20Array%20According%20to%20Given%20Pivot.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/03%20-%2003%20-%202025%20---%202161.%20Partition%20Array%20According%20to%20Given%20Pivot%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%202161.%20Partition%20Array%20According%20to%20Given%20Pivot.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/03%20-%2003%20-%202025%20---%202161.%20Partition%20Array%20According%20to%20Given%20Pivot%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202161.%20Partition%20Array%20According%20to%20Given%20Pivot.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/03%20-%2003%20-%202025%20---%202161.%20Partition%20Array%20According%20to%20Given%20Pivot%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%202161.%20Partition%20Array%20According%20to%20Given%20Pivot.c)  |
