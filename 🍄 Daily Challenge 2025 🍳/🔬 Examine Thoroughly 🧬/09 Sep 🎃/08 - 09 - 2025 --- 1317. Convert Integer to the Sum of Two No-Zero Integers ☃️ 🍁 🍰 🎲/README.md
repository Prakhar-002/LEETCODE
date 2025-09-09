# 1317. Convert Integer to the Sum of Two No-Zero Integers

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/?envType=daily-question&envId=2025-09-08"><strong>➥ ♻️ 1317 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### No-Zero integer is a positive integer that does not contain any 0 in its decimal representation.

### Given an integer n, return a list of two integers [a, b] where:

- a and b are No-Zero integers.

- a + b = n

### The test cases are generated so that there is at least one valid solution. If there are many valid solutions, you can return any of them.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `n = 2`

  ### 📤 `Output`  ➤ [1,1]

  ### 🔦 `Explanation`  ➤ ➺
  
  - Let a = 1 and b = 1.
  
  - Both a and b are no-zero integers, and a + b = 2 = n.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `n = 11`

  ### 📤 `Output`  ➤ [2,9]

  ### 🔦 `Explanation` ➤

  - Let a = 2 and b = 9.

  - Both a and b are no-zero integers, and a + b = 11 = n.

  ### Note that there are other valid answers as [8, 3] that can be accepted.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `n = 101`

  ### 📤 `Output`  ➤ [1, 100] Nope ! [ 92 , 9 ]
  Solution Should both Not Zero number

  ### 🔦 `Explanation`  ➤ if First is a then, n will 0 no! No Zero integers

  It will have some logic as other possible [ Number and 1  + with checking in it'll zero or  Not zero . Solution.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `2 <= n <= 10^4` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/08%20-%2009%20-%202025%20---%201317.%20Convert%20Integer%20to%20the%20Sum%20of%20Two%20No-Zero%20Integers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201317.%20Convert%20Integer%20to%20the%20Sum%20of%20Two%20No-Zero%20.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/08%20-%2009%20-%202025%20---%201317.%20Convert%20Integer%20to%20the%20Sum%20of%20Two%20No-Zero%20Integers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201317.%20Convert%20Integer%20to%20the%20Sum%20of%20Two%20No-Zero%20In.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/08%20-%2009%20-%202025%20---%201317.%20Convert%20Integer%20to%20the%20Sum%20of%20Two%20No-Zero%20Integers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201317.%20Convert%20Integer%20to%20the%20Sum%20of%20Two%20No-Zero%20.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/08%20-%2009%20-%202025%20---%201317.%20Convert%20Integer%20to%20the%20Sum%20of%20Two%20No-Zero%20Integers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201317.%20Convert%20Integer%20to%20the%20Sum%20of%20Two%20No-Z.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/c34848c2-fc49-47f7-be33-09c699845f97" width = "700px" height="462px" />

</h1>
