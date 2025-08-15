# 207. Course Schedule

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/course-schedule/description/"><strong>➥ ☢️ 207 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷ 

### There are a total of `numCourses` courses that you need to take, labeled from 0 to `numCourses - 1`. You are provided an array `prerequisites`, where each `prerequisites[i] = [ai, bi]` signifies that you must take course `bi` *before* you can take course `ai`.

### In other words, to take course `ai`, you must first have completed course `bi`.

### Your task is to determine whether it is possible to finish *all* the courses, given the set of prerequisites. Return `true` if you can complete all courses, and `false` otherwise.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ numCourses = 2, prerequisites = [[1,0]]

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤
There are a total of 2 courses to take.
To take course 1 you should have finished course 0. So it is possible.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ numCourses = 2, prerequisites = [[1,0],[0,1]]

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation` ➤
There are a total of 2 courses to take.
To take course 1 you should have finished course 0, and to take course 0 you should also have finished course 1. So it is impossible (a cycle exists).

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= numCourses <= 2000 </br>

🔹 0 <= prerequisites.length <= 5000 </br>

🔹 prerequisites[i].length == 2 </br>

🔹 0 <= ai, bi < numCourses </br>

🔹 All the pairs prerequisites[i] are unique. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Depth-First Search**  </br>

🔸 **Breadth-First Search**  </br>

🔸 **Graph**  </br>

🔸 **Topological Sort**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20207.%20Course%20Schedule%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20207.%20Course%20Schedule.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20207.%20Course%20Schedule%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20207.%20Course%20Schedule.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20207.%20Course%20Schedule%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20207.%20Course%20Schedule.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20207.%20Course%20Schedule%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20207.%20Course%20Schedule.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/e98a2afd-e787-4734-b066-8923f58167b6" width = "700px" height="462px" />

</h1>
