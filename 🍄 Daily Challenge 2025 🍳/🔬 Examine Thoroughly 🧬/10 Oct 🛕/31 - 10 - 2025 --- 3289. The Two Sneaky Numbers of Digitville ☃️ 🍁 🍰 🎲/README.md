# 3289. The Two Sneaky Numbers of Digitville

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/description/?envType=daily-question&envId=2025-10-31"><strong>➥ ♻️ 3289 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### In the town of Digitville, there was a list of numbers called `nums` containing integers from 0 to `n - 1`. Each number was supposed to appear exactly once in the list, however, two mischievous numbers sneaked in an additional time, making the list longer than usual.

### As the town detective, your task is to find these two sneaky numbers. Return an array of size two containing the two numbers (in any order), so peace can return to Digitville.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `nums = [0,1,1,0]`

  ### 📤 `Output`  ➤ `[0,1]`

  ### 🔦 `Explanation`  ➤ ➺

  - The numbers 0 and 1 each appear twice in the array.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `nums = [0,3,2,1,3,2]`

  ### 📤 `Output`  ➤ `[2,3]`

  ### 🔦 `Explanation`  ➤ ➺

  - The numbers 2 and 3 each appear twice in the array.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `nums = [7,1,5,4,3,4,6,0,9,5,8,2]`

  ### 📤 `Output`  ➤ `[4,5]`

  ### 🔦 `Explanation`  ➤ ➺

  - The numbers 4 and 5 each appear twice in the array.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `2 <= n <= 100` </br>
🔹 `nums.length == n + 2` </br>
🔹 `0 <= nums[i] < n` </br>
🔹 The input is generated such that nums contains exactly two repeated elements. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Math** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/31%20-%2010%20-%202025%20---%203289.%20The%20Two%20Sneaky%20Numbers%20of%20Digitville%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203289.%20The%20Two%20Sneaky%20Numbers%20of%20Digitville.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/31%20-%2010%20-%202025%20---%203289.%20The%20Two%20Sneaky%20Numbers%20of%20Digitville%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203289.%20The%20Two%20Sneaky%20Numbers%20of%20Digitville.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/31%20-%2010%20-%202025%20---%203289.%20The%20Two%20Sneaky%20Numbers%20of%20Digitville%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203289.%20The%20Two%20Sneaky%20Numbers%20of%20Digitville.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/31%20-%2010%20-%202025%20---%203289.%20The%20Two%20Sneaky%20Numbers%20of%20Digitville%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203289.%20The%20Two%20Sneaky%20Numbers%20of%20Digitville.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/534b363d-3572-4b3e-9e2d-bd936e034301" width = "700px" height="462px" />

</h1>
