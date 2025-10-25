# 1716. Calculate Money in Leetcode Bank

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/calculate-money-in-leetcode-bank/description/?envType=daily-question&envId=2025-10-25"><strong>➥ ♻️ 1716 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Hercy wants to save money for his first car. He puts money in the Leetcode bank every day.

### He starts by putting in $1 on Monday, the first day. Every day from Tuesday to Sunday, he will put in $1 more than the day before. On every subsequent Monday, he will put in $1 more than the previous Monday.

### Given `n`, return the total amount of money he will have in the Leetcode bank at the end of the `n`th day.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `n = 4`

  ### 📤 `Output`  ➤ `10`

  ### 🔦 `Explanation`  ➤ ➺

  - After the 4th day, the total is 1 + 2 + 3 + 4 = 10.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `n = 10`

  ### 📤 `Output`  ➤ `37`

  ### 🔦 `Explanation`  ➤ ➺

  - After the 10th day, the total is (1 + 2 + 3 + 4 + 5 + 6 + 7) + (2 + 3 + 4) = 37. Notice that on the 2nd Monday, Hercy only puts in $2.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `n = 20`

  ### 📤 `Output`  ➤ `96`

  ### 🔦 `Explanation`  ➤ ➺

  - After the 20th day, the total is (1 + 2 + 3 + 4 + 5 + 6 + 7) + (2 + 3 + 4 + 5 + 6 + 7 + 8) + (3 + 4 + 5 + 6 + 7 + 8) = 96.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= n <= 1000` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/25%20-%2010%20-%202025%20---%201716.%20Calculate%20Money%20in%20Leetcode%20Bank%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201716.%20Calculate%20Money%20in%20Leetcode%20Bank.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/25%20-%2010%20-%202025%20---%201716.%20Calculate%20Money%20in%20Leetcode%20Bank%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201716.%20Calculate%20Money%20in%20Leetcode%20Bank.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/25%20-%2010%20-%202025%20---%201716.%20Calculate%20Money%20in%20Leetcode%20Bank%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201716.%20Calculate%20Money%20in%20Leetcode%20Bank.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/25%20-%2010%20-%202025%20---%201716.%20Calculate%20Money%20in%20Leetcode%20Bank%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201716.%20Calculate%20Money%20in%20Leetcode%20Bank.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/4f177122-6d86-4bbb-b761-5f9b4ae024f6" width = "700px" height="462px" />

</h1>
