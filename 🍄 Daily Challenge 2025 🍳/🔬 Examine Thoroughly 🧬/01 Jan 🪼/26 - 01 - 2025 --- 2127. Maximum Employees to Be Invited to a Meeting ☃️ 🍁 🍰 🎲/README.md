# 2127. Maximum Employees to Be Invited to a Meeting

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-employees-to-be-invited-to-a-meeting/description/?envType=daily-question&envId=2025-01-26"><strong>➥ ☢️ 2127 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A company is organizing a meeting and has a list of `n` employees, waiting to be invited. They have arranged for a large circular table, capable of seating any number of employees.

### The employees are numbered from `0` to `n - 1`. Each employee has a favorite person and they will attend the meeting only if they can sit next to their favorite person at the table. The favorite person of an employee is not themself.

### Given a 0-indexed integer array `favorite`, where `favorite[i]` denotes the favorite person of the i<sup>th</sup> employee, return *the maximum number of employees that can be invited to the meeting*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`  ➤ favorite = [2,2,1,2]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ The above figure shows how the company can invite employees 0, 1, and 2, and seat them at the round table.</br> All employees cannot be invited because employee 2 cannot sit beside employees 0, 1, and 3, simultaneously.</br> Note that the company can also invite employees 1, 2, and 3, and give them their desired seats.</br> The maximum number of employees that can be invited to the meeting is 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ favorite = [1,2,0]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ Each employee is the favorite person of at least one other employee, and the only way the company can invite them is if they invite every employee.</br> The seating arrangement will be the same as that in the figure given in example 1:</br> - Employee 0 will sit between employees 2 and 1.</br> - Employee 1 will sit between employees 0 and 2.</br> - Employee 2 will sit between employees 1 and 0.</br> The maximum number of employees that can be invited to the meeting is 3.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input` ➤ favorite = [3,0,1,4,1]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ The above figure shows how the company will invite employees 0, 1, 3, and 4, and seat them at the round table.</br> Employee 2 cannot be invited because the two spots next to their favorite employee 1 are taken.</br> So the company leaves them out of the meeting.</br> The maximum number of employees that can be invited to the meeting is 4.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == favorite.length`** </br>

🔹 **2 <= n <= 10<sup>5</sup>** </br>

🔹 **`0 <= favorite[i] <= n - 1`** </br>

🔹 **`favorite[i] != i`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Depth-First Search**  </br>
🔸 **Graph**  </br>
🔸 **Topological Sort**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
