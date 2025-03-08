# 1423. Maximum Points You Can Obtain from Cards

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/"><strong>➥ ☢️ 1423 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are several cards arranged in a row, and each card has an associated **number of points**.  
### The points are given in the **integer array** `cardPoints`.  

- In **one step**, you can take **one card** from the **beginning** or from the **end** of the row.

- You have to take **exactly** `k` cards.

- Your **score** is the sum of the **points** of the cards you have taken.

### Given the **integer array** `cardPoints` and the **integer** `k`, return the **maximum score** you can obtain.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ cardPoints = `[1,2,3,4,5,6,1]`, k = `3`

  ### 📤 `Output`  ➤ 12

  ### 🔦 `Explanation`  ➤ </br>- The optimal strategy is to take the **three cards on the right**, giving a final score of `1 + 6 + 5 = 12`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ cardPoints = `[2,2,2]`, k = `2`

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤ </br></br>- Regardless of which **two cards** you take, your score will always be `4`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ cardPoints = `[9,7,7,9,7,7,9]`, k = `7`

  ### 📤 `Output`  ➤ 55

  ### 🔦 `Explanation` ➤ </br></br>- You have to take **all the cards**.  </br></br>- Your score is the **sum of points** of all cards, which is `55`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= cardPoints.length <= 10⁵` </br>
🔹 `1 <= cardPoints[i] <= 10⁴` </br>
🔹 `1 <= k <= cardPoints.length` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Sliding Window**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%201423.%20Maximum%20Points%20You%20Can%20Obtain%20from%20Cards%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%201423.%20Maximum%20Points%20You%20Can%20Obtain%20from%20Cards.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%201423.%20Maximum%20Points%20You%20Can%20Obtain%20from%20Cards%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%201423.%20Maximum%20Points%20You%20Can%20Obtain%20from%20Cards.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%201423.%20Maximum%20Points%20You%20Can%20Obtain%20from%20Cards%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%201423.%20Maximum%20Points%20You%20Can%20Obtain%20from%20Cards.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%201423.%20Maximum%20Points%20You%20Can%20Obtain%20from%20Cards%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201423.%20Maximum%20Points%20You%20Can%20Obtain%20from%20Cards.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%201423.%20Maximum%20Points%20You%20Can%20Obtain%20from%20Cards%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%201423.%20Maximum%20Points%20You%20Can%20Obtain%20from%20Cards.c)  |
