# 1262. Greatest Sum Divisible by Three

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/greatest-sum-divisible-by-three/description/?envType=daily-question&envId=2025-11-23"><strong>➥ ☢️ 1262 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an integer array `nums`, return the maximum possible sum of elements of the array such that it is divisible by three.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [3,6,5,1,8]

  ### 📤 `Output`  ➤ 18

  ### 🔦 `Explanation`  ➤ Pick numbers 3, 6, 1 and 8 their sum is 18 (maximum sum divisible by 3).

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [4]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ Since 4 is not divisible by 3, do not pick any number.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,2,3,4,4]

  ### 📤 `Output`  ➤ 12

  ### 🔦 `Explanation` ➤ Pick numbers 1, 3, 4 and 4 their sum is 12 (maximum sum divisible by 3).

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 4 * 104 </br>
🔹 1 <= nums[i] <= 104 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Dynamic Programming** </br>
🔸 **Greedy** </br>
🔸 **Sorting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/23%20-%2011%20-%202025%20---%201262.%20Greatest%20Sum%20Divisible%20by%20Three%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201262.%20Greatest%20Sum%20Divisible%20by%20Three.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/23%20-%2011%20-%202025%20---%201262.%20Greatest%20Sum%20Divisible%20by%20Three%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201262.%20Greatest%20Sum%20Divisible%20by%20Three.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/23%20-%2011%20-%202025%20---%201262.%20Greatest%20Sum%20Divisible%20by%20Three%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201262.%20Greatest%20Sum%20Divisible%20by%20Three.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/23%20-%2011%20-%202025%20---%201262.%20Greatest%20Sum%20Divisible%20by%20Three%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201262.%20Greatest%20Sum%20Divisible%20by%20Three.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/a61eaaa3-ce38-4d49-b653-db12868f067f" width = "700px" height="462px" />

</h1>
