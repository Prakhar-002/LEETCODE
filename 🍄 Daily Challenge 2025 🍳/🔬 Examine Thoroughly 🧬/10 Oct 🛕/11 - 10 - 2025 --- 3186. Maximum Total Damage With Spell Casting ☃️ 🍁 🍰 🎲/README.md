# 3186. Maximum Total Damage With Spell Casting

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-total-damage-with-spell-casting/description/?envType=daily-question&envId=2025-10-11 "><strong>➥ ☢️ 3186 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A magician has various spells.

### You are given an array `power`, where each element represents the damage of a spell. Multiple spells can have the same damage value.

### It is a known fact that if a magician decides to cast a spell with a damage of `power[i]`, they cannot cast any spell with a damage of `power[i] - 2`, `power[i] - 1`, `power[i] + 1`, or `power[i] + 2`.

### Each spell can be cast only once.

### Return the maximum possible total damage that a magician can cast.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `power = [1,1,3,4]`

  ### 📤 `Output`  ➤ `6`

  ### 🔦 `Explanation`  ➤ ➺

  - The maximum possible damage of 6 is produced by casting spells 0, 1, 3 with damage 1, 1, 4.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `power = [7,1,6,6]`

  ### 📤 `Output`  ➤ `13`

  ### 🔦 `Explanation`  ➤ ➺

  - The maximum possible damage of 13 is produced by casting spells 1, 2, 3 with damage 1, 6, 6.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= power.length <= 10^5` </br>
🔹 `1 <= power[i] <= 10^9` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Two Pointers** </br>
🔸 **Binary Search** </br>
🔸 **Dynamic Programming** </br>
🔸 **Sorting** </br>
🔸 **Counting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/11%20-%2010%20-%202025%20---%203186.%20Maximum%20Total%20Damage%20With%20Spell%20Casting%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203186.%20Maximum%20Total%20Damage%20With%20Spell%20Casting.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/11%20-%2010%20-%202025%20---%203186.%20Maximum%20Total%20Damage%20With%20Spell%20Casting%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203186.%20Maximum%20Total%20Damage%20With%20Spell%20Casting.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/11%20-%2010%20-%202025%20---%203186.%20Maximum%20Total%20Damage%20With%20Spell%20Casting%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203186.%20Maximum%20Total%20Damage%20With%20Spell%20Casting.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/11%20-%2010%20-%202025%20---%203186.%20Maximum%20Total%20Damage%20With%20Spell%20Casting%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203186.%20Maximum%20Total%20Damage%20With%20Spell%20Casting.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/132255e3-9265-4b9c-95b6-a210f843cea0" width = "700px" height="462px" />

</h1>
