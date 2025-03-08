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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
