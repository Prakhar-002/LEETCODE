# 1769. Minimum Number of Operations to Move All Balls to Each Box

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/description/?envType=daily-question&envId=2025-01-06"><strong>➥ ☢️ 1769 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You have `n` boxes. You are given a binary string `boxes` of length `n`, where `boxes[i]` is `'0'` if the i<sup>th</sup> box is empty, and `'1'` if it contains one ball.

### In one operation, you can move one ball from a box to an adjacent box. Box `i` is adjacent to box `j` if `abs(i - j) == 1`. Note that after doing so, there may be more than one ball in some boxes.

### Return an array `answer` of size `n`, where `answer[i]` is the minimum number of operations needed to move all the balls to the `i`<sup>th</sup> box.

### Each `answer[i]` is calculated considering the initial state of the boxes.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ boxes = "110"

  ### 📤 `Output`  ➤ [1,1,3]

  ### 🔦 `Explanation`  ➤ The answer for each box is as follows:</br> </br> 1) First box: you will have to move one ball from the second box to the first box in one operation.</br> </br> 2) Second box: you will have to move one ball from the first box to the second box in one operation.</br> </br> 3) Third box: you will have to move one ball from the first box to the third box in two operations, and move one ball from the second box to the third box in one operation.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  boxes = "001011"

  ### 📤 `Output`  ➤ [11,8,5,4,3,4]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == boxes.length`** </br>

🔹 **`1 <= n <= 2000`** </br>

🔹 **`boxes[i]` is either `'0'` or `'1'`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **String**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/06%20-%2001%20-%202025%20---%201769.%20Minimum%20Number%20of%20Operations%20to%20Move%20All%20Balls%20to%20Each%20Box%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201769.%20Minimum%20Number%20of%20Operations%20to%20Mo.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/06%20-%2001%20-%202025%20---%201769.%20Minimum%20Number%20of%20Operations%20to%20Move%20All%20Balls%20to%20Each%20Box%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201769.%20Minimum%20Number%20of%20Operations%20to%20Move.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/06%20-%2001%20-%202025%20---%201769.%20Minimum%20Number%20of%20Operations%20to%20Move%20All%20Balls%20to%20Each%20Box%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201769.%20Minimum%20Number%20of%20Operations%20to%20Mo.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/06%20-%2001%20-%202025%20---%201769.%20Minimum%20Number%20of%20Operations%20to%20Move%20All%20Balls%20to%20Each%20Box%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201769.%20Minimum%20Number%20of%20Operations%20t.js) |

