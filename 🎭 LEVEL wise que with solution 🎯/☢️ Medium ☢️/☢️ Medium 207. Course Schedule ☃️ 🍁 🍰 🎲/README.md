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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
