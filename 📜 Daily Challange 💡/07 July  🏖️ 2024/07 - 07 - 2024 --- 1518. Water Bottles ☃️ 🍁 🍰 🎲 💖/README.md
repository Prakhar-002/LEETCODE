# 1518. Water Bottles

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/water-bottles/description/?envType=daily-question&envId=2024-07-07"><strong>➥ ♻️ 1518 Leetcode Que Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are `numBottles` water bottles that are initially full of water. You can exchange `numExchange` empty water bottles from the market with one full water bottle.

### The operation of drinking a full water bottle turns it into an empty bottle.

### Given the two integers `numBottles` and `numExchange`, return the `maximum` number of water bottles you can drink.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![1518 que 1](https://github.com/Prakhar-002/LEETCODE/assets/136890202/122a1ad4-6ada-469c-b22c-3946680faa51)

  ### 📥 Input  ➤ numBottles = 9, numExchange = 3

  ### 📤 Output  ➤ 13

  ### 🔦 Explanation  ➤ You can exchange 3 empty bottles to get 1 full water bottle.</br> Number of water bottles you can drink: 9 + 3 + 1 = 13.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![1518 que 2](https://github.com/Prakhar-002/LEETCODE/assets/136890202/cb98bd89-58bf-4726-83f1-bf8a303ee2e6)

  ### 📥 Input ➤ numBottles = 15, numExchange = 4

  ### 📤 Output  ➤ 19

  ### 🔦 Explanation  ➤ You can exchange 4 empty bottles to get 1 full water bottle. </br> Number of water bottles you can drink: 15 + 3 + 1 = 19.


</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= numBottles <= 100** </br>
🔹 **2 <= numExchange <= 100** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>
🔸 **Simulation**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ---------------- | --------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/07%20-%2007%20-%202024%20---%201518.%20Water%20Bottles%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA-1518-WaterBottles.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/07%20-%2007%20-%202024%20---%201518.%20Water%20Bottles%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP-1518-WaterBottles.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/07%20-%2007%20-%202024%20---%201518.%20Water%20Bottles%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON-1518-WaterBottles.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/07%20-%2007%20-%202024%20---%201518.%20Water%20Bottles%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT-1518-WaterBottles.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/07%20-%2007%20-%202024%20---%201518.%20Water%20Bottles%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C-1518-WaterBottles.c)  |
