# 1462. Course Schedule IV

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/course-schedule-iv/description/?envType=daily-question&envId=2025-01-27"><strong>➥ ☢️ 1462 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are a total of `numCourses` courses you have to take, labeled from `0` to `numCourses - 1`. You are given an array prerequisites where prerequisites[i] = [a<sub>i</sub>, b<sub>i</sub>] indicates that you must take course a<sub>i</sub> first if you want to take course b<sub>i</sub>.

- For example, the pair `[0, 1]` indicates that you have to take course `0` before you can take course `1`.

### Prerequisites can also be indirect. If course `a` is a prerequisite of course `b`, and course `b` is a prerequisite of course `c`, then course `a` is a prerequisite of course `c`.

### You are also given an array queries where queries[j] = [uj, vj]. For the jth query, you should answer whether course uj is a prerequisite of course vj or not.

### Return *a boolean array* `answer`, *where* `answer[j]` *is the answer to the* j<sup>th</sup> query.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/912eda89-a69f-4101-8df6-b9e69405efce" width="222px" height="62px"/>

  ### 📥 `Input`  ➤ numCourses = 2, prerequisites = [[1,0]], queries = [[0,1],[1,0]]

  ### 📤 `Output`  ➤ [false,true]

  ### 🔦 `Explanation`  ➤ The pair [1, 0] indicates that you have to take course 1 before you can take course 0.</br> Course 0 is not a prerequisite of course 1, but the opposite is true.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ numCourses = 2, prerequisites = [], queries = [[1,0],[0,1]]

  ### 📤 `Output`  ➤ [false,false]

  ### 🔦 `Explanation` ➤ There are no prerequisites, and each course is independent.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/7ae30f75-cd45-49f5-81f3-8b09f32fa9d6" width="222px" height="222px"/>

  ### 📥 `Input` ➤ numCourses = 3, prerequisites = [[1,2],[1,0],[2,0]], queries = [[1,0],[1,2]]

  ### 📤 `Output`  ➤ [true,true]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`2 <= numCourses <= 100`** </br>

🔹 **`0 <= prerequisites.length <= (numCourses * (numCourses - 1) / 2)`** </br>

🔹 **`prerequisites[i].length == 2`** </br>

🔹 **0 <= a<sub>i</sub>, b<sub>i</sub> <= numCourses - 1** </br>

🔹 **a<sub>i</sub> != b<sub>i</sub>** </br>

🔹 **All the pairs [a<sub>i</sub>, b<sub>i</sub>] are unique.** </br>

🔹 **The prerequisites graph has no cycles.** </br>

🔹 **1 <= queries.length <= 10<sup>4</sup>** </br>

🔹 **0 <= u<sub>i</sub>, v<sub>i</sub> <= numCourses - 1** </br>

🔹 **u<sub>i</sub> != v<sub>i</sub>** </br>

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/27%20-%2001%20-%202025%20---%201462.%20Course%20Schedule%20IV%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201462.%20Course%20Schedule%20IV.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/27%20-%2001%20-%202025%20---%201462.%20Course%20Schedule%20IV%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201462.%20Course%20Schedule%20IV.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/27%20-%2001%20-%202025%20---%201462.%20Course%20Schedule%20IV%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201462.%20Course%20Schedule%20IV.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/27%20-%2001%20-%202025%20---%201462.%20Course%20Schedule%20IV%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201462.%20Course%20Schedule%20IV.js) |
