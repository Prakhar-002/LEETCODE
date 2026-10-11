# 2778. Sum of Squares of Special Elements 

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/sum-of-squares-of-special-elements/description/?envType=daily-question&envId=2026-10-11"><strong>➥ ♻️ 2778 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 1-indexed integer array `nums` of length `n`.

### An element `nums[i]` of `nums` is called special if `i` divides `n`, i.e., `n % i == 0`.

### Return the sum of the squares of all special elements of `nums`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`   ➤ `nums = [1,2,3,4]`

  ### 📤 `Output`  ➤ `21`

  ### 🔦 `Explanation`  ➤ ➺ There are exactly 3 special elements in `nums`: `nums[1]` since 1 divides 4, `nums[2]` since 2 divides 4, and `nums[4]` since 4 divides 4. Hence, the sum of the squares of all special elements of `nums` is `nums[1] * nums[1] + nums[2] * nums[2] + nums[4] * nums[4] = 1 * 1 + 2 * 2 + 4 * 4 = 21`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums = [2,7,1,19,18,3]`

  ### 📤 `Output`  ➤ `63`

  ### 🔦 `Explanation` ➤ ➺ There are exactly 4 special elements in `nums`: `nums[1]` since 1 divides 6, `nums[2]` since 2 divides 6, `nums[3]` since 3 divides 6, and `nums[6]` since 6 divides 6. Hence, the sum of the squares of all special elements of `nums` is `nums[1] * nums[1] + nums[2] * nums[2] + nums[3] * nums[3] + nums[6] * nums[6] = 2 * 2 + 7 * 7 + 1 * 1 + 3 * 3 = 63`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums = [5]`

  ### 📤 `Output`  ➤ `25`

  ### 🔦 `Explanation`  ➤ ➺ `n = 1`, and index 1 divides 1. The sum of the squares is `5 * 5 = 25`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= nums.length == n <= 50`** </br>

🔹 **`1 <= nums[i] <= 50`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Simulation** </br>
🔸 **Math** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/11%20-%2010%20-%202026%20---%202778.%20Sum%20of%20Squares%20of%20Special%20Elements%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202778.%20Sum%20of%20Squares%20of%20Special%20Elements%20.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/11%20-%2010%20-%202026%20---%202778.%20Sum%20of%20Squares%20of%20Special%20Elements%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202778.%20Sum%20of%20Squares%20of%20Special%20Elements%20.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/11%20-%2010%20-%202026%20---%202778.%20Sum%20of%20Squares%20of%20Special%20Elements%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202778.%20Sum%20of%20Squares%20of%20Special%20Elements%20.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/11%20-%2010%20-%202026%20---%202778.%20Sum%20of%20Squares%20of%20Special%20Elements%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202778.%20Sum%20of%20Squares%20of%20Special%20Elements%20.js) |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/sum-of-squares-of-special-elements/solutions/8567079/leetcode-daily-grind-java-c-python-javas-xt9f) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/5304f60a-841a-4ddd-95e7-4a3f78bc4529" width = "700px" height="462px" />

</h1>
