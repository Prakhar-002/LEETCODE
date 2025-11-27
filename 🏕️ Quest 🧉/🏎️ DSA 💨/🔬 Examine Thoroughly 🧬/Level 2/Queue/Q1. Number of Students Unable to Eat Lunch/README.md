# Q1. Number of Students Unable to Eat Lunch

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/description/?envType=problem-list-v2&envId=dsa-sequence-valley-queue"><strong>➥ ♻️ Q1 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### The school cafeteria offers circular and square sandwiches at lunch break, referred to by numbers `0` and `1` respectively. All students stand in a queue. Each student either prefers square or circular sandwiches.

### The number of sandwiches in the cafeteria is equal to the number of students. The sandwiches are placed in a stack. At each step:

- If the student at the front of the queue prefers the sandwich on the top of the stack, they will take it and leave the queue.
- Otherwise, they will leave it and go to the queue's end.

### This continues until none of the queue students want to take the top sandwich and are thus unable to eat.

### You are given two integer arrays `students` and `sandwiches` where `sandwiches[i]` is the type of the ith sandwich in the stack (i = 0 is the top of the stack) and `students[j]` is the preference of the jth student in the initial queue (j = 0 is the front of the queue). Return the number of students that are unable to eat.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ students = [1,1,0,0], sandwiches = [0,1,0,1]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤
- Front student leaves the top sandwich and returns to the end of the line making students = [1,0,0,1].
- Front student leaves the top sandwich and returns to the end of the line making students = [0,0,1,1].
- Front student takes the top sandwich and leaves the line making students = [0,1,1] and sandwiches = [1,0,1].
- Front student leaves the top sandwich and returns to the end of the line making students = [1,1,0].
- Front student takes the top sandwich and leaves the line making students = [1,0] and sandwiches = [0,1].
- Front student leaves the top sandwich and returns to the end of the line making students = [0,1].
- Front student takes the top sandwich and leaves the line making students = [1] and sandwiches = [1].
- Front student takes the top sandwich and leaves the line making students = [] and sandwiches = [].
Hence all students are able to eat.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ students = [1,1,1,0,0,1], sandwiches = [1,0,0,0,1,1]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤  Three students are unable to eat because the sandwich queue becomes [0,0,0,1,1] while the student queue becomes [1,1,1,0,0,1], leading to a situation where students keep going to the end of the line but are never able to take the top sandwich.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= students.length, sandwiches.length <= 100 </br>
🔹 students.length == sandwiches.length </br>
🔹 sandwiches[i] is 0 or 1. </br>
🔹 students[i] is 0 or 1. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Stack** </br>
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

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
