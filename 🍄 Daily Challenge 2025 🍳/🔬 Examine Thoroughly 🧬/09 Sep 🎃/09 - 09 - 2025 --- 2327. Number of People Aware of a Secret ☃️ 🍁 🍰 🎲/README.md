# 2327. Number of People Aware of a Secret

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/number-of-people-aware-of-a-secret/description/?envType=daily-question&envId=2025-09-09"><strong>➥ ☢️ 2327 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### On day 1, one person discovers a secret.

### You are given an integer delay, which means that each person will share the secret with a new person every day, starting from delay days after discovering the secret. You are also given an integer forget, which means that each person will forget the secret forget days after discovering it. A person cannot share the secret on the same day they forgot it, or on any day afterwards.

### Given an integer n, return the number of people who know the secret at the end of day n. Since the answer may be very large, return it modulo 10^9 + 7.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `n = 6, delay = 2, forget = 4`

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ ➺

  - Day 1: Suppose the first person is named A. (1 person)

  - Day 2: A is the only person who knows the secret. (1 person)

  - Day 3: A shares the secret with a new person, B. (2 people)

  - Day 4: A shares the secret with a new person, C. (3 people)

  - Day 5: A forgets the secret, and B shares the secret with a new person, D. (3 people)

  - Day 6: B shares the secret with E, and C shares the secret with F. (5 people)

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `n = 4, delay = 1, forget = 3`

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation` ➤
  
  - Day 1: The first person is named A. (1 person)

  - Day 2: A shares the secret with B. (2 people)

  - Day 3: A and B share the secret with 2 new people, C and D. (4 people)

  - Day 4: A forgets the secret. B, C, and D share the secret with 3 new people. (6 people)

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `n = 10, delay = 2, forget = 5`

  ### 📤 `Output`  ➤ 38

  ### 🔦 `Explanation`  ➤ Follow given Logic until 10 is reached where some known the algorithm start from forgetting hence can count 58 valid number exist

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `2 <= n <= 1000` </br>

🔹 `1 <= delay < forget <= n` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Dynamic Programming** </br>
🔸 **Queue** </br>
🔸 **Simulation** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/09%20-%2009%20-%202025%20---%202327.%20Number%20of%20People%20Aware%20of%20a%20Secret%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202327.%20Number%20of%20People%20Aware%20of%20a%20Secret.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/09%20-%2009%20-%202025%20---%202327.%20Number%20of%20People%20Aware%20of%20a%20Secret%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202327.%20Number%20of%20People%20Aware%20of%20a%20Secret.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/09%20-%2009%20-%202025%20---%202327.%20Number%20of%20People%20Aware%20of%20a%20Secret%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202327.%20Number%20of%20People%20Aware%20of%20a%20Secret.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/09%20-%2009%20-%202025%20---%202327.%20Number%20of%20People%20Aware%20of%20a%20Secret%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202327.%20Number%20of%20People%20Aware%20of%20a%20Secret.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/fed1e9b7-d46d-420b-bbef-0fb739ebbe6f" width = "700px" height="462px" />

</h1>
