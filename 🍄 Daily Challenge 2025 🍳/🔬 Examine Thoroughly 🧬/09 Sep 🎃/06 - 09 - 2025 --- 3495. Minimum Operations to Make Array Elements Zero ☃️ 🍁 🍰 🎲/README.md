# 3495. Minimum Operations to Make Array Elements Zero

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-operations-to-make-array-elements-zero/description/?envType=daily-question&envId=2025-09-06"><strong>➥ 🫀 3495 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 2D array `queries`, where `queries[i]` is of the form `[l, r]`. Each `queries[i]` defines an array of integers nums consisting of elements ranging from l to r, both inclusive.

### In one operation, you can:

- Select two integers a and b from the array.
- Replace them with floor(a / 4) and floor(b / 4).

### Your task is to determine the minimum number of operations required to reduce all elements of the array to zero for each query. Return the sum of the results for all queries.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `queries = [[1,2],[2,4]]`

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ ➺

  - For queries[0]: The initial array is nums = [1, 2]. In the first operation, select nums[0] and nums[1]. The array becomes [0, 0]. The minimum number of operations required is 1.

  - For queries[1]: The initial array is nums = [2, 3, 4]. In the first operation, select nums[0] and nums[2]. The array becomes [0, 3, 1]. In the second operation, select nums[1] and nums[2]. The array becomes [0, 0, 0]. The minimum number of operations required is 2.
  
  ### The output is 1 + 2 = 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `queries = [[2,6]]`

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤
  
  - For queries[0]: The initial array is nums = [2, 3, 4, 5, 6]. In the first operation, select nums[0] and nums[3]. The array becomes [0, 3, 4, 1, 6]. In the second operation, select nums[2] and nums[4]. The array becomes [0, 3, 1, 1, 1]. In the third operation, select nums[1] and nums[2]. The array becomes [0, 0, 0, 1, 1]. In the fourth operation, select nums[3] and nums[4]. The array becomes [0, 0, 0, 0, 0].
  
  ### The minimum number of operations required is 4. The output is 4.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `queries = [[ 4, 7]]`

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤

  - For queries[0]: The initial array is nums = [4, 5, 6, 7]. In the first operation, select nums[0] and nums[1]. The array becomes [1, 1, 6, 7].
   - In the Second operation, select nums[2] and nums[3]. The array becomes [1, 1, 1, 1].
  -  In the third operation, select nums[0] and nums[1]. The array becomes [0 , 0 , 1, 1]. select the two of each for loop is enoug
 select from operation can make every single element. In the fouth can happen to the minimum

  ### This Minimum be operation for the the array to to make

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= queries.length <= 10^5` </br>

🔹 `queries[i].length == 2` </br>

🔹 `queries[i] == [l, r]` </br>

🔹 `1 <= l < r <= 10^9` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Math** </br>
🔸 **Bit Manipulation** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/06%20-%2009%20-%202025%20---%203495.%20Minimum%20Operations%20to%20Make%20Array%20Elements%20Zero%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203495.%20Minimum%20Operations%20to%20Make%20Array%20Elements%20Zero.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/06%20-%2009%20-%202025%20---%203495.%20Minimum%20Operations%20to%20Make%20Array%20Elements%20Zero%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203495.%20Minimum%20Operations%20to%20Make%20Array%20Elements%20Zero.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/06%20-%2009%20-%202025%20---%203495.%20Minimum%20Operations%20to%20Make%20Array%20Elements%20Zero%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203495.%20Minimum%20Operations%20to%20Make%20Array%20Elements%20Zero.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/06%20-%2009%20-%202025%20---%203495.%20Minimum%20Operations%20to%20Make%20Array%20Elements%20Zero%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203495.%20Minimum%20Operations%20to%20Make%20Array%20Elements%20.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/aec62250-4587-4da7-98bf-74f2196c5f49" width = "700px" height="462px" />

</h1>
