# 

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ ---- Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are managing a school with several classes, each having a final exam. You have a 2D integer array `classes` where `classes[i] = [passi, totali]`. This means that in the i<sup>th</sup> class, there are `totali` students, and `passi` of them are expected to pass the exam.

### You are also given an integer `extraStudents`. These are additional students, guaranteed to pass, that you can assign to any of the classes.

### The Goal: You want to assign each of the `extraStudents` to a class in such a way as to maximize the *average pass ratio* across all classes.

### Definitions:

- **Pass Ratio:** The number of students who pass divided by the total number of students in a class (i.e., `passi / totali`).
- **Average Pass Ratio:** The sum of all pass ratios divided by the number of classes.

### Your task is to return the maximum possible average pass ratio after assigning the `extraStudents` students to classes optimally. Your answer must be within 10<sup>-5</sup> of the actual maximum.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `classes = [[1,2],[3,5],[2,2]], extraStudents = 2`

  ### 📤 `Output`  ➤ 0.78333

  ### 🔦 `Explanation`  ➤ You can assign the two extra students to the first class. The average pass ratio will be equal to (3/4 + 3/5 + 2/2) / 3 = 0.78333.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `classes = [[2,4],[3,9],[4,5],[2,10]], extraStudents = 4`

  ### 📤 `Output`  ➤ 0.53485

  ### 🔦 `Explanation` ➤ Four brilliant students will improve all class such that final output match to .53485.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `classes = [[0,5]] , extraStudents = 2 `

  ### 📤 `Output`  ➤ 0.266666

  ### 🔦 `Explanation`  ➤ two will assign and make better than average. which is 2.2.6

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= classes.length <= 10^5` </br>

🔹 `classes[i].length == 2` </br>

🔹 `1 <= passi <= totali <= 10^5` </br>

🔹 `1 <= extraStudents <= 10^5` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Greedy** </br>
🔸 **Heap (Priority Queue)** </br>

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
