# 3152. Special Array II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/special-array-ii/description/?envType=daily-question&envId=2024-12-09"><strong>➥ ☢️ 3152 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### An array is considered `special` if every pair of its adjacent elements contains two numbers with different parity.

### You are given an array of integer `nums` and a 2D integer matrix `queries`, where for queries[i] = [from<sup>i</sup>, to<sup>i</sup>] your task is to check that subarray nums[from<sup>i</sup>..to<sup>i</sup>] is `special` or not.

### Return an array of booleans `answer` such that `answer[i]` is true if nums[from<sup>i</sup>..to<sup>i</sup>] is special.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [3,4,1,2,6], queries = [[0,4]]

  ### 📤 `Output`  ➤  [false]

  ### 🔦 `Explanation`  ➤ The subarray is `[3,4,1,2,6]`. 2 and 6 are both even.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [4,3,1,6], queries = [[0,2],[2,3]]

  ### 📤 `Output`  ➤ [false,true]

  ### 🔦 `Explanation` ➤ 

1. The subarray is `[4,3,1]`. 3 and 1 are both odd. So the answer to this query is `false`.

2. The subarray is `[1,6]`. There is only one pair: `(1,6)` and it contains numbers with different parity. So the answer to this query is `true`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 10<sup>5</sup>** </br>

🔹 **1 <= nums[i] <= 10<sup>5</sup>** </br>

🔹 **1 <= queries.length <= 10<sup>5</sup>** </br>

🔹 **`queries[i].length == 2`** </br>

🔹 **`0 <= queries[i][0] <= queries[i][1] <= nums.length - 1`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Binary Search**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/09%20-%2012%20-%202024%20---%203152.%20Special%20Array%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203152.%20Special%20Array%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/09%20-%2012%20-%202024%20---%203152.%20Special%20Array%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203152.%20Special%20Array%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/09%20-%2012%20-%202024%20---%203152.%20Special%20Array%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203152.%20Special%20Array%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/09%20-%2012%20-%202024%20---%203152.%20Special%20Array%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203152.%20Special%20Array%20II.js) |
