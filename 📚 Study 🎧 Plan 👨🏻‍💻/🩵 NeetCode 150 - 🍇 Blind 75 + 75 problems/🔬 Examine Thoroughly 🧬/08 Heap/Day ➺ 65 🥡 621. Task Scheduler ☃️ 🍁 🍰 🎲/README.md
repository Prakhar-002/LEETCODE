# 621. Task Scheduler

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/task-scheduler/description/"><strong>➥ ☢️ 621 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array `tasks`, where each element represents a CPU task labeled with an uppercase English letter (from 'A' to 'Z'). You are also given an integer `n`, representing the cooldown interval.

### The objective is to determine the minimum number of CPU intervals required to complete all the tasks, subject to the following constraint: There must be at least `n` intervals between any two tasks that have the *same* label. This means that if you execute a task, you need to wait for `n` CPU intervals before executing another task of the same type.

### During each CPU interval, you can either be *idle* (do nothing) or complete *one* task. The tasks can be completed in any order.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ tasks = ["A","A","A","B","B","B"], n = 2

  ### 📤 `Output`  ➤ 8

  ### 🔦 `Explanation`  ➤ A possible sequence is: A -> B -> idle -> A -> B -> idle -> A -> B.

After completing task A, you must wait two intervals before doing A again. The same applies to task B. In the 3rd interval, neither A nor B can be done, so you idle. By the 4th interval, you can do A again as 2 intervals have passed.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ tasks = ["A","C","A","B","D","B"], n = 1

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation` ➤ A possible sequence is: A -> B -> C -> D -> A -> B.

With a cooling interval of 1, you can repeat a task after just one other task.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ tasks = ["A","A","A", "B","B","B"], n = 3

  ### 📤 `Output`  ➤ 10

  ### 🔦 `Explanation` ➤ A possible sequence is: A -> B -> idle -> idle -> A -> B -> idle -> idle -> A -> B.

There are only two types of tasks, A and B, which need to be separated by 3 intervals. This leads to idling twice between repetitions of these tasks.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= tasks.length <= 10<sup>4</sup> </br>

🔹 tasks[i] is an uppercase English letter. </br>

🔹 0 <= n <= 100 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Hash Table**  </br>

🔸 **Greedy**  </br>

🔸 **Sorting**  </br>

🔸 **Heap (Priority Queue)**  </br>

🔸 **Counting**  </br>

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
