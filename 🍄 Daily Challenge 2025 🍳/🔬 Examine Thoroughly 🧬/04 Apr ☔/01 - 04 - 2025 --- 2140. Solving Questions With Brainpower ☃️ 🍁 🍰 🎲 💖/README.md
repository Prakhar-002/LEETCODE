# 2140. Solving Questions With Brainpower

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/solving-questions-with-brainpower/description/?envType=daily-question&envId=2025-04-01"><strong>➥ ☢️ 2140 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

You are given a 0-indexed 2D integer array `questions` representing an exam. Each questions[i] = [points<sub>i</sub>, brainpower<sub>i</sub>] contains information about the i<sup>th</sup> question.

You must process the questions in order, starting from question 0. For each question, you have the choice to either *solve* or *skip* it.

- If you *solve* question `i`, you earn points<sub>i</sub> points, but you are then unable to solve the next brainpower<sub>i</sub> questions.
- If you *skip* question `i`, you simply move on to the next question and make a decision for it.

Your task is to return *the maximum number of points you can earn for the entire exam*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ questions = [[3,2],[4,3],[4,4],[2,5]]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ The maximum points can be earned by solving questions 0 and 3.
- Solve question 0: Earn 3 points, will be unable to solve the next 2 questions
- Unable to solve questions 1 and 2
- Solve question 3: Earn 2 points
Total points earned: 3 + 2 = 5. There is no other way to earn 5 or more points.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ questions = [[1,1],[2,2],[3,3],[4,4],[5,5]]

  ### 📤 `Output`  ➤ 7

  ### 🔦 `Explanation` ➤ The maximum points can be earned by solving questions 1 and 4.
- Skip question 0
- Solve question 1: Earn 2 points, will be unable to solve the next 2 questions
- Unable to solve questions 2 and 3
- Solve question 4: Earn 5 points
Total points earned: 2 + 5 = 7. There is no other way to earn 7 or more points.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ questions = [[1, 5], [5, 2], [10, 1], [1, 3], [8, 4]]

  ### 📤 `Output`  ➤ 18

  ### 🔦 `Explanation`  ➤ - Skip question 0

  - Solve question 1 which get 5 point (skip question '2', and '3')

  - Solve question '4' get 8 points .
            
  Final : 5 + 8

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

   ### 📥 `Input`  ➤ questions = [[5,0],[4,0],[3,0],[2,0],[1,0]]

   ### 📤 `Output`  ➤ 15

   ### 🔦 `Explanation`  ➤ since 'brainpower' column elements as '0'. so the value should as '5+4+3+2+1'= 15 for each iteration add value for those number index

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= questions.length <= 10<sup>5</sup> </br>
🔹 questions[i].length == 2 </br>
🔹 1 <= pointsi, brainpoweri <= 10<sup>5</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Dynamic Programming**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/01%20-%2004%20-%202025%20---%202140.%20Solving%20Questions%20With%20Brainpower%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%202140.%20Solving%20Questions%20With%20Brainpower.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/01%20-%2004%20-%202025%20---%202140.%20Solving%20Questions%20With%20Brainpower%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%202140.%20Solving%20Questions%20With%20Brainpower.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/01%20-%2004%20-%202025%20---%202140.%20Solving%20Questions%20With%20Brainpower%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%202140.%20Solving%20Questions%20With%20Brainpower.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/01%20-%2004%20-%202025%20---%202140.%20Solving%20Questions%20With%20Brainpower%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202140.%20Solving%20Questions%20With%20Brainpower.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/109f0bfe-2ede-43da-85b3-e97f75fcec48" width = "700px" height="462px" />

</h1>
