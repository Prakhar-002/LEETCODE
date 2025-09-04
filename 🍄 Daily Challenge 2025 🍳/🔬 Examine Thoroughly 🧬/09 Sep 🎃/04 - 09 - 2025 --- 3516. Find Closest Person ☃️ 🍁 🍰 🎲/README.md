# 3516. Find Closest Person

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-closest-person/description/?envType=daily-question&envId=2025-09-04"><strong>➥ ♻️ 3516 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given three integers x, y, and z, representing the positions of three people on a number line:

  - x is the position of Person 1.

  - y is the position of Person 2.

  - z is the position of Person 3, who does not move.

### Both Person 1 and Person 2 move toward Person 3 at the same speed.

### Determine which person reaches Person 3 first:

- Return 1 if Person 1 arrives first.

- Return 2 if Person 2 arrives first.

- Return 0 if both arrive at the same time.

### Return the result accordingly.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `x = 2, y = 7, z = 4`

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ ➺

  - Person 1 is at position 2 and can reach Person 3 (at position 4) in 2 steps.
  
  - Person 2 is at position 7 and can reach Person 3 in 3 steps.

### Since Person 1 reaches Person 3 first, the output is 1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `x = 2, y = 5, z = 6`

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤
  
  - Person 1 is at position 2 and can reach Person 3 (at position 6) in 4 steps.
  
  - Person 2 is at position 5 and can reach Person 3 in 1 step.
  
  ### Since Person 2 reaches Person 3 first, the output is 2.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `x = 1, y = 5, z = 3`

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤
  
  - Person 1 is at position 1 and can reach Person 3 (at position 3) in 2 steps.
  
  - Person 2 is at position 5 and can reach Person 3 in 2 steps.
  
  ### Since both Person 1 and Person 2 reach Person 3 at the same time, the output is 0.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= x, y, z <= 100` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/04%20-%2009%20-%202025%20---%203516.%20Find%20Closest%20Person%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203516.%20Find%20Closest%20Person.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/04%20-%2009%20-%202025%20---%203516.%20Find%20Closest%20Person%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203516.%20Find%20Closest%20Person.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/04%20-%2009%20-%202025%20---%203516.%20Find%20Closest%20Person%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203516.%20Find%20Closest%20Person.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/04%20-%2009%20-%202025%20---%203516.%20Find%20Closest%20Person%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203516.%20Find%20Closest%20Person.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/1fb21d50-dde6-452b-95e1-0ae89ba19864" width = "700px" height="462px" />

</h1>
