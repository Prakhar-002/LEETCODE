# 3178. Find the Child Who Has the Ball After K Seconds

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-child-who-has-the-ball-after-k-seconds/description/"><strong>➥ ♻️ 3178 Leetcode Que Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two `positive` integers `n` and `k`. There are n children numbered from `0` to `n - 1` standing in a queue in order from left to right.

### Initially, child 0 holds a ball and the direction of passing the ball is towards the right direction. After each second, the child holding the ball passes it to the child next to them. Once the ball reaches either end of the line, i.e. child 0 or child `n - 1`, the direction of passing is `reversed`.

### Return *the number of the child who receives the ball after k seconds*.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 Input  ➤ n = 3, k = 5

  ### 📤 Output  ➤ 1

  ### 🔦 Explanation  ➤ 

  
|Time elapsed	| Children |
|-------------|---------|
|0	          |[0, 1, 2]|
|1	          |[0, 1, 2]|
|2	          |[0, 1, 2]|
|3	          |[0, 1, 2]|
|4	          |[0, 1, 2]|
|5	          |[0, 1, 2]|


</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤  n = 5, k = 6

  ### 📤 Output  ➤ 2

  ### 🔦 Explanation ➤ 

|Time elapsed	| Children |
|-------------|---------|
|0	     |[0, 1, 2, 3, 4]|
|1	     |[0, 1, 2, 3, 4]|
|2	     |[0, 1, 2, 3, 4]|
|3	     |[0, 1, 2, 3, 4]|
|4	     |[0, 1, 2, 3, 4]|
|5	     |[0, 1, 2, 3, 4]|
|6	     |[0, 1, 2, 3, 4]|

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤  n = 4, k = 2

  ### 📤 Output  ➤ 2

  ### 🔦 Explanation  ➤ 

|Time elapsed	| Children |
|-------------|---------|
|0	      |[0, 1, 2, 3]|
|1	      |[0, 1, 2, 3]|
|2	      |[0, 1, 2, 3]|



</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **2 <= n <= 50** </br>
🔹 **1 <= k <= 50** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203178.%20Find%20the%20Child%20Who%20Has%20the%20Ball%20After%20K%20Seconds%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA-3178-FindTheChildWhoHasTheBallAfterKSeconds.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203178.%20Find%20the%20Child%20Who%20Has%20the%20Ball%20After%20K%20Seconds%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP-3178-FindTheChildWhoHasTheBallAfterKSeconds.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203178.%20Find%20the%20Child%20Who%20Has%20the%20Ball%20After%20K%20Seconds%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON-3178-FindTheChildWhoHasTheBallAfterKSeconds.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203178.%20Find%20the%20Child%20Who%20Has%20the%20Ball%20After%20K%20Seconds%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT-3178-FindTheChildWhoHasTheBallAfterKSeconds.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203178.%20Find%20the%20Child%20Who%20Has%20the%20Ball%20After%20K%20Seconds%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C-3178-FindTheChildWhoHasTheBallAfterKSeconds.c)  |
