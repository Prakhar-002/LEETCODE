# 3423. Maximum Difference Between Adjacent Elements in a Circular Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array/description/"><strong>➥ ☢️ 3423 Leetcode Medium ☢️ </strong></a>
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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203423.%20Maximum%20Difference%20Between%20Adjacent%20Elements%20in%20a%20Circular%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%203423.%20Maximum%20Difference%20Between%20Adjacent%20Elements%20in%20a%20Ci.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203423.%20Maximum%20Difference%20Between%20Adjacent%20Elements%20in%20a%20Circular%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%203423.%20Maximum%20Difference%20Between%20Adjacent%20Elements%20in%20a%20Circ.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203423.%20Maximum%20Difference%20Between%20Adjacent%20Elements%20in%20a%20Circular%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%203423.%20Maximum%20Difference%20Between%20Adjacent%20Elements%20in%20a%20Ci.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203423.%20Maximum%20Difference%20Between%20Adjacent%20Elements%20in%20a%20Circular%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203423.%20Maximum%20Difference%20Between%20Adjacent%20Elements%20in%20.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203423.%20Maximum%20Difference%20Between%20Adjacent%20Elements%20in%20a%20Circular%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%203423.%20Maximum%20Difference%20Between%20Adjacent%20Elements%20in%20a%20Circular.c)  |
