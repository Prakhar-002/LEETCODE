# 1344. Angle Between Hands of a Clock

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/angle-between-hands-of-a-clock/?envType=daily-question&envId=2026-06-19"><strong>➥ ☢️ 1344 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### Given two numbers, `hour` and `minutes`, return the **smaller angle** (in degrees) formed between the `hour` and the `minute` hand.
### Answers within `10^-5` of the actual value will be accepted as correct.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="300" height="300" alt="image" src="https://github.com/user-attachments/assets/e15fb502-0f9f-446f-a08b-824f03410f2b" />

  ### 📥 `Input`  ➤ hour = 12, minutes = 30
  ### 📤 `Output`  ➤ 165
  ### 🔦 `Explanation`  ➤ At 12:30, the minute hand is at `180°` and the hour hand has moved halfway between 12 and 1, landing at `15°`. The smaller angle between them is `|180 - 15| = 165°`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
<img width="300" height="300" alt="image" src="https://github.com/user-attachments/assets/7dcb7c4b-6b59-42d7-b1c9-1947650289d9" />

  ### 📥 `Input` ➤ hour = 3, minutes = 30
  ### 📤 `Output`  ➤ 75
  ### 🔦 `Explanation` ➤ At 3:30, the minute hand is at `180°` and the hour hand is at `105°`. The smaller angle between them is `|180 - 105| = 75°`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
<img width="300" height="300" alt="image" src="https://github.com/user-attachments/assets/0ce648d7-093f-4f8e-b9a5-07eb37b16ebf" />

  ### 📥 `Input` ➤ hour = 3, minutes = 15
  ### 📤 `Output`  ➤ 7.5
  ### 🔦 `Explanation` ➤ At 3:15, the minute hand is at `90°` and the hour hand is at `97.5°`. The smaller angle between them is `|97.5 - 90| = 7.5°`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= hour <= 12` </br>
🔹 `0 <= minutes <= 59` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Math** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/18%20-%2004%20-%202025%20---%201344.%20Angle%20Between%20Hands%20of%20a%20Clock%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201344.%20Angle%20Between%20Hands%20of%20a%20Clock.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/18%20-%2004%20-%202025%20---%201344.%20Angle%20Between%20Hands%20of%20a%20Clock%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201344.%20Angle%20Between%20Hands%20of%20a%20Clock.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/18%20-%2004%20-%202025%20---%201344.%20Angle%20Between%20Hands%20of%20a%20Clock%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201344.%20Angle%20Between%20Hands%20of%20a%20Clock.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/18%20-%2004%20-%202025%20---%201344.%20Angle%20Between%20Hands%20of%20a%20Clock%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201344.%20Angle%20Between%20Hands%20of%20a%20Clock.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/85219710-7d49-454c-b971-75b08c756475" width = "700px" height="462px" />

</h1>
