# 416. Partition Equal Subset Sum

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/partition-equal-subset-sum/description/?envType=daily-question&envId=2025-04-07"><strong>➥ ☢️ 416 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums`. Your task is to determine if you can divide the array into two subsets such that the sum of elements within each subset is equal.

Return `true` if such a partitioning is possible. Otherwise, return `false`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,5,11,5]

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ The array can be partitioned as [1, 5, 5] and [11].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,2,3,5]

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation` ➤ The array cannot be partitioned into equal sum subsets.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2, 2, 3, 5]

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ We can split the array into [2,3] and [2,5] for this instance . therefore the value are equivalent to 5 on both instance.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

   ### 📥 `Input`  ➤ nums = [1, 2, 3, 4, 5]

   ### 📤 `Output`  ➤ true

   ### 🔦 `Explanation`  ➤We can achieve splitting array with[1,2,3,4]. therefore the sum should as 5 to have equal partition can able!

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= nums.length <= 200` </br>
🔹 `1 <= nums[i] <= 100` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Dynamic Programming**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/07%20-%2004%20-%202025%20---%20416.%20Partition%20Equal%20Subset%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20416.%20Partition%20Equal%20Subset%20Sum.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/07%20-%2004%20-%202025%20---%20416.%20Partition%20Equal%20Subset%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20416.%20Partition%20Equal%20Subset%20Sum.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/07%20-%2004%20-%202025%20---%20416.%20Partition%20Equal%20Subset%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20416.%20Partition%20Equal%20Subset%20Sum.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/07%20-%2004%20-%202025%20---%20416.%20Partition%20Equal%20Subset%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20416.%20Partition%20Equal%20Subset%20Sum.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/b413141c-a457-44db-b36a-1bc328d5c53f" width = "700px" height="462px" />

</h1>
