# 983. Minimum Cost For Tickets

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-cost-for-tickets/description/?envType=daily-question&envId=2024-12-31"><strong>➥ ☢️ 983 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You have planned some train traveling one year in advance. The days of the year in which you will travel are given as an integer array `days`. Each day is an integer from `1` to `365`.

### Train tickets are sold in `three different ways`:

- a `1-day` pass is sold for `costs[0]` dollars,
- a `7-day` pass is sold for `costs[1]` dollars, and
- a `30-day` pass is sold for `costs[2]` dollars.

### The passes allow that many days of consecutive travel.

- For example, if we get a `7-day` pass on day `2`, then we can travel for `7` days: `2`, `3`, `4`, `5`, `6`, `7`, and `8`.

### Return *the minimum number of dollars you need to travel every day in the given list of days*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ days = [1,4,6,7,8,20], costs = [2,7,15]

  ### 📤 `Output`  ➤ 11

  ### 🔦 `Explanation`  ➤ For example, here is one way to buy passes that lets you travel your travel plan:</br> On day 1, you bought a 1-day pass for costs[0] = $2, which covered day 1.</br> On day 3, you bought a 7-day pass for costs[1] = $7, which covered days 3, 4, ..., 9.</br> On day 20, you bought a 1-day pass for costs[0] = $2, which covered day 20.</br> In total, you spent $11 and covered all the days of your travel.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ days = [1,2,3,4,5,6,7,8,9,10,30,31], costs = [2,7,15]

  ### 📤 `Output`  ➤ 17

  ### 🔦 `Explanation` ➤ For example, here is one way to buy passes that lets you travel your travel plan:</br> On day 1, you bought a 30-day pass for costs[2] = $15 which covered days 1, 2, ..., 30.</br> On day 31, you bought a 1-day pass for costs[0] = $2 which covered day 31.</br> In total, you spent $17 and covered all the days of your travel.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= days.length <= 365`** </br>

🔹 **`1 <= days[i] <= 365`** </br>

🔹 **`days` is in strictly increasing order.** </br>

🔹 **`costs.length == 3`** </br>

🔹 **`1 <= costs[i] <= 1000`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Dynamic Programming**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/31%20-%2012%20-%202024%20---%20983.%20Minimum%20Cost%20For%20Tickets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20983.%20Minimum%20Cost%20For%20Tickets.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/31%20-%2012%20-%202024%20---%20983.%20Minimum%20Cost%20For%20Tickets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20983.%20Minimum%20Cost%20For%20Tickets.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/31%20-%2012%20-%202024%20---%20983.%20Minimum%20Cost%20For%20Tickets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20983.%20Minimum%20Cost%20For%20Tickets.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/31%20-%2012%20-%202024%20---%20983.%20Minimum%20Cost%20For%20Tickets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20983.%20Minimum%20Cost%20For%20Tickets.js) |
