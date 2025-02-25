# 1524. Number of Sub-arrays With Odd Sum

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/description/?envType=daily-question&envId=2025-02-25"><strong>➥ ☢️ 1524 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an array of integers arr, return the number of subarrays with an odd sum.

### Since the answer can be very large, return it modulo 10<sup>9</sup> + 7.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ arr = [1,3,5]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ All subarrays are [[1],[1,3],[1,3,5],[3],[3,5],[5]]</br></br>All sub-arrays sum are [1,4,9,3,8,5].</br></br>Odd sums are [1,9,3,5] so the answer is 4.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ arr = [2,4,6]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤  All subarrays are [[2],[2,4],[2,4,6],[4],[4,6],[6]]</br></br>All sub-arrays sum are [2,6,12,4,10,6].</br></br>All sub-arrays have even sum and the answer is 0.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ arr = [1,2,3,4,5,6,7]

  ### 📤 `Output`  ➤ 16

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= arr.length <= 10<sup>5</sup>** </br>

🔹 **1 <= arr[i] <= 100** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Math**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/25%20-%2002%20-%202025%20---%201524.%20Number%20of%20Sub-arrays%20With%20Odd%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201524.%20Number%20of%20Sub-arrays%20With%20Odd%20Sum.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/25%20-%2002%20-%202025%20---%201524.%20Number%20of%20Sub-arrays%20With%20Odd%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201524.%20Number%20of%20Sub-arrays%20With%20Odd%20Sum.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/25%20-%2002%20-%202025%20---%201524.%20Number%20of%20Sub-arrays%20With%20Odd%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201524.%20Number%20of%20Sub-arrays%20With%20Odd%20Sum.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/25%20-%2002%20-%202025%20---%201524.%20Number%20of%20Sub-arrays%20With%20Odd%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201524.%20Number%20of%20Sub-arrays%20With%20Odd%20Sum.js) |
