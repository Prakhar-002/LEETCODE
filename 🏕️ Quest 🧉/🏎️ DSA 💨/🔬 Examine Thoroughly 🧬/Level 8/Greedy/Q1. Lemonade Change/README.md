# Q1. Lemonade Change

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/lemonade-change/description/?envType=problem-list-v2&envId=dsa-strategy-summit-greedy"><strong>➥ ♻️ Q1 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### At a lemonade stand, each lemonade costs `$5`. Customers stand in a queue and each buys **one** lemonade, paying with a `$5`, `$10`, or `$20` bill. You start with **no change**. Given an integer array `bills` where `bills[i]` is the bill the `i`‑th customer pays, return `true` if you can provide correct change to **every** customer, otherwise return `false`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤ `bills = [5,5,5,10,20]`

### 📤 `Output`  ➤ `true`

### 🔦 `Explanation`  ➤  
From the first three customers, you collect three `$5` bills.  
From the fourth, you take `$10` and give back `$5`.  
From the fifth, you give back `$10` + `$5`.  
All customers receive correct change.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `bills = [5,5,10,10,20]`

### 📤 `Output`  ➤ `false`

### 🔦 `Explanation` ➤  
You collect two `$5` bills from the first two customers.  
For the next two, you take `$10` and give back `$5` each time.  
For the last customer paying `$20`, you cannot give `$15` change (only two `$10` bills), so not all customers get correct change.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= bills.length <= 10^5` </br>
🔹 `bills[i]` is either `5`, `10`, or `20`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Greedy** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/Greedy/Q1.%20Lemonade%20Change/%F0%9F%8D%81JAVA%20-%20Lemonade%20Change.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/Greedy/Q1.%20Lemonade%20Change/%F0%9F%8E%B2CPP%20-%20Lemonade%20Change.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/Greedy/Q1.%20Lemonade%20Change/%F0%9F%8D%B0PYTHON%20-%20Lemonade%20Change.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/Greedy/Q1.%20Lemonade%20Change/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Lemonade%20Change.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/f43e0163-f84d-4725-b0b3-16ec84a93468" width = "700px" height="462px" />

</h1>
