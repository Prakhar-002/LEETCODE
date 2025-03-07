# 2579. Count Total Number of Colored Cells

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-total-number-of-colored-cells/description/?envType=daily-question&envId=2025-03-05"><strong>➥ ☢️ 2579 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There exists an infinitely large two-dimensional grid of uncolored unit cells. You are given a positive integer n, indicating that you must do the following routine for n minutes:

- At the first minute, color any arbitrary unit cell blue.

- Every minute thereafter, color blue every uncolored cell that touches a blue cell.

### Below is a pictorial representation of the state of the grid after minutes 1, 2, and 3.

<img src="https://github.com/user-attachments/assets/d9228796-b738-4d10-ad38-c9fca6225a30" width="500px" height="279px"/>

### Return the number of colored cells at the end of n minutes.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  n = 1

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ After 1 minute, there is only 1 blue cell, so we return 1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 2

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation` ➤ After 2 minutes, there are 4 colored cells on the boundary and 1 in the center, so we return 5.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= n <= 105<sup>5</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/05%20-%2003%20-%202025%20---%202579.%20Count%20Total%20Number%20of%20Colored%20Cells%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%202579.%20Count%20Total%20Number%20of%20Colored%20Cells.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/05%20-%2003%20-%202025%20---%202579.%20Count%20Total%20Number%20of%20Colored%20Cells%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%202579.%20Count%20Total%20Number%20of%20Colored%20Cells.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/05%20-%2003%20-%202025%20---%202579.%20Count%20Total%20Number%20of%20Colored%20Cells%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%202579.%20Count%20Total%20Number%20of%20Colored%20Cells.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/05%20-%2003%20-%202025%20---%202579.%20Count%20Total%20Number%20of%20Colored%20Cells%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202579.%20Count%20Total%20Number%20of%20Colored%20Cells.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/05%20-%2003%20-%202025%20---%202579.%20Count%20Total%20Number%20of%20Colored%20Cells%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%202579.%20Count%20Total%20Number%20of%20Colored%20Cells.c)  |
