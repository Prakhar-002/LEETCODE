# 860. Lemonade Change

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/lemonade-change/description/?envType=daily-question&envId=2024-08-15"><strong>➥ ♻️ 860 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### At a lemonade stand, each lemonade costs `$5`. Customers are standing in a queue to buy from you and order one at a time (in the order specified by bills). Each customer will only buy one lemonade and pay with either a `$5`, `$10`, or `$20` bill. You must provide the correct change to each customer so that the net transaction is that the customer pays `$5`.

### Note that you do not have any change in hand at first.

### Given an integer array `bills` where `bills[i]` is the bill the `i-th` customer pays, return *`true` if you can provide every customer with the correct change, or `false` otherwise*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ bills = [5,5,5,10,20]

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ ➺

    From the first 3 customers, 
          ➺ we collect three $5 bills in order.

    From the fourth customer, 
          ➺ we collect a $10 bill and give back a $5.

    From the fifth customer, 
          ➺ we give a $10 bill and a $5 bill.

    Since all customers got correct change, 
          ➺ we output true.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ bills = [5,5,10,10,20]

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation` ➤ 
    From the first two customers in order, 
        we collect two $5 bills.

    For the next two customers in order, 
        we collect a $10 bill and give back a $5 bill.

    For the last customer, 
        we can not give the change of $15 back 
          because we only have two $10 bills.

    Since not every customer received the correct change,
       the answer is false.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= bills.length <= 10<sup>5</sup>** </br>

🔹 **`bills[i]` is either `5`, `10`, or `20`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Greedy**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/15%20-%2008%20-%202024%20---%20860.%20Lemonade%20Change%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA_860_LemonadeChange.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/15%20-%2008%20-%202024%20---%20860.%20Lemonade%20Change%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-860_LemonadeChange.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/15%20-%2008%20-%202024%20---%20860.%20Lemonade%20Change%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON_860_LemonadeChange.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/15%20-%2008%20-%202024%20---%20860.%20Lemonade%20Change%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT_860_LemonadeChange.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/15%20-%2008%20-%202024%20---%20860.%20Lemonade%20Change%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%92%96C_860_LemonadeChange.c)  |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/15%20-%2008%20-%202024%20---%20860.%20Lemonade%20Change%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%94%8F%20%20Leetcode%20sol%20860.%20Lemonade%20Change.md)  |
