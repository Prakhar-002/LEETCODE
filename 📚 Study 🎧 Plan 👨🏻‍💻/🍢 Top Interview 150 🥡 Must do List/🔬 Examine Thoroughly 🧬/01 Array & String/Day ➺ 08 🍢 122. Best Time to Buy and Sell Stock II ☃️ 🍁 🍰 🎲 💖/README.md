# 122. Best Time to Buy and Sell Stock II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/?envType=study-plan-v2&envId=top-interview-150"><strong>➥ ☢️ 122 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `prices` where `prices[i]` is the price of a given stock on the i<sup>th</sup> day.

### On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day.

### Find and return the maximum profit you can achieve.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ prices = [7,1,5,3,6,4]

  ### 📤 `Output`  ➤ 7

  ### 🔦 `Explanation`  ➤ Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.</br> Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.</br> Total profit is 4 + 3 = 7.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  prices = [1,2,3,4,5]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤ Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.</br> Total profit is 4.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ prices = [7,6,4,3,1]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ There is no way to make a positive profit, so we never buy the stock to achieve the maximum profit of 0.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= prices.length <= 3 * 10<sup>4</sup>** </br>

🔹 **0 <= prices[i] <= 10<sup>4</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Greedy**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2008%20%F0%9F%8D%A2%20122.%20Best%20Time%20to%20Buy%20and%20Sell%20Stock%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%20122.%20Best%20Time%20to%20Buy%20and%20.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2008%20%F0%9F%8D%A2%20122.%20Best%20Time%20to%20Buy%20and%20Sell%20Stock%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%20122.%20Best%20Time%20to%20Buy%20and%20Se.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2008%20%F0%9F%8D%A2%20122.%20Best%20Time%20to%20Buy%20and%20Sell%20Stock%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%20122.%20Best%20Time%20to%20Buy%20and%20.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2008%20%F0%9F%8D%A2%20122.%20Best%20Time%20to%20Buy%20and%20Sell%20Stock%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20122.%20Best%20Time%20to%20Buy%20.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2008%20%F0%9F%8D%A2%20122.%20Best%20Time%20to%20Buy%20and%20Sell%20Stock%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%20122.%20Best%20Time%20to%20Buy%20and%20Sell%20S.c)  |
