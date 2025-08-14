# 210. Course Schedule II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/course-schedule-ii/description/"><strong>➥ ☢️ 210 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are `numCourses` courses you need to take, labeled from 0 to `numCourses - 1`. You are given an array `prerequisites` where `prerequisites[i] = [ai, bi]` indicates that you must take course `bi` *before* course `ai`.

### Your objective is to return a possible ordering of courses you should take to complete all the courses. If there are multiple valid orderings, return *any* of them. If it is impossible to finish all courses (due to a circular dependency or other conflicts), return an empty array.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ numCourses = 2, prerequisites = [[1,0]]

  ### 📤 `Output`  ➤ [0,1]

  ### 🔦 `Explanation`  ➤
There are a total of 2 courses to take. To take course 1 you should have finished course 0. So the correct course order is [0,1].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ numCourses = 4, prerequisites = [[1,0],[2,0],[3,1],[3,2]]

  ### 📤 `Output`  ➤ [0,2,1,3]

  ### 🔦 `Explanation` ➤
There are a total of 4 courses to take. To take course 3 you should have finished both courses 1 and 2. Both courses 1 and 2 should be taken after you finished course 0.
So one correct course order is [0,1,2,3]. Another correct ordering is [0,2,1,3].

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ numCourses = 1, prerequisites = []

  ### 📤 `Output`  ➤ [0]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= numCourses <= 2000 </br>

🔹 0 <= prerequisites.length <= numCourses * (numCourses - 1) </br>

🔹 prerequisites[i].length == 2 </br>

🔹 0 <= ai, bi < numCourses </br>

🔹 ai != bi </br>

🔹 All the pairs [ai, bi] are distinct. </br>

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
