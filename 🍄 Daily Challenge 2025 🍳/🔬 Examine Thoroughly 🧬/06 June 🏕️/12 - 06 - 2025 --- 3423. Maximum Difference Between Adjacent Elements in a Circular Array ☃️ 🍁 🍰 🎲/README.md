# 3423. Maximum Difference Between Adjacent Elements in a Circular Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array/description/?envType=daily-question&envId=2025-06-12"><strong>➥ ♻️ 3423 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a circular array `nums`, find the maximum absolute difference between adjacent elements.

### Note: In a circular array, the first and last elements are adjacent.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,2,4]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ Because nums is circular, `nums[0]` and `nums[2]` are adjacent. They have the maximum absolute difference of `|4 - 1| = 3`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [-5,-10,-5]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation` ➤ The adjacent elements `nums[0]` and `nums[1]` have the maximum absolute difference of `|-5 - (-10)| = 5`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`2 <= nums.length <= 100`** </br>

🔹 **`-100 <= nums[i] <= 100`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/12%20-%2006%20-%202025%20---%203423.%20Maximum%20Difference%20Between%20Adjacent%20Elements%20in%20a%20Circular%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203423.%20Maximum%20Difference%20Between.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/12%20-%2006%20-%202025%20---%203423.%20Maximum%20Difference%20Between%20Adjacent%20Elements%20in%20a%20Circular%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203423.%20Maximum%20Difference%20Between%20A.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/12%20-%2006%20-%202025%20---%203423.%20Maximum%20Difference%20Between%20Adjacent%20Elements%20in%20a%20Circular%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203423.%20Maximum%20Difference%20Between.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/12%20-%2006%20-%202025%20---%203423.%20Maximum%20Difference%20Between%20Adjacent%20Elements%20in%20a%20Circular%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203423.%20Maximum%20Difference%20Bet.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/12%20-%2006%20-%202025%20---%203423.%20Maximum%20Difference%20Between%20Adjacent%20Elements%20in%20a%20Circular%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%92%96C%20-%203423.%20Maximum%20Difference%20Between%20Adjac.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/78f7234d-62d9-4f68-ab7c-1f4b90e2e39d" width = "700px" height="462px" />

</h1>
