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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
