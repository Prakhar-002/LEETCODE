# 837. New 21 Game

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/new-21-game/description/?envType=daily-question&envId=2025-08-17"><strong>➥ ☢️ 837 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Alice is playing a game loosely based on "21". Alice starts with 0 points and continues drawing numbers as long as her score is less than `k`. Each draw provides an integer number of points randomly chosen from the range [1, `maxPts`], with each outcome being equally likely and independent of all other draws.

### Alice stops drawing when her total score reaches `k` or more.

### Your task is to return the probability that, after Alice stops drawing, she has a total score of `n` or less.

### Answers within 10<sup>-5</sup> of the actual answer are considered acceptable.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 10, k = 1, maxPts = 10

  ### 📤 `Output`  ➤ 1.00000

  ### 🔦 `Explanation`  ➤ Alice gets a single card, then stops.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 6, k = 1, maxPts = 10

  ### 📤 `Output`  ➤ 0.60000

  ### 🔦 `Explanation` ➤ Alice gets a single card, then stops.
In 6 out of 10 possibilities, she is at or below 6 points.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 21, k = 17, maxPts = 10

  ### 📤 `Output`  ➤ 0.73278

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 0 <= k <= n <= 10<sup>4</sup> </br>

🔹 1 <= maxPts <= 10<sup>4</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Sliding Window**  </br>
🔸 **Probability and Statistics**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/17%20-%2008%20-%202025%20---%20%20837.%20New%2021%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20837.%20New%2021%20Game.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/17%20-%2008%20-%202025%20---%20%20837.%20New%2021%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20837.%20New%2021%20Game.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/17%20-%2008%20-%202025%20---%20%20837.%20New%2021%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20837.%20New%2021%20Game.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/17%20-%2008%20-%202025%20---%20%20837.%20New%2021%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20837.%20New%2021%20Game.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/0cdba445-a4ff-4cf7-9757-9e3f069c65d9" width = "700px" height="462px" />

</h1>
